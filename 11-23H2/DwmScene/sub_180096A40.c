/*
 * XREFs of sub_180096A40 @ 0x180096A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

__int64 __fastcall sub_180096A40(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x8000000) != 0 )
  {
    sub_18008141C(a1);
    sub_180034880();
  }
  return result;
}
