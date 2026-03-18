/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C016C78A
 * Callers:
 *     GetMiPInputTransform @ 0x1C01DCC90 (GetMiPInputTransform.c)
 *     GetInputTransformList @ 0x1C01F0020 (GetInputTransformList.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FEB18 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01EFC5C (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 */

__int64 __fastcall InputTransform::GetTransformList(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct tagINPUT_TRANSFORM *a5)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  struct tagINPUTTRANSFORMENTRY *v10; // rdx
  __int64 i; // rdi
  struct tagINPUTTRANSFORMENTRY *EntryByTime; // rax
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rbx
  _QWORD v15[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (unsigned int)a2;
  v8 = *((_QWORD *)this + 34);
  v15[1] = v8;
  if ( !v8 )
    return 0LL;
  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)v15, (struct _EX_PUSH_LOCK *)v8);
  v10 = *(struct tagINPUTTRANSFORMENTRY **)(v8 + 8);
  if ( v10 == (struct tagINPUTTRANSFORMENTRY *)(v8 + 8) )
  {
    ExReleasePushLockSharedEx(v15[0], 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v8, v10, *(_QWORD *)(a3 + 8 * i));
    v10 = EntryByTime;
    v15[2] = EntryByTime;
    if ( (_BYTE)a5 == 1 )
    {
      v13 = &a4[8 * (unsigned __int64)(unsigned int)i];
      if ( (unsigned __int64)v13 >= MmUserProbeAddress )
        v13 = (unsigned __int64 *)MmUserProbeAddress;
      *(_OWORD *)v13 = *(_OWORD *)((char *)EntryByTime + 24);
      *((_OWORD *)v13 + 1) = *(_OWORD *)((char *)EntryByTime + 40);
      *((_OWORD *)v13 + 2) = *(_OWORD *)((char *)EntryByTime + 56);
      *((_OWORD *)v13 + 3) = *(_OWORD *)((char *)EntryByTime + 72);
    }
    else
    {
      v14 = (unsigned __int64)(unsigned int)i << 6;
      *(_OWORD *)((char *)a4 + v14) = *(_OWORD *)((char *)EntryByTime + 24);
      *(_OWORD *)((char *)a4 + v14 + 16) = *(_OWORD *)((char *)EntryByTime + 40);
      *(_OWORD *)((char *)a4 + v14 + 32) = *(_OWORD *)((char *)EntryByTime + 56);
      *(_OWORD *)((char *)a4 + v14 + 48) = *(_OWORD *)((char *)EntryByTime + 72);
    }
  }
  ExReleasePushLockSharedEx(v15[0], 0LL);
  KeLeaveCriticalRegion();
  return 1LL;
}
