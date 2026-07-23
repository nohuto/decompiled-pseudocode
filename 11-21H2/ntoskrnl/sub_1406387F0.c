/*
 * XREFs of sub_1406387F0 @ 0x1406387F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406387F0(int a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 & 0x3000000;
  if ( !(_DWORD)v2 || (a2 & 0x3000000) != 0 || !(_QWORD)xmmword_140C15BB0 )
    return 3221225659LL;
  result = sub_14042A5E0(v2, 0LL);
  if ( (int)result >= 0 )
    dword_140C5B11C &= ~4u;
  return result;
}
