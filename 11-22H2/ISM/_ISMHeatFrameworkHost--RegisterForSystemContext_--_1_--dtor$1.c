/*
 * XREFs of _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x1801B1CCD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 48);
}
