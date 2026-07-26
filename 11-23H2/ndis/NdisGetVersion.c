/*
 * XREFs of NdisGetVersion @ 0x1C002A1D0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 */

UINT NdisGetVersion(void)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_1dd2aa6ea6da3bb0de8e6de1ae3e6425_Traceguids,
      87);
  return 393303;
}
