/*
 * XREFs of ??$InvokePropertyChange_Callback@M@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x1801463C4
 * Callers:
 *     ?Thunk_Message_ScalarPropertyChanged_Callback_149@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C560 (-Thunk_Message_ScalarPropertyChanged_Callback_149@-$IPropertyChanged_Receive@VProxyObject@Compos.c)
 * Callees:
 *     ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18002D528 (-ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_03a6d95062640a5667444b450c384120_@@@Z @ 0x180146AC4 (--$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Micros.c)
 */

char __fastcall Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<float>(
        Windows::UI::Composition::CompositorCommon **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int v7; // eax
  Windows::UI::Composition::CompositorCommon *v8; // rcx
  int v9; // r14d
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  char result; // al
  Microsoft::WRL2::ContextSession *v12; // rcx
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *v13; // rcx
  struct Windows::UI::Composition::ProxyObject *v14; // [rsp+30h] [rbp-19h] BYREF
  __int128 v15; // [rsp+38h] [rbp-11h]
  __int128 v16; // [rsp+48h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  __int128 v18; // [rsp+60h] [rbp+17h]
  __int128 v19; // [rsp+70h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+37h]
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *Buffer; // [rsp+B0h] [rbp+67h] BYREF

  Buffer = 0LL;
  v7 = (*((__int64 (__fastcall **)(Windows::UI::Composition::CompositorCommon **, _QWORD))*a1 + 36))(a1, a3);
  v8 = a1[3];
  v9 = v7;
  v14 = 0LL;
  BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(v8);
  result = Windows::UI::Composition::AnimationBindingManager::ShouldNotify(
             BindingManager,
             (struct Windows::UI::Composition::ProxyObject *)a1,
             a3,
             &v14,
             &Buffer);
  if ( result )
  {
    v12 = a1[3];
    *((_QWORD *)&v15 + 1) = Buffer;
    *(_QWORD *)&v16 = v14;
    LODWORD(v15) = 18;
    DWORD2(v16) = v9;
    v17 = a4;
    v18 = v15;
    v19 = v16;
    v20 = a4;
    result = Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_03a6d95062640a5667444b450c384120_>(v12);
  }
  v13 = Buffer;
  if ( Buffer )
  {
    Buffer = 0LL;
    return (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
