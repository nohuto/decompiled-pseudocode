/*
 * XREFs of sub_14065BC50 @ 0x14065BC50
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14091D284 @ 0x14091D284 (sub_14091D284.c)
 * Callees:
 *     sub_14065BCB0 @ 0x14065BCB0 (sub_14065BCB0.c)
 *     sub_14069F090 @ 0x14069F090 (sub_14069F090.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F244 @ 0x14069F244 (sub_14069F244.c)
 */

__int64 __fastcall sub_14065BC50(__int64 a1)
{
  __int16 v1; // di
  __int64 result; // rax
  __int64 v4; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  result = sub_14065BCB0(a1 + 8);
  while ( v1 <= *(__int16 *)a1 )
  {
    v4 = sub_14069F130(a1);
    sub_14069F090(v4);
    result = sub_14069F244(v4);
    ++v1;
  }
  return result;
}
