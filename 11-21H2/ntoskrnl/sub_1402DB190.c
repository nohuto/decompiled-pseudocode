/*
 * XREFs of sub_1402DB190 @ 0x1402DB190
 * Callers:
 *     sub_1402DB0B8 @ 0x1402DB0B8 (sub_1402DB0B8.c)
 *     sub_1402DB248 @ 0x1402DB248 (sub_1402DB248.c)
 * Callees:
 *     sub_1402DB3F0 @ 0x1402DB3F0 (sub_1402DB3F0.c)
 *     sub_1402DB460 @ 0x1402DB460 (sub_1402DB460.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402DB190(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  __int16 v14; // [rsp+4Ch] [rbp-2Ch]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v10 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v10 = a2 + (*a5 & 0xFFF);
  sub_1402DB460(v10, a3, a4, (_DWORD)a5, a6, a8, (__int64)&v12);
  return sub_1402DB3F0(a1, 4096LL, &v12, (unsigned int)(v10 - a2));
}
