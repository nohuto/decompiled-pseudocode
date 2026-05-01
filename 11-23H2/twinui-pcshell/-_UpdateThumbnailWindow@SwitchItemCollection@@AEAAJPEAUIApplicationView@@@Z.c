/*
 * XREFs of ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565690
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180564F10 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z @ 0x180564808 (--4-$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1805653E0 (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemCollection::_UpdateThumbnailWindow(
        SwitchItemCollection *this,
        struct IApplicationView *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  SwitchItemCollection::_FindExistingItem((__int64)this, &v13, (__int64)a2);
  v3 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  if ( !v13 )
    goto LABEL_8;
  v12 = 0LL;
  v4 = **v13;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  v5 = v4(v3, &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 72LL))(a2, v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 233LL;
      goto LABEL_6;
    }
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
    ObservableProperty<HWND__ *>::operator=(v8, v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v7 = 230LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v6;
}
