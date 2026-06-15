/*
 * XREFs of ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18003C7DC (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 */

__int64 __fastcall CDriverListener::s_ShellWnfCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        CDriverListener *a4,
        _DWORD *a5,
        unsigned int a6)
{
  __int64 v8; // r8

  if ( !(unsigned __int8)RtlEqualWnfChangeStamps(a2, 0LL, a3)
    && !(unsigned __int8)RtlEqualWnfChangeStamps(a2, CDriverListener::s_ShellWnfChangeStamp, v8) )
  {
    CDriverListener::s_ShellWnfChangeStamp = a2;
    CDriverListener::HandleShellWarningAccepted(a4, a5, a6);
  }
  return 0LL;
}
