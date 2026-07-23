/*
 * XREFs of sub_1405CDDF8 @ 0x1405CDDF8
 * Callers:
 *     sub_1405CC1E0 @ 0x1405CC1E0 (sub_1405CC1E0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D5124 @ 0x1405D5124 (sub_1405D5124.c)
 *     sub_1405D5234 @ 0x1405D5234 (sub_1405D5234.c)
 */

NTSTATUS __fastcall sub_1405CDDF8(unsigned int a1)
{
  unsigned int v1; // r14d
  NTSTATUS result; // eax
  NTSTATUS v3; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r8d
  char v9; // bl
  unsigned __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  char v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rbx
  char v19; // di
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  char Buffer; // [rsp+98h] [rbp+10h] BYREF
  int v27; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v27 = 0;
  result = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
  v3 = result;
  if ( result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
    for ( i = qword_140C23B80; (ULONG_PTR *)i != &qword_140C23B80; i = *(_QWORD *)i )
    {
      v6 = *(_QWORD *)(i + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        v28 = v7;
        sub_1402D2864(v7, 0, 0);
        LOBYTE(v8) = 1;
        v9 = sub_1405D5234(*(_QWORD *)(i + 56), v1, v8, (unsigned int)&v27, 0LL);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        *(_DWORD *)(i + 616) = v3;
        memset((void *)(i + 632), 0, 0xC0uLL);
        if ( v9 && v27 > 1 )
        {
          *(_DWORD *)(i + 612) = v27;
          *(_BYTE *)(i + 608) = 1;
          *(_QWORD *)(i + 624) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 824), 0x810u);
        }
        else
        {
          *(_QWORD *)(i + 624) = 0LL;
          *(_BYTE *)(i + 608) = 0;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(i + 600));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v13 = *((_QWORD *)CurrentPrcb + 4375);
              v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
              *(_DWORD *)(v13 + 20) &= v14;
              if ( v15 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        v16 = 0;
        v17 = 0;
        if ( !*(_DWORD *)(i + 828) )
          goto LABEL_30;
        do
        {
          v18 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * v17) + 200LL;
          v19 = sub_1405D5124(*(_QWORD *)(i + 56), v17, a1, &v27);
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18);
          *(_DWORD *)(v18 + 16) = v3;
          memset((void *)(v18 + 32), 0, 0xC0uLL);
          if ( v19 && v27 )
          {
            v16 = 1;
            *(_DWORD *)(v18 + 12) = v27;
            *(_BYTE *)(v18 + 8) = 1;
            *(_QWORD *)(v18 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 824), 0x10u);
          }
          else
          {
            *(_BYTE *)(v18 + 8) = 0;
            *(_QWORD *)(v18 + 24) = 0LL;
          }
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v18);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v21 >= 2u )
              {
                v22 = KeGetCurrentPrcb();
                v23 = *((_QWORD *)v22 + 4375);
                v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v15 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
                *(_DWORD *)(v23 + 20) &= v24;
                if ( v15 )
                  sub_140418E4C((__int64)v22);
              }
            }
          }
          __writecr8(v20);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(i + 828) );
        v7 = v28;
        v1 = a1;
        if ( v16 )
          _InterlockedOr((volatile signed __int32 *)(i + 824), 0x100u);
        else
LABEL_30:
          _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFEFF);
        sub_1402D25CC(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
    sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
    sub_1402F9540((__int64)KeGetCurrentThread());
    Buffer = 1;
    return ZwUpdateWnfStateData(&stru_1400377C0, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
