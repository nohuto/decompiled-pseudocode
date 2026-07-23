/*
 * XREFs of sub_14095B624 @ 0x14095B624
 * Callers:
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 * Callees:
 *     sub_14095B69C @ 0x14095B69C (sub_14095B69C.c)
 */

__int64 __fastcall sub_14095B624(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a2 == 22 )
  {
    if ( (_DWORD)a3 == 22 )
      return result;
    v3 = 4LL;
  }
  else
  {
    if ( (_DWORD)a3 != 22 )
      return result;
    v3 = 2LL;
  }
  LOBYTE(a3) = 1;
  return sub_14095B69C(a1, v3, a3);
}
