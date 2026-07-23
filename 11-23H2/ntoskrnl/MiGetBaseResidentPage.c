/*
 * XREFs of MiGetBaseResidentPage @ 0x1402E9410
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402E9330 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1403BBDD8 (MiActivePageClaimCandidate.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  unsigned int v6; // r14d
  ULONG_PTR v7; // rdi
  int i; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v4 = a1;
  v15 = 0LL;
  v16 = 0LL;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = 0;
  v7 = v5;
  for ( i = 2; ; --i )
  {
    v9 = v6;
    v10 = MiLargePageSizes[i] - 1;
    if ( (v10 & v7) != 0 )
    {
      v7 &= ~v10;
      v4 = 48 * v7 - 0x220000000000LL;
      if ( ++v6 > 3 )
        KeBugCheckEx(0x1Au, 0x9700uLL, v5, v7, 0LL);
      *((_QWORD *)&v15 + v9) = v4;
      MiLockNestedPageAtDpcInline(48 * v7 - 0x220000000000LL, MiLargePageSizes, a3, a4);
    }
    if ( (*(_BYTE *)(v4 + 36) & 3) != 0 )
      break;
    if ( !i )
      KeBugCheckEx(0x1Au, 0x9701uLL, v5, v7, 0LL);
  }
  v11 = 0;
  v12 = (__int64 *)&v15;
  do
  {
    v13 = *v12;
    if ( !*v12 )
      break;
    if ( v13 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v11;
    ++v12;
  }
  while ( v11 < 3 );
  return v4;
}
