/*
 * XREFs of sub_1406CF708 @ 0x1406CF708
 * Callers:
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406D01BC @ 0x1406D01BC (sub_1406D01BC.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CF708(_QWORD *a1)
{
  _WORD *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS inited; // ebx
  unsigned int v5; // edi
  int v6; // eax
  const WCHAR *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  PVOID *v14; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v18; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  v16 = 0LL;
  DestinationString = 0LL;
  Src = (void *)ExAllocatePool2(256LL, 1024LL, 1684303952LL);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)((char *)&v16 + 4) = 128LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  v18 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v18, 1684303952LL);
    if ( !Pool2 )
    {
      inited = -1073741670;
      break;
    }
    v6 = sub_1406D01BC(qword_140D00AC0, (unsigned int)L"Root", 1, 0, 0LL, (__int64)Pool2, v18, (__int64)&v18);
    ++v5;
    inited = v6;
    if ( v6 != -1073741789 )
    {
      if ( v6 < 0 )
        break;
      v7 = Pool2;
      LODWORD(v16) = 0;
      if ( *Pool2 )
      {
        while ( 1 )
        {
          inited = sub_14077F2EC(qword_140D00AC0, (_DWORD)v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, v7);
          if ( inited >= 0 && !(unsigned int)sub_1406CF970(Handle, &DestinationString) )
          {
            ZwClose(Handle);
            goto LABEL_17;
          }
          ZwClose(Handle);
          if ( inited < 0 )
            break;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          v7 += v8 + 1;
          if ( !*v7 )
            goto LABEL_17;
        }
LABEL_28:
        v9 = DWORD2(v16);
        if ( !DWORD2(v16) )
          goto LABEL_29;
        if ( inited >= 0 )
          break;
      }
      else
      {
LABEL_17:
        inited = v16;
        if ( (int)v16 < 0 )
          goto LABEL_28;
        v9 = DWORD2(v16);
        if ( DWORD2(v16) )
        {
          v10 = (_DWORD *)ExAllocatePool2(256LL, 8LL * DWORD2(v16) + 16, 1684303952LL);
          v11 = v10;
          if ( v10 )
          {
            v12 = Src;
            *v10 = v9;
            memmove(v10 + 2, v12, 8 * v9);
            *a1 = v11;
            break;
          }
          inited = -1073741670;
        }
        else
        {
LABEL_29:
          inited = -1073741823;
        }
      }
      if ( (_DWORD)v9 )
      {
        v14 = (PVOID *)Src;
        do
        {
          ObfDereferenceObject(*v14++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(Src, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
