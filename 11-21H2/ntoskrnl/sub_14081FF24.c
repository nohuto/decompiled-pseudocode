/*
 * XREFs of sub_14081FF24 @ 0x14081FF24
 * Callers:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_14081FF7C @ 0x14081FF7C (sub_14081FF7C.c)
 */

__int64 __fastcall sub_14081FF24(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = sub_14081FF7C(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
