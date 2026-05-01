/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180070B34
 * Callers:
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180072898 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x180098570 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x180013D48 (CempHostInfoInitialize.c)
 *     CempUtilValidateSid @ 0x180035A40 (CempUtilValidateSid.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        struct _RM_PSM_HOST_INFO *a1,
        unsigned __int16 *a2,
        PSID SourceSid,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax

  v11 = 0;
  if ( !(unsigned __int8)PsmIsValidKey(a2) )
  {
    v12 = -1073741585;
    return (unsigned int)(v12 + 1);
  }
  if ( (int)CempUtilValidateSid(SourceSid, a4) < 0 )
  {
    v12 = -1073741584;
    return (unsigned int)(v12 + 1);
  }
  if ( !a6 || ((a6 - 1) & a6) != 0 || (_BitScanForward(&v13, a6), v13 >= 4) )
  {
    v12 = -1073741581;
    return (unsigned int)(v12 + 1);
  }
  if ( a7 == -1LL )
  {
    v12 = -1073741580;
    return (unsigned int)(v12 + 1);
  }
  CempHostInfoInitialize(a2, SourceSid, a5, a6, a7, (unsigned __int16 *)a1);
  return v11;
}
