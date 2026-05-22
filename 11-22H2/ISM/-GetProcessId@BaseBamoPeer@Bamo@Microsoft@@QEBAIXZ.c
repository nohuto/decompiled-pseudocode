/*
 * XREFs of ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180110FC4
 * Callers:
 *     ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180071A50 (-GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ.c)
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071F40 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoPeer::GetProcessId(Microsoft::Bamo::BaseBamoPeer *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)this + 8LL))(this)
                         + 32);
}
