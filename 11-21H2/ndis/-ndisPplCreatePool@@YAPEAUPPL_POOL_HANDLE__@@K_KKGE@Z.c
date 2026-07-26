/*
 * XREFs of ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C00213FC
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C0021140 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C00320C0 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

struct PPL_POOL_HANDLE__ *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 Pool2; // rax
  unsigned int v13; // ebp
  __int64 i; // rdi
  FREE_FUNCTION_EX *v16; // r8

  v5 = 0LL;
  v8 = ndisMaxNumberOfProcessors + 1;
  if ( ndisMaxNumberOfProcessors <= 1 )
    v8 = ndisMaxNumberOfProcessors;
  v9 = v8;
  v11 = v8;
  v10 = v8 << 8;
  if ( is_mul_ok(0x100uLL, v11) && v10 + 128 >= v10 )
  {
    Pool2 = ExAllocatePool2(72LL, v10 + 128, a3);
    v5 = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)Pool2 = 0LL;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
      v13 = 0;
      for ( i = v5 + 128; v13 < v9; i += 256LL )
      {
        if ( i )
        {
          *(_OWORD *)(i + 216) = 0LL;
          *(_OWORD *)(i + 232) = 0LL;
          *(_QWORD *)(i + 248) = 0LL;
          memset((void *)i, 0, 0xD0uLL);
          KeInitializeSpinLock((PKSPIN_LOCK)(i + 208));
        }
        if ( !v13 )
        {
          v16 = (FREE_FUNCTION_EX *)ndisFreeNblToNPagedPool;
          if ( !a5 )
            v16 = (FREE_FUNCTION_EX *)ndisFreeToNPagedPool;
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)i,
            (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
            v16,
            NonPagedPoolNx,
            0,
            a2,
            a3,
            0x400u);
          *(_BYTE *)(i + 216) = 1;
        }
        InitializeSListHead((PSLIST_HEADER)(i + 128));
        *(_QWORD *)(i + 192) = i;
        ++v13;
        *(_QWORD *)(i + 200) = i + 128;
      }
    }
  }
  return (struct PPL_POOL_HANDLE__ *)v5;
}
