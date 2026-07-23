/*
 * XREFs of sub_14056D39C @ 0x14056D39C
 * Callers:
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D6C8 @ 0x14056D6C8 (sub_14056D6C8.c)
 */

__int64 sub_14056D39C()
{
  _DWORD *v0; // rbp
  unsigned int v1; // eax
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (_DWORD *)((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !_bittest64(&qword_140D068D8, 0x2Bu) )
    return 3221225659LL;
  memset(v0 + 16, 0, 0x40uLL);
  *(_DWORD *)(((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 7;
  do
    v1 = sub_1404205F0(0xEu);
  while ( v1 == 15 );
  result = sub_14056D6C8(v1);
  *v0 = result;
  return result;
}
