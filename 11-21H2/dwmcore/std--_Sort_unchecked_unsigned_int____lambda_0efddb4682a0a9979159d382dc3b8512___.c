/*
 * XREFs of std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C960
 * Callers:
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C960 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x18022E834 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C08C (std--_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 *     std::_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C2EC (std--_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b851.c)
 *     std::_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C67C (std--_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_0efddb4682a0a9979159d382dc3b851.c)
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C960 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 */

__int64 __fastcall std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        unsigned int *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v5; // rax
  char *v7; // rsi
  unsigned int *i; // rdi
  unsigned int *v9; // r14
  __int64 result; // rax
  __int64 j; // r14
  unsigned int *v12; // rsi
  char *v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int *v14; // [rsp+38h] [rbp-20h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2 - (char *)a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - (char *)i )
  {
    result = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( result <= 128 )
      return (__int64)std::_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
                        i,
                        v7,
                        a4);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
      (unsigned int **)&v13,
      (unsigned __int64)i,
      (unsigned int *)v7);
    v9 = v14;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v13 - (char *)i) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)((v7 - (char *)v14) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(v14, v7, a3, a4);
      v7 = v13;
    }
    else
    {
      std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(i, v13, a3, a4);
      i = v9;
    }
  }
  for ( j = (v7 - (char *)i) >> 3;
        j > 0;
        result = std::_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_0efddb4682a0a9979159d382dc3b8512___(
                   (__int64)i,
                   j,
                   (v7 - (char *)i) >> 2,
                   (int)&v15,
                   a4) )
  {
    v15 = i[--j];
  }
  if ( (v7 - (char *)i) >> 2 >= 2 )
  {
    v12 = (unsigned int *)(v7 - 4);
    do
    {
      v15 = *v12;
      *v12 = *i;
      std::_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_0efddb4682a0a9979159d382dc3b8512___(
        (__int64)i,
        0LL,
        v12 - i,
        (int)&v15,
        a4);
      result = ((unsigned __int64)--v12 + 4LL - (_QWORD)i) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    while ( result >= 8 );
  }
  return result;
}
