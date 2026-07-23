/*
 * XREFs of sub_1405FB148 @ 0x1405FB148
 * Callers:
 *     sub_1409D618C @ 0x1409D618C (sub_1409D618C.c)
 * Callees:
 *     sub_1405FB1F8 @ 0x1405FB1F8 (sub_1405FB1F8.c)
 */

__int64 __fastcall sub_1405FB148(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _WORD *v8; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2 >> 1;
  if ( (a2 >> 1) - 1 > 0x7FFE )
    return 3221225485LL;
  v10 = 0LL;
  v9 = 0LL;
  result = sub_1405FB1F8(a3, &v10, &v9);
  if ( (int)result < 0 )
  {
    *a1 = 0;
  }
  else
  {
    v6 = v9 - v3;
    v7 = v10 - (_QWORD)a1;
    do
    {
      if ( !(v6 + v3) )
        break;
      *a1 = *(_WORD *)((char *)a1 + v7);
      ++a1;
      --v3;
    }
    while ( v3 );
    v8 = a1 - 1;
    if ( v3 )
      v8 = a1;
    *v8 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
