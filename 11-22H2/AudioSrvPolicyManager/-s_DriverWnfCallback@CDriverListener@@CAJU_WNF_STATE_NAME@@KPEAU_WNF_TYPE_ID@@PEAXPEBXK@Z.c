/*
 * XREFs of ?s_DriverWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleDriverNotification@CDriverListener@@AEAAXPEBXK@Z @ 0x18003C6D8 (-HandleDriverNotification@CDriverListener@@AEAAXPEBXK@Z.c)
 */

__int64 __fastcall CDriverListener::s_DriverWnfCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        CDriverListener *a4,
        _OWORD *a5,
        unsigned int a6)
{
  __int64 v8; // r8

  if ( !(unsigned __int8)RtlEqualWnfChangeStamps(a2, 0LL, a3)
    && !(unsigned __int8)RtlEqualWnfChangeStamps(a2, CDriverListener::s_DriverWnfChangeStamp, v8) )
  {
    CDriverListener::s_DriverWnfChangeStamp = a2;
    CDriverListener::HandleDriverNotification(a4, a5, a6);
  }
  return 0LL;
}
