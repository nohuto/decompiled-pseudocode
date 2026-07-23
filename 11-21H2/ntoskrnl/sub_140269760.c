/*
 * XREFs of sub_140269760 @ 0x140269760
 * Callers:
 *     sub_140269464 @ 0x140269464 (sub_140269464.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 * Callees:
 *     sub_1402697B0 @ 0x1402697B0 (sub_1402697B0.c)
 */

_BOOL8 __fastcall sub_140269760(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v2; // r9
  unsigned __int64 v3; // rdx
  _BOOL8 result; // rax

  v1 = sub_1402697B0(a1);
  result = 0;
  if ( v1 >= 0x400uLL )
  {
    v3 = v1 + v2[10];
    if ( v3 > 0x40000 && v3 > (*v2 - v2[8]) >> 2 )
      return 1;
  }
  return result;
}
