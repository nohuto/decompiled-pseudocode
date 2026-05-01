/*
 * XREFs of ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4@Z @ 0x1801A0C20
 * Callers:
 *     ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x180199998 (--$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18005E388 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180148F8C (-RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x18017D0E4 (--$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA-AV-$unique_ptr@V.c)
 *     ??4?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017D688 (--4-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::RuntimeClassInitialize(
        UndockedSearchAppExperienceManager *this,
        struct IServiceProvider *a2,
        __int64 *a3,
        winrt::Windows::Foundation::IUnknown *a4,
        _QWORD *pvData,
        _QWORD *pdwType,
        void (__fastcall ****a7)(_QWORD, __int64))
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // r15
  __int64 *unique; // rax
  __int64 v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  _QWORD *v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  void (__fastcall ****v22)(_QWORD, __int64); // r14
  __int64 *SearchAppPositioner; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  __int64 v28; // rdx
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  void (__fastcall ***v31)(_QWORD, __int64); // rcx
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(__int64, SID *, GUID *, char *); // rdi
  bool v35; // bl
  LSTATUS ValueW; // eax
  signed int v37; // ecx
  bool v38; // zf
  void (__fastcall ***v39)(_QWORD, __int64); // rcx
  void (__fastcall ***v40)(_QWORD, __int64); // rcx
  void (__fastcall ***v41)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 pcbData; // [rsp+70h] [rbp+30h] BYREF

  v11 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v11 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v11,
      (int)&unk_1806AC730,
      0);
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 7, (__int64)a2);
  winrt::Windows::Foundation::IUnknown::operator=((UndockedSearchAppExperienceManager *)((char *)this + 224), a4);
  v13 = *((_QWORD *)this + 6);
  v14 = *a3;
  if ( v13 != *a3 )
  {
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v13 = *((_QWORD *)this + 6);
    }
    pcbData = v13;
    *((_QWORD *)this + 6) = v14;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pcbData);
  }
  v15 = pvData;
  if ( !*pvData )
  {
    unique = wil::make_unique_nothrow<CUndockedSearchAppExperienceManagerConfig,unsigned long const &>(
               &pvData,
               (int *)this + 38);
    v17 = *unique;
    *unique = 0LL;
    v18 = (void (__fastcall ***)(_QWORD, __int64))*v15;
    *v15 = v17;
    if ( v18 )
      (**v18)(v18, 1LL);
    v19 = pvData;
    pvData = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v19)(v19, 1LL);
  }
  v20 = (void (__fastcall ***)(_QWORD, __int64))*v15;
  *v15 = 0LL;
  v21 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v20;
  if ( v21 )
    (**v21)(v21, 1LL);
  v22 = (void (__fastcall ****)(_QWORD, __int64))pdwType;
  if ( !*pdwType )
  {
    SearchAppPositioner = CreateSearchAppPositioner((__int64 *)&pvData, a2, v12);
    wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::operator=(
      v22,
      SearchAppPositioner);
    v24 = pvData;
    pvData = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v24)(v24, 1LL);
  }
  wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::operator=(
    (void (__fastcall ****)(_QWORD, __int64))this + 13,
    v22);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0,
    v25,
    v26);
  v27 = UndockedSearchAppExperienceManager::RegisterViewEventDispatcherHandler(this);
  if ( v27 < 0 )
  {
    v28 = 677LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
    v29 = (void (__fastcall ***)(_QWORD, __int64))*v15;
    *v15 = 0LL;
    if ( v29 )
      (**v29)(v29, 1LL);
    v30 = *v22;
    v38 = *v22 == 0LL;
    *v22 = 0LL;
    if ( !v38 )
      (**v30)(v30, 1LL);
    v31 = *a7;
    *a7 = 0LL;
    if ( v31 )
      (**v31)(v31, 1LL);
    return (unsigned int)v27;
  }
  v33 = *((_QWORD *)this + 7);
  v34 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v33 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  v27 = v34(v33, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 80);
  if ( v27 < 0 )
  {
    v28 = 680LL;
    goto LABEL_19;
  }
  v27 = UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers(this);
  if ( v27 < 0 )
  {
    v28 = 681LL;
    goto LABEL_19;
  }
  v35 = 0;
  LODWORD(pdwType) = 0;
  LODWORD(pcbData) = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"ExplicitDismissEnabled",
             0x10000012u,
             (LPDWORD)&pdwType,
             &pvData,
             (LPDWORD)&pcbData);
  v37 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v37) = 13;
    }
    else if ( ValueW <= 0 )
    {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  LOWORD(v37) = 13;
  if ( (_DWORD)pdwType != 4 )
  {
    if ( (_DWORD)pcbData == 4 && (unsigned __int16)((_WORD)pvData - 48) <= 1u )
    {
      v38 = (_WORD)pvData == 49;
      goto LABEL_33;
    }
LABEL_39:
    v37 = (unsigned __int16)v37 | 0x80070000;
    goto LABEL_40;
  }
  v38 = (_DWORD)pvData == 1;
  if ( (unsigned int)pvData > 1 )
    goto LABEL_39;
LABEL_33:
  v37 = 0;
  v35 = v38;
LABEL_40:
  if ( v37 >= 0 )
    *((_BYTE *)this + 712) = v35;
  v39 = (void (__fastcall ***)(_QWORD, __int64))*v15;
  *v15 = 0LL;
  if ( v39 )
    (**v39)(v39, 1LL);
  v40 = *v22;
  *v22 = 0LL;
  if ( v40 )
    (**v40)(v40, 1LL);
  v41 = *a7;
  *a7 = 0LL;
  if ( v41 )
    (**v41)(v41, 1LL);
  return 0LL;
}
