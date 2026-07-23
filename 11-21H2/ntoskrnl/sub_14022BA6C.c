/*
 * XREFs of sub_14022BA6C @ 0x14022BA6C
 * Callers:
 *     sub_14022B980 @ 0x14022B980 (sub_14022B980.c)
 *     sub_140251300 @ 0x140251300 (sub_140251300.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall sub_14022BA6C(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_6;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( *((_BYTE *)CurrentPrcb + 32) )
  {
    *((_BYTE *)CurrentPrcb + 6) = 1;
  }
  else
  {
LABEL_6:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
