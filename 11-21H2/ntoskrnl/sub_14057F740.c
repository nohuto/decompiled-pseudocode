/*
 * XREFs of sub_14057F740 @ 0x14057F740
 * Callers:
 *     sub_1409D9B98 @ 0x1409D9B98 (sub_1409D9B98.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

unsigned __int64 __fastcall sub_14057F740(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  ULONG_PTR *v5; // rax
  _QWORD *v6; // r9
  __int64 *v7; // r8
  unsigned __int64 i; // rdi
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v10 = 0;
  if ( a2 >= (unsigned __int16)word_140D05000 )
    return 0LL;
  v3 = (qword_140D068D8 & 0x2000000000LL) == 0;
  v4 = &qword_14001C780[v3];
  do
  {
    if ( *v4 == 512 )
      break;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 3 );
  if ( (_DWORD)v3 == 3 )
    return 0LL;
  v5 = sub_140264ED0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0LL, &v10);
  if ( !v5 )
    return 0LL;
  v6 = (_QWORD *)(v5[2] + 24512 * v2 + 1072LL * (unsigned int)v3);
  v7 = &qword_14001C780[v3];
  for ( i = ((unsigned __int64)*v7 >> 9) * (*v6 + v6[1]); (_DWORD)v3; LODWORD(v3) = v3 - 1 )
  {
    v6 -= 134;
    i += ((unsigned __int64)*--v7 >> 9) * (*v6 + v6[1]);
  }
  if ( v10 )
    sub_1403606C4(v5[22]);
  return i;
}
