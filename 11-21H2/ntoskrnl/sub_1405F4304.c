/*
 * XREFs of sub_1405F4304 @ 0x1405F4304
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_14085D710 @ 0x14085D710 (sub_14085D710.c)
 * Callees:
 *     sub_1409CF8D8 @ 0x1409CF8D8 (sub_1409CF8D8.c)
 */

__int64 __fastcall sub_1405F4304(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return sub_1409CF8D8((PVOID)a1);
  }
  return result;
}
