/*
 * XREFs of _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x1800292A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::Run @ 0x180029290 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1b237cfa226cb7a358646b393456f6b8_::operator()(CMarshaledInterface *this)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  if ( CMarshaledInterface::_Unmarshal(this, &GUID_0d1b8579_c52e_4207_89b3_9726ce949410, &v4, 0) >= 0 )
  {
    v3 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v3);
    if ( CMarshaledInterface::_Unmarshal(
           (CMarshaledInterface *)((char *)this + 8),
           &GUID_537b455d_1240_433b_82af_10929138b8be,
           &v3,
           0) >= 0 )
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v4 + 24LL))(v4, v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v3);
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
}
