/*
 * XREFs of std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C20C
 * Callers:
 *     std::_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022BF34 (std--_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // r8

  v4 = *(_QWORD *)(a4 + 1088);
  v6 = (unsigned int)*a1;
  v7 = (unsigned int)*a2;
  if ( *(float *)(v4 + 4 * v6) > *(float *)(v4 + 4 * v7) )
  {
    *a2 = v6;
    *a1 = v7;
    v4 = *(_QWORD *)(a4 + 1088);
    LODWORD(v7) = *a2;
  }
  v8 = (unsigned int)*a3;
  result = (unsigned int)v7;
  if ( *(float *)(v4 + 4LL * (unsigned int)v7) > *(float *)(v4 + 4 * v8) )
  {
    *a3 = v7;
    *a2 = v8;
    result = *(_QWORD *)(a4 + 1088);
    v10 = (unsigned int)*a1;
    if ( *(float *)(result + 4 * v10) > *(float *)(result + 4 * v8) )
    {
      *a2 = v10;
      *a1 = v8;
    }
  }
  return result;
}
