/*
 * XREFs of ??$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector2@Numerics@Foundation@3@@Z @ 0x18002D428
 * Callers:
 *     ?Thunk_Message_Vector2PropertyChanged_Callback_157@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180088BE0 (-Thunk_Message_Vector2PropertyChanged_Callback_157@-$IVisualEvent_Receive@VVisual@Composition@UI.c)
 * Callees:
 *     ??$LeaveSession_Callback@V_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@Z @ 0x18002D160 (--$LeaveSession_Callback@V_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@ContextSession@WRL2@Micros.c)
 *     ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18002D528 (-ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Vector2>(
        Windows::UI::Composition::CompositorCommon **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int v7; // eax
  Windows::UI::Composition::CompositorCommon *v8; // rcx
  int v9; // r14d
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // rax
  char result; // al
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *v13; // rcx
  struct Windows::UI::Composition::ProxyObject *v14; // [rsp+30h] [rbp-19h] BYREF
  __int128 v15; // [rsp+38h] [rbp-11h]
  __int128 v16; // [rsp+48h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  _OWORD v18[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+80h] [rbp+37h]
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *Buffer; // [rsp+B0h] [rbp+67h] BYREF

  Buffer = 0LL;
  v7 = (*((__int64 (__fastcall **)(Windows::UI::Composition::CompositorCommon **, _QWORD))*a1 + 36))(a1, a3);
  v8 = a1[3];
  v9 = v7;
  v14 = 0LL;
  BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager(v8);
  result = Windows::UI::Composition::AnimationBindingManager::ShouldNotify(
             BindingManager,
             (struct Windows::UI::Composition::ProxyObject *)a1,
             a3,
             &v14,
             &Buffer);
  if ( result )
  {
    v12 = (struct _RTL_CRITICAL_SECTION *)a1[3];
    *((_QWORD *)&v15 + 1) = Buffer;
    *(_QWORD *)&v16 = v14;
    LODWORD(v15) = 35;
    DWORD2(v16) = v9;
    v17 = a4;
    v18[0] = v15;
    v18[1] = v16;
    v19 = a4;
    result = Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_>(
               v12,
               (__int64)v18);
  }
  v13 = Buffer;
  if ( Buffer )
  {
    Buffer = 0LL;
    return (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
