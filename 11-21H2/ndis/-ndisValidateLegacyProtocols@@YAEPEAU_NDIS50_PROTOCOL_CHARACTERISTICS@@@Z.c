/*
 * XREFs of ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0096F38
 * Callers:
 *     NdisRegisterProtocol @ 0x1C00977F0 (NdisRegisterProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_ZL @ 0x1C002B078 (WPP_RECORDER_SF_ZL.c)
 */

char __fastcall ndisValidateLegacyProtocols(struct _NDIS50_PROTOCOL_CHARACTERISTICS *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-28h]

  v4 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x10u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      &a1->Ndis40Chars.Name.Length);
  if ( !a1->Ndis40Chars.BindAdapterHandler
    || !a1->Ndis40Chars.UnbindAdapterHandler
    || !a1->Ndis40Chars.OpenAdapterCompleteHandler
    || !a1->Ndis40Chars.CloseAdapterCompleteHandler )
  {
    DbgPrint("ndisValidateLegacyProtocols: protocol does not have Bind/UnbindAdapterHandler and it is not supported.\n");
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a1->2 + 88,
      a3,
      0x11u,
      v6,
      &a1->Ndis40Chars.Name.Length);
  return v4;
}
