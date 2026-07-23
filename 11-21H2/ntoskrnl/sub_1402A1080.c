/*
 * XREFs of sub_1402A1080 @ 0x1402A1080
 * Callers:
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     sub_1403DCC38 @ 0x1403DCC38 (sub_1403DCC38.c)
 *     sub_140502688 @ 0x140502688 (sub_140502688.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A1080(_BYTE *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r11
  _BYTE *v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  char v8; // cl
  _BYTE *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = 0LL;
  v5 = a1;
  if ( a2 )
  {
    v6 = 2147483646LL;
    v7 = a4 - (_QWORD)a1;
    do
    {
      if ( !v6 )
        break;
      v8 = v5[v7];
      if ( !v8 )
        break;
      *v5 = v8;
      --v6;
      ++v5;
      ++v4;
      --a2;
    }
    while ( a2 );
  }
  v9 = v5 - 1;
  result = a2 == 0 ? 0x80000005 : 0;
  if ( a2 )
    v9 = v5;
  *v9 = 0;
  if ( a3 )
  {
    v11 = v4 - 1;
    if ( a2 )
      v11 = v4;
    *a3 = v11;
  }
  return result;
}
