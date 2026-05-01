/*
 * XREFs of ??$InvokeDelegates@V_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18003E28C
 * Callers:
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18003E208 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800E3010 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800E35C0 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Intern.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_c5bfabb814bec5f5156f201f837dd6b0_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  int v9; // eax
  int v10; // esi
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v12);
  v5 = v12;
  v6 = *(_QWORD **)(v12 + 16);
  if ( v6 != *(_QWORD **)(v12 + 24) )
  {
    v7 = (_QWORD *)a1[1];
    v8 = (_QWORD *)*a1;
    do
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *v8, *v7);
      v10 = v9;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 0LL, 0LL);
        if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v6);
      }
      ++v6;
    }
    while ( v6 != *(_QWORD **)(v5 + 24) );
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v12);
  return 0LL;
}
