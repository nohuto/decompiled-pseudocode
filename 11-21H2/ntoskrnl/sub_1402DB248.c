/*
 * XREFs of sub_1402DB248 @ 0x1402DB248
 * Callers:
 *     sub_1405A2710 @ 0x1405A2710 (sub_1405A2710.c)
 *     sub_1407BF2E0 @ 0x1407BF2E0 (sub_1407BF2E0.c)
 * Callees:
 *     sub_1402DB190 @ 0x1402DB190 (sub_1402DB190.c)
 *     sub_1402DB3F0 @ 0x1402DB3F0 (sub_1402DB3F0.c)
 *     sub_1402DB460 @ 0x1402DB460 (sub_1402DB460.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405EF0B4 @ 0x1405EF0B4 (sub_1405EF0B4.c)
 *     sub_1405EF160 @ 0x1405EF160 (sub_1405EF160.c)
 */

__int64 __fastcall sub_1402DB248(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  BOOL v9; // r14d
  int v10; // ebp
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rdi
  unsigned int v16; // ebx
  unsigned __int64 v17; // [rsp+48h] [rbp-60h]
  unsigned __int64 v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+58h] [rbp-50h] BYREF
  int v20; // [rsp+60h] [rbp-48h]
  __int16 v21; // [rsp+64h] [rbp-44h]

  v9 = 0;
  v10 = (a7 & 0x10) != 0 ? 2 : 0;
  if ( (a7 & 0x10) == 0 )
    v9 = ((a7 >> 3) & 1) == 0;
  if ( (xmmword_140D06920 & 0x20000000000LL) == 0 )
    v10 |= 1u;
  switch ( a6[3] )
  {
    case 3u:
      sub_1402DB190(a1, a4, a5, (int)qword_140C4F420, (_DWORD *)a6 + 2, v9, 1, v10);
      break;
    case 4u:
      sub_1405EF0B4(a1, a4, a5, (_DWORD)qword_140C4F420, (__int64)(a6 + 4), v9, 1);
      break;
    case 5u:
      sub_1405EF160(a1, a4, a5, (_DWORD)qword_140C4F420, (__int64)(a6 + 4), v9, 1);
      break;
  }
  result = (__int64)(a6 + 6);
  v12 = (unsigned __int64)a6 + *a6 + 12;
  v13 = v12 + a6[1];
  v14 = v13 + a6[2];
  v17 = v13;
  v18 = v14;
  if ( (unsigned __int64)(a6 + 6) < v12 )
  {
    v15 = a6 + 6;
    do
    {
      v16 = *v15 & 0xFFF;
      v19 = 0LL;
      v20 = 0;
      v21 = 0;
      sub_1402DB460(v16 + a4, a5, (_DWORD)qword_140C4F420, (_DWORD)v15, v9, v10, (__int64)&v19);
      result = sub_1402DB3F0(a1, 4096LL, &v19, v16);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v12 );
    v13 = v17;
    v14 = v18;
  }
  while ( v12 < v13 )
  {
    result = sub_1405EF0B4(a1, a4, a5, (_DWORD)qword_140C4F420, v12, v9, 0);
    v12 += 2LL;
  }
  while ( v13 < v14 )
  {
    result = sub_1405EF160(a1, a4, a5, (_DWORD)qword_140C4F420, v13, v9, 0);
    v13 += 2LL;
  }
  return result;
}
