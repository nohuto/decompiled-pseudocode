/*
 * XREFs of ?ndisOidPreNdisIfOidQuery@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreNdisIfOidQuery(struct _NDIS_REQ_TRACKER *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x99u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 4));
  *((_DWORD *)a1 + 10) = -1073741637;
  return 1;
}
