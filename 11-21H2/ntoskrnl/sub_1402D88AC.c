/*
 * XREFs of sub_1402D88AC @ 0x1402D88AC
 * Callers:
 *     sub_1402012BC @ 0x1402012BC (sub_1402012BC.c)
 *     sub_14075CF70 @ 0x14075CF70 (sub_14075CF70.c)
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_14080FDC0 @ 0x14080FDC0 (sub_14080FDC0.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140934AB4 @ 0x140934AB4 (sub_140934AB4.c)
 *     sub_14099A188 @ 0x14099A188 (sub_14099A188.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402D88AC(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
    result = 3221225485LL;
    if ( !a2 )
      return result;
LABEL_13:
    *a1 = 0;
    return result;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
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
  return v4 == 0 ? 0x80000005 : 0;
}
