/*
 * XREFs of ?ndisOidPreNdisIfOidQuery@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreNdisIfOidQuery(struct _NDIS_REQ_TRACKER *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x99u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 4));
  *((_DWORD *)a1 + 10) = -1073741637;
  return 1;
}
