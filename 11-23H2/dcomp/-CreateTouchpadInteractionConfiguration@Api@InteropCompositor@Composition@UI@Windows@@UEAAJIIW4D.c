/*
 * XREFs of ?CreateTouchpadInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCHPAD@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18015E490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateTouchpadInteractionConfiguration(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rcx

  v2 = (*(_QWORD *)(a1 - 760) + 16LL) & -(__int64)(*(_QWORD *)(a1 - 760) != 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 320LL))(v2, a2);
}
