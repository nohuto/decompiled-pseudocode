/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800F9A94
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1800F9A20 (-s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1801A23A0 (-s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         &IManipulation_Receive<CManipulationManager>::Type,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
         211LL);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1C9u, 0LL);
  return v6;
}
