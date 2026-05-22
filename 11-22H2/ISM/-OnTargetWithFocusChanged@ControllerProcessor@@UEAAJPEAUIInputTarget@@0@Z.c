/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1801A50B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x180072358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x18007636C (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A6704 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::OnTargetWithFocusChanged(
        ControllerProcessor *this,
        struct IInputTarget *a2,
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  ControllerProcessor::StopAutoRepeatTimer((ControllerProcessor *)((char *)this - 8));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
    ControllerProcessor::UpdateFocusedProcessId((ControllerProcessor *)((char *)this - 8), a3);
  return NonPointerProcessor::OnTargetWithFocusChanged(this, a2, (struct IInputTarget *)a3);
}
