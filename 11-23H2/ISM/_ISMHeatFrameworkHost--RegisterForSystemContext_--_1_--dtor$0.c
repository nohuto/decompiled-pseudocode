/*
 * XREFs of _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x1801A3CE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 48);
}
