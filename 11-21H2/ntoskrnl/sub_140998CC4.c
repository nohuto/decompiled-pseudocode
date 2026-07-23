/*
 * XREFs of sub_140998CC4 @ 0x140998CC4
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1409BA9F0 @ 0x1409BA9F0 (sub_1409BA9F0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140998CC4(__int64 a1)
{
  __int64 Pool2; // rsi
  KPROCESSOR_MODE v3; // r14
  unsigned __int64 v4; // kr00_8
  size_t v5; // r12
  NTSTATUS v6; // edi
  size_t v7; // rax
  __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  char v15; // [rsp+98h] [rbp+20h]

  Pool2 = 0LL;
  FileHandle = 0LL;
  v15 = 0;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v13 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u) >> 64;
    v5 = 24 * v4;
    if ( is_mul_ok(v4, 0x18uLL) )
    {
      v6 = 0;
    }
    else
    {
      v5 = -1LL;
      v6 = -1073741675;
    }
    if ( v6 < 0 )
      goto LABEL_26;
    Pool2 = ExAllocatePool2(256LL, v5, 544040269LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_26;
    }
    if ( v5 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v5 > 0x7FFFFFFF0000LL || v7 + v5 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove((void *)Pool2, *(const void **)(a1 + 16), v5);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v14 = Pool2 + 24 * i;
      ProbeForWrite(*(volatile void **)(v14 + 8), *(unsigned int *)(v14 + 16), 1u);
    }
  }
  else
  {
    Pool2 = *(_QWORD *)(a1 + 16);
    v12 = Pool2;
  }
  v15 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F610, 0LL);
  v6 = RtlLockBootStatusData(&FileHandle);
  if ( v6 >= 0 )
  {
    if ( !v3 || (v6 = sub_1406D6C24(FileHandle, v3, 1u), v6 >= 0) )
    {
      v6 = sub_1409BA9F0(FileHandle);
      if ( v6 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 16) )
          **(_BYTE **)(Pool2 + 8) = 0;
        else
          v6 = -1073741811;
      }
    }
  }
LABEL_26:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v15 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1F610);
    sub_1402AFC00((ULONG_PTR)&qword_140C1F610);
    KeLeaveCriticalRegion();
  }
  if ( v3 && Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v6;
}
