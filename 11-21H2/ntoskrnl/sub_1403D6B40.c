/*
 * XREFs of sub_1403D6B40 @ 0x1403D6B40
 * Callers:
 *     sub_14085464C @ 0x14085464C (sub_14085464C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D6B40(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r10
  _WORD *v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  _WORD *v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int16 v14; // ax
  _WORD *v15; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  v6 = a2;
  v7 = a1;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = (a2 - v6) & -(__int64)(v6 != 0);
  result = v6 == 0 ? 0xC000000D : 0;
  if ( !v6 )
    return result;
  if ( a4 > 0x7FFFFFFE )
    return 3221225485LL;
  v10 = &a1[v8];
  v11 = a2 - v8;
  if ( a2 != v8 )
  {
    v12 = a4;
    v13 = a3 - (_QWORD)v10;
    do
    {
      if ( !v12 )
        break;
      v14 = *(_WORD *)((char *)v10 + v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v15 = v10 - 1;
  if ( v11 )
    v15 = v10;
  *v15 = 0;
  return v11 == 0 ? 0x80000005 : 0;
}
