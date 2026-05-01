/*
 * XREFs of ?ShellAssistantStateChangeWNFCallback@AssistantLightWNFListener@Lighting@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18055E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18055ECA0 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightWNFListener::ShellAssistantStateChangeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        unsigned int *a5,
        unsigned int a6)
{
  if ( a5 && a6 == 4 && a4 )
    TwinUI::Lighting::AssistantLightManager::HandleState(a4[1], *a5, a3);
  return 0LL;
}
