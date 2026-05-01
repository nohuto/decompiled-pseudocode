/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180044DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1803BE3CC (--$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U-$ITypedEventHandler@PEAUIObject.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdx
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v7; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v2 = v1 + 2;
  v9 = *(_QWORD *)(a1 + 32);
  v8 = v1;
  v6 = 0LL;
  v3 = v1 + 3;
  AcquireSRWLockExclusive(v1 + 3);
  v7 = v3;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v6, v2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v7);
  if ( v6 )
  {
    v5[0] = &v8;
    v5[1] = &v9;
    Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_992899f37bde9c4ccf5aeca340241f6d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>>(
      v5,
      v6,
      v2);
  }
  return Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v6);
}
