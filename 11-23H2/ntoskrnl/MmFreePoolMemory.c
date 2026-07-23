/*
 * XREFs of MmFreePoolMemory @ 0x140212224
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140210A6C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x1402121E0 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140286A58 (MmAllocatePoolMemory.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140355D1C (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402123C0 (MiDeterminePoolType.c)
 *     MiCountSystemPool @ 0x140212414 (MiCountSystemPool.c)
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x140213B54 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rsi
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // r10
  int v7; // edi
  BOOL v8; // ebp
  __int64 AnyMultiplexedVm; // rbx
  __int64 v10; // r15
  int v12; // r8d
  __int64 v13; // r10
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v4 = MiDeterminePoolType(*a1);
  if ( v4 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v5);
  v7 = v5 | 0x4000;
  v8 = v4 != 0;
  if ( (v5 & 0x8000) == 0 )
    v7 = v5;
  LODWORD(AnyMultiplexedVm) = v7;
  if ( (v7 & 0x4000) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      memset(v14, 0, sizeof(v14));
      v16 = 0LL;
      v15 = 0LL;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
      ((void (__fastcall *)(__int64, _QWORD, ULONG_PTR, __int64, bool, _OWORD *))MiDeleteSystemPagableVm)(
        AnyMultiplexedVm,
        0LL,
        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        v13,
        v12 != 0,
        v14);
      v10 = v15;
      MiReturnCommit(
        *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        v15 - *((_QWORD *)&v14[0] + 1));
      LOWORD(AnyMultiplexedVm) = v7;
    }
    else
    {
      if ( (v7 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v7 | 0x40000000;
      v10 = MiClearNonPagedPtes(v3, v6, (unsigned int)AnyMultiplexedVm, 1LL);
    }
    if ( v10 )
      MiCountSystemPool((unsigned int)(v8 + 5), v10, 0LL);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3, (unsigned int)(v8 + 5), 2LL);
  return 0LL;
}
