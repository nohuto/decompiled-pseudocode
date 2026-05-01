/*
 * XREFs of ??$InvokeDelegates@V_lambda_03dda103b19e77391a7b2c217cec09c3_@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_03dda103b19e77391a7b2c217cec09c3_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180171F7C
 * Callers:
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180171EF0 (--$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shel.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18009F1F4 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18009F814 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_03dda103b19e77391a7b2c217cec09c3_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int32 *v5; // rbx
  struct IUnknown **v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  int v9; // eax
  int v10; // esi
  volatile signed __int32 *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v12, a2);
  v5 = v12;
  v6 = (struct IUnknown **)*((_QWORD *)v12 + 2);
  if ( v6 != *((struct IUnknown ***)v12 + 3) )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = *(_QWORD **)a1;
    do
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*v6)->lpVtbl[1].QueryInterface)(
             *v6,
             (*v8 + 24LL) & -(__int64)(*v8 != 0LL),
             *v7);
      v10 = v9;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 0LL, 0LL);
        if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v6);
      }
      ++v6;
    }
    while ( v6 != *((struct IUnknown ***)v5 + 3) );
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v12);
  return 0LL;
}
