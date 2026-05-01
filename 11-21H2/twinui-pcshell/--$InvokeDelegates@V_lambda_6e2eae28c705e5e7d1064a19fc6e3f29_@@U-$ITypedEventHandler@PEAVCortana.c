/*
 * XREFs of ??$InvokeDelegates@V_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1803564B0
 * Callers:
 *     ?OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18035A500 (-OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003E118 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18009F814 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_6e2eae28c705e5e7d1064a19fc6e3f29_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int32 *v5; // rbx
  struct IUnknown **v6; // rdi
  _QWORD *v7; // r14
  __int128 *v8; // r15
  struct IUnknown *v9; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v11; // eax
  int v12; // esi
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v15, a2);
  v5 = v15;
  v6 = (struct IUnknown **)*((_QWORD *)v15 + 2);
  if ( v6 != *((struct IUnknown ***)v15 + 3) )
  {
    v7 = (_QWORD *)*a1;
    v8 = (__int128 *)a1[1];
    do
    {
      v9 = *v6;
      lpVtbl = (*v6)->lpVtbl;
      v14 = *v8;
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int128 *))lpVtbl[1].QueryInterface)(v9, *v7, &v14);
      v12 = v11;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 0LL, 0LL);
        if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v6);
      }
      ++v6;
    }
    while ( v6 != *((struct IUnknown ***)v5 + 3) );
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v15);
  return 0LL;
}
