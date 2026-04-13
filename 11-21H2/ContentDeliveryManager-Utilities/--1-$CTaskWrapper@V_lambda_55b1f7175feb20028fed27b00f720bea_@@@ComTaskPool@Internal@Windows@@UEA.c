/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180076438
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180077160 (--_G-$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>::~CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v5);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
