/*
 * XREFs of ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18055ECA0
 * Callers:
 *     ?ShellAssistantStateChangeWNFCallback@AssistantLightWNFListener@Lighting@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18055E0E0 (-ShellAssistantStateChangeWNFCallback@AssistantLightWNFListener@Lighting@TwinUI@@CAJU_WNF_STATE_.c)
 * Callees:
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180464774 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::HandleState(__int64 a1, int a2)
{
  void *v4; // rdx
  void *v5; // rdx
  wil *v6; // rcx
  wil::details *v7; // rcx
  wil::details *Thread; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 1;
  if ( SystemParametersInfoW(0x1042u, 0, &v9, 0) && v9 )
  {
    wil::details::SetEvent(*(wil::details **)(a1 + 64), v4);
    v6 = *(wil **)(a1 + 56);
    if ( v6 )
      wil::handle_wait(v6, (void *)0xFFFFFFFFLL);
    v7 = *(wil::details **)(a1 + 64);
    *(_DWORD *)(a1 + 104) = a2;
    wil::details::ResetEvent(v7, v5);
    Thread = (wil::details *)CreateThread(
                               0LL,
                               0LL,
                               (LPTHREAD_START_ROUTINE)lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_,
                               (LPVOID)a1,
                               0,
                               0LL);
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)(a1 + 56),
      Thread);
  }
}
