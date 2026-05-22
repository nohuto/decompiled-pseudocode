/*
 * XREFs of ?Thunk_Message_EdgyDetected_Callback_144@?$IManipulationNotification_Receive@VCompositionManipulation@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801617B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulationNotification_Receive<Windows::UI::Composition::CompositionManipulation>::Thunk_Message_EdgyDetected_Callback_144(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 160);
  if ( v2 )
    (**v2)(v2, *a2);
  return 0LL;
}
