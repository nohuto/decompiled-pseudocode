/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1801BF650
 * Callers:
 *     <none>
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj2<ConnectedStandbyHelper>::_Destroy(
        __int64 a1,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v3 = *(wil::details **)(a1 + 56);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
