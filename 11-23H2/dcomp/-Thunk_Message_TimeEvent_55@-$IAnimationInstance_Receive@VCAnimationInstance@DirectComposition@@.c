/*
 * XREFs of ?Thunk_Message_TimeEvent_55@?$IAnimationInstance_Receive@VCAnimationInstance@DirectComposition@@@@SAJPEAXPEAPEAX@Z @ 0x1800F6940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationInstance_Receive<DirectComposition::CAnimationInstance>::Thunk_Message_TimeEvent_55(
        DirectComposition::CAnimationInstance *a1,
        __int64 a2)
{
  return DirectComposition::CAnimationInstance::Message_TimeEvent(a1, **(_DWORD **)a2, **(_DWORD **)(a2 + 8));
}
