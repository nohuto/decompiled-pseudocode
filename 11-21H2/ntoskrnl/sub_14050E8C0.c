/*
 * XREFs of sub_14050E8C0 @ 0x14050E8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1405229E8 @ 0x1405229E8 (sub_1405229E8.c)
 */

__int64 __fastcall sub_14050E8C0(char a1)
{
  __int64 result; // rax

  result = sub_14036FA84();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4C47C = -1;
    qword_140C4C480 = 0LL;
    xmmword_140C4C468 = 0uLL;
    qword_140C4C528 = 0LL;
    dword_140C4C464 = 0;
    dword_140C4C460 = 0;
    result = sub_1405229E8();
  }
  if ( (a1 & 1) != 0 )
    dword_140C54AE8 = 1;
  byte_140C4C451 = 1;
  return result;
}
