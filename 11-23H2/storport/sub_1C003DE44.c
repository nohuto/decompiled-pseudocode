/*
 * XREFs of sub_1C003DE44 @ 0x1C003DE44
 * Callers:
 *     sub_1C005C694 @ 0x1C005C694 (sub_1C005C694.c)
 *     sub_1C00A0EE4 @ 0x1C00A0EE4 (sub_1C00A0EE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C003DE44(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = a2;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = a2 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
