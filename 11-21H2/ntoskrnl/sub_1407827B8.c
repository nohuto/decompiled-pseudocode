/*
 * XREFs of sub_1407827B8 @ 0x1407827B8
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 *     sub_140782774 @ 0x140782774 (sub_140782774.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407827B8(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v5; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v5 = i[2] - *a2;
    if ( !v5 )
      v5 = i[3] - a2[1];
    if ( !v5 )
      break;
  }
  *a3 = i;
  return 0LL;
}
