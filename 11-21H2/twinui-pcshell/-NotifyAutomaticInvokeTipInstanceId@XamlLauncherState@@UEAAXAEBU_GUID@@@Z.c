/*
 * XREFs of ?NotifyAutomaticInvokeTipInstanceId@XamlLauncherState@@UEAAXAEBU_GUID@@@Z @ 0x180184570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XamlLauncherState::NotifyAutomaticInvokeTipInstanceId(XamlLauncherState *this, const struct _GUID *a2)
{
  *(struct _GUID *)((char *)this + 952) = *a2;
}
