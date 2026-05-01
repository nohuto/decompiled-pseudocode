/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180073300
 * Callers:
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180070178 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x18009DB70 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     CempUtilValidateSid @ 0x18000AE40 (CempUtilValidateSid.c)
 *     CempHostInfoInitialize @ 0x18009CCD4 (CempHostInfoInitialize.c)
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
  unsigned int v12; // eax

  v11 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( (int)CempUtilValidateSid(SourceSid, a4) >= 0 )
    {
      if ( !a6 )
        return (unsigned int)-1073741580;
      if ( ((a6 - 1) & a6) != 0 )
        return (unsigned int)-1073741580;
      _BitScanForward(&v12, a6);
      if ( v12 >= 4 )
      {
        return (unsigned int)-1073741580;
      }
      else if ( a7 == -1LL )
      {
        return (unsigned int)-1073741579;
      }
      else
      {
        CempHostInfoInitialize(a2, SourceSid, a7, (unsigned __int16 *)a1);
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v11;
}
