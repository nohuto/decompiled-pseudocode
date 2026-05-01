/*
 * XREFs of _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x1805B5C4C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::Run @ 0x1805B6630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18007D460 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18022AB3C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18031100C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f3af541e54fed362ec31214e5f0f3de2_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  unsigned int v6; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7[2]; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+10h] BYREF

  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v4,
    *(_QWORD *)(a1 + 24));
  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
    (__int64)&v6,
    (__int64)&v4,
    0);
  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
    (__int64)&v8,
    (__int64)&v4,
    v5);
  while ( v6 != v8 || v7[1] != v9[1] )
  {
    v2 = v7[0];
    v10 = v7[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      *(_QWORD *)a1,
      *(unsigned int *)(a1 + 8),
      *(_QWORD *)(a1 + 16));
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    ++v6;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
}
