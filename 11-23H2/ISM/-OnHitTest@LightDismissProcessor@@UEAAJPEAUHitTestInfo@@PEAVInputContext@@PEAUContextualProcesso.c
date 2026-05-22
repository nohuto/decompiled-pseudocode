/*
 * XREFs of ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180016AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x1800555C4 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x180171DF0 (-Dismiss@BamoLightDismissClientProxy@@UEAAJXZ.c)
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18017246C (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::OnHitTest(
        LightDismissProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 i; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 && (*((_DWORD *)a2 + 8) & 0x10000) != 0 )
  {
    LightDismissProcessor::GetDismissableClients(this, v6, *((_QWORD *)a3 + 22));
    for ( i = v6[0]; i != v6[1]; i += 8LL )
      BamoLightDismissClientProxy::Dismiss((BamoLightDismissClientProxy *)(*(_QWORD *)i + 8LL));
    std::vector<_LUID>::_Tidy(v6);
  }
  return 0LL;
}
