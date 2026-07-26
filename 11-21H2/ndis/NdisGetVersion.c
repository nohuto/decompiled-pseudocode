/*
 * XREFs of NdisGetVersion @ 0x1C002D820
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 */

UINT NdisGetVersion(void)
{
  int v1; // [rsp+28h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v1 = 393302;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_9e530ad7497935be369aa690794a9224_Traceguids,
      v1);
  }
  return 393302;
}
