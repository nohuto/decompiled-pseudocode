/*
 * XREFs of ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C001AD44
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C001AA50 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C0031630 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 */

struct PPL_POOL_HANDLE__ *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, unsigned __int8 a5)
{
  __int64 Pool2; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // ebp
  __int64 i; // rdi
  _OWORD *v14; // rbx
  FREE_FUNCTION_EX *v16; // r8

  Pool2 = 0LL;
  v8 = ndisMaxNumberOfProcessors + 1;
  if ( ndisMaxNumberOfProcessors <= 1 )
    v8 = ndisMaxNumberOfProcessors;
  v9 = v8;
  v11 = v8;
  v10 = v8 << 8;
  if ( is_mul_ok(0x100uLL, v11) && v10 + 128 >= v10 )
  {
    Pool2 = ExAllocatePool2(72LL, v10 + 128, a3);
    if ( Pool2 )
    {
      *(_OWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)Pool2 = 0LL;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
      v12 = 0;
      for ( i = Pool2 + 128; v12 < v9; i += 256LL )
      {
        v14 = (_OWORD *)(i + 216);
        if ( i )
        {
          *v14 = 0LL;
          *(_OWORD *)(i + 232) = 0LL;
          *(_QWORD *)(i + 248) = 0LL;
          memset((void *)i, 0, 0xD0uLL);
          KeInitializeSpinLock((PKSPIN_LOCK)(i + 208));
          *(_OWORD *)(i + 217) = 0LL;
          *(_OWORD *)(i + 233) = 0LL;
          *(_DWORD *)(i + 249) = 0;
          *(_WORD *)(i + 253) = 0;
          *(_BYTE *)(i + 255) = 0;
        }
        if ( !v12 )
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
          *(_BYTE *)v14 = 1;
        }
        InitializeSListHead((PSLIST_HEADER)(i + 128));
        *(_QWORD *)(i + 192) = i;
        ++v12;
        *(_QWORD *)(i + 200) = i + 128;
      }
    }
  }
  return (struct PPL_POOL_HANDLE__ *)Pool2;
}
