/*
 * XREFs of NdisFreeGenericObject @ 0x1C006F070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x8Bu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x8Cu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      0LL);
}
