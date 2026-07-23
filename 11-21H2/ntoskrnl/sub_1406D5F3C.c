/*
 * XREFs of sub_1406D5F3C @ 0x1406D5F3C
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1406D66F0 (RtlGetSetBootStatusData.c)
 *     sub_1406D6A3C @ 0x1406D6A3C (sub_1406D6A3C.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D5F3C(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  char v4; // r12
  unsigned __int64 v5; // rcx
  size_t v6; // r15
  NTSTATUS SetBootStatusData; // esi
  size_t v8; // rax
  __int64 i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 j; // r15
  __int64 v13; // r11
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+34h] [rbp-64h]
  unsigned int v17; // [rsp+38h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+4Ch] [rbp-4Ch]
  char *v21; // [rsp+50h] [rbp-48h]
  char *v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  void *Src; // [rsp+68h] [rbp-30h]
  char v26; // [rsp+B8h] [rbp+20h]

  ReturnLength = 0;
  v17 = 0;
  v19 = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v26 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v23 = (v5 * (unsigned __int128)0x18u) >> 64;
    v6 = 24 * v5;
    if ( is_mul_ok(v5, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v6 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_27;
    Pool2 = (char *)ExAllocatePool2(256LL, v6, 544040269LL);
    v21 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_27;
    }
    if ( v6 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( (v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v6 > 0x7FFFFFFF0000LL || v8 + v6 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v16 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v22 = &Pool2[24 * i];
      ProbeForWrite(*((volatile void **)v22 + 1), *((unsigned int *)v22 + 4), 1u);
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v21 = Pool2;
  }
  v26 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F610, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !v4 || (LOBYTE(v11) = v4, SetBootStatusData = sub_1406D6C24(FileHandle, v11, 1LL), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        v16 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v22 = &Pool2[24 * j];
        DataClass = *(_DWORD *)v22;
        SetBootStatusData = sub_1406D6A3C((unsigned int)DataClass, &v17, &v19);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&unk_140CE2080 + v17;
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              1u,
                              DataClass,
                              Src,
                              *(_DWORD *)(v13 + 16),
                              &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
          memmove(*((void **)v22 + 1), Src, ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v26 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1F610);
    sub_1402AFC00((ULONG_PTR)&qword_140C1F610);
    KeLeaveCriticalRegion();
  }
  if ( v4 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
