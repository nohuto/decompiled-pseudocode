/*
 * XREFs of ?GetFailureInfo@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAPEBUFailureInfo@2@XZ @ 0x180601AC8
 * Callers:
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604C24 (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::GetFailureInfo(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  result = 0LL;
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 88) )
    return v1 + 80;
  return result;
}
