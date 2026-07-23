/*
 * XREFs of sub_14037270C @ 0x14037270C
 * Callers:
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_140646E04 @ 0x140646E04 (sub_140646E04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14037270C(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int16 v7; // ax
  _WORD *v8; // rax
  __int64 result; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( !a2 )
      return result;
LABEL_13:
    *a1 = 0;
    return result;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    goto LABEL_13;
  }
  v5 = a4 - a2;
  v6 = a3 - (_QWORD)a1;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(_WORD *)((char *)a1 + v6);
    if ( !v7 )
      break;
    *a1++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = a1 - 1;
  if ( v4 )
    v8 = a1;
  *v8 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
