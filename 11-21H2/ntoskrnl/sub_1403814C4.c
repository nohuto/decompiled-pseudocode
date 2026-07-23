/*
 * XREFs of sub_1403814C4 @ 0x1403814C4
 * Callers:
 *     sub_14037E958 @ 0x14037E958 (sub_14037E958.c)
 *     sub_14037FC24 @ 0x14037FC24 (sub_14037FC24.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 */

__int64 __fastcall sub_1403814C4(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *i; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx

  v2 = 0LL;
  if ( !a2 )
    a2 = sub_1402F5718();
  v4 = -1LL;
  v5 = a1 + 21;
  v6 = -1LL;
  for ( i = a1; i < v5; i += 3 )
  {
    v8 = i[1];
    if ( v8 != -1LL )
    {
      v13 = i[2];
      if ( v13 < a2 - a1[23] )
        v13 = a2 - a1[23];
      v14 = *i + v13;
      if ( v14 >= v4 )
        v14 = v4;
      v4 = v14;
      if ( v8 < v6 )
        v6 = i[1];
    }
  }
  v9 = a2;
  v10 = a2;
  if ( v4 >= a2 )
    v9 = v4;
  if ( v6 >= a2 )
    v10 = v6;
  *v5 = v10;
  if ( v10 == -1LL )
  {
    a1[22] = v2;
  }
  else
  {
    v11 = v10 - a2;
    if ( v10 >= v9 )
      v11 = v9 - a2;
    a1[22] = v11;
    if ( v11 )
    {
      v2 = v11;
    }
    else
    {
      a1[22] = 1LL;
      v2 = 1LL;
    }
  }
  result = *(a1 - 715);
  *(_QWORD *)(result + 6600) = -v2;
  return result;
}
