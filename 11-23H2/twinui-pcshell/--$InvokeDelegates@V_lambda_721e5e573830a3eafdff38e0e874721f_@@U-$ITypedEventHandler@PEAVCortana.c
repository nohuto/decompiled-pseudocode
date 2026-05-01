/*
 * XREFs of ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18045CE70
 * Callers:
 *     ?OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18045E110 (-OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800E3010 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800E3134 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_721e5e573830a3eafdff38e0e874721f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        _QWORD *a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  volatile int *v5; // rbx
  struct IUnknown **v6; // rdi
  _QWORD *v7; // r14
  __int128 *v8; // r15
  struct IUnknown *v9; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v11; // eax
  int v12; // esi
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  volatile int *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v15, a2);
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
