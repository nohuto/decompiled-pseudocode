/*
 * XREFs of ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18045A000
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x18045977C (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x180459984 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x180459A2C (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180459BD8 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x18045A558 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnEventQueued(
        HWND *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  _DWORD *v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // r9
  HSTRING_HEADER *v11; // rax
  HSTRING v12; // r8
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HSTRING v20; // r8
  unsigned int v21; // r8d
  HSTRING_HEADER *v22; // rax
  HSTRING v23; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // rdx
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  HSTRING v27; // r8
  __int64 StringRawBuffer; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v30; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    StringRawBuffer = (__int64)WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)v8,
      (int)&dword_180851F94,
      0,
      v10,
      (const WCHAR **)&StringRawBuffer);
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1807F44B0, v9);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a3,
                       (HSTRING)v11[1].Reserved.Reserved1,
                       v12) )
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1807F44A0, v13);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a3,
                         (HSTRING)v16[1].Reserved.Reserved1,
                         v17) )
    {
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1807F44A8, v18);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a3,
                           (HSTRING)v19[1].Reserved.Reserved1,
                           v20) )
      {
        v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1807F44C0, v21);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a3,
                             (HSTRING)v22[1].Reserved.Reserved1,
                             v23) )
        {
          v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&off_1807F44B8, v25);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                a3,
                                (HSTRING)v26[1].Reserved.Reserved1,
                                v27)
            && !*((_BYTE *)this + 240) )
          {
            CInsightsExperienceManager::RegisterWithLightDismiss((CInsightsExperienceManager *)(this - 7), a2);
            wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
              this + 33,
              0LL);
            *((_BYTE *)this + 240) = 1;
          }
        }
        else
        {
          CInsightsExperienceManager::DisableLightDismissRequested((CInsightsExperienceManager *)(this - 7), v24);
        }
      }
      else
      {
        CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)(this - 7));
      }
    }
    else
    {
      v14 = CInsightsExperienceManager::HandleNotifyWindowName((CInsightsExperienceManager *)(this - 7), a4);
      if ( v14 < 0 )
      {
        v15 = 325LL;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v14 = CInsightsExperienceManager::DestroyExperience(this - 7);
    if ( v14 < 0 )
    {
      v15 = 321LL;
LABEL_9:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    }
  }
  return 0LL;
}
