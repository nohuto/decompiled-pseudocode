/*
 * XREFs of ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180369370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006BB90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800C92C8 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18036A7EC (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewCreated(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  HWND v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rbx
  int updated; // eax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a2 + 3);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( !v5 || SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v16 = 0LL;
    v7 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)a2, 1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
             v4,
             &v16);
      v6 = v7;
      if ( v7 >= 0 )
      {
        LODWORD(v13) = 0;
        *(_QWORD *)&v14 = (char *)this - 64;
        *((_QWORD *)&v14 + 1) = CPeopleBarFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
        v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v10 = (__int64)v9;
        if ( v9 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v9);
          *(_OWORD *)(v10 + 16) = v14;
          *(_QWORD *)(v10 + 32) = v13;
          *(_QWORD *)v10 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_76a34c4b5f294ba24d477bfd9713c64c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
        }
        else
        {
          v10 = 0LL;
        }
        v17 = v10;
        updated = CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(
                    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
                    1);
        v6 = updated;
        if ( updated >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14B,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
            (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        goto LABEL_16;
      }
      v8 = 324LL;
    }
    else
    {
      v8 = 322LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_16:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    return v6;
  }
  v6 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)0x80004005LL);
  return v6;
}
