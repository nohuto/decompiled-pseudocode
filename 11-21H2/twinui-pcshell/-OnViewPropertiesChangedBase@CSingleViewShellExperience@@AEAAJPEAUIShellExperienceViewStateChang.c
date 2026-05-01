/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800A120C
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075ADC (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000B96C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180071520 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A1604 (--1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800A168C (-StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResizeShellExperienceViews@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1854 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResizeShellExperienceViews@@@details@wil@.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800A18DC (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800A199C (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800A19E0 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1800A1A24 (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A1A68 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ @ 0x1800A1B88 (-UnstashPendingShow@CSingleViewShellExperience@@AEAA-AW4ShowOptions@1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180137790 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING, struct IInspectable **); // rdi
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  bool v17; // r8
  wil::details::in1diag3 *v18; // rcx
  char v19; // di
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  int Size; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, HSTRING, struct IInspectable **); // rdi
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax
  bool v29; // r8
  wil::details::in1diag3 *v30; // rcx
  char v31; // di
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  int Boolean; // eax
  __int64 v36; // r9
  __int64 v37; // rdx
  unsigned int v38; // eax
  int v39; // r8d
  int v40[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v41; // [rsp+28h] [rbp-D8h]
  _QWORD *v42; // [rsp+30h] [rbp-D0h] BYREF
  struct IInspectable *v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v49[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v5 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v49,
    (__int64)"OnViewPropertiesChangedBase");
  v49[0] = &SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)v49,
    v5,
    StringRawBuffer);
  *(_QWORD *)v40 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v40);
  v7 = v6(a2, v40);
  v8 = v7;
  if ( v7 < 0 )
  {
    v36 = (unsigned int)v7;
    v37 = 584LL;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)v40 )
  {
    v8 = -2147467259;
    v36 = 2147500037LL;
    v37 = 586LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v40);
    goto LABEL_20;
  }
  v9 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = *(_QWORD *)v40;
  *(_QWORD *)v40 = v9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v40);
  v44 = 0LL;
  v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          (char *)this + 32,
          &v44);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v45 = 0LL;
    v46 = 0;
    *(_QWORD *)((char *)this + 44) = 0LL;
    v11 = v44;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v44 + 48LL);
    v42 = &v45;
    v43 = 0LL;
    string[0] = 0LL;
    v13 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, string);
    if ( v13 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    }
    else
    {
      v16 = v12(v11, string[0], &v43);
      v18 = retaddr;
      if ( v16 >= 0 )
      {
        v19 = 1;
        goto LABEL_7;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)0x256,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16,
      v40[0]);
    v19 = 0;
LABEL_7:
    string[0] = 0LL;
    v20 = v42;
    RoVariant::RoVariant((RoVariant *)v40, v43, v17);
    v21 = *v20;
    *v20 = *(_QWORD *)v40;
    *(_QWORD *)v40 = v21;
    LODWORD(v21) = *((_DWORD *)v20 + 2);
    *((_DWORD *)v20 + 2) = v41;
    v41 = v21;
    RoVariant::~RoVariant((RoVariant *)v40);
    if ( v19 )
    {
      v42 = v45;
      LODWORD(v43) = v46;
      Size = RoVariant::Accessor::GetSize(
               (RoVariant::Accessor *)&v42,
               (CSingleViewShellExperience *)((char *)this + 44));
      if ( Size < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x259,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Size,
          v40[0]);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResizeShellExperienceViews>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ResizeShellExperienceViews>::GetImpl'::`2'::impl,
        0LL);
    }
    *((_BYTE *)this + 52) = 0;
    v23 = v44;
    v24 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v44 + 48LL);
    v42 = &v45;
    v43 = 0LL;
    string[0] = 0LL;
    v25 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, string);
    if ( v25 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
    }
    else
    {
      v28 = v24(v23, string[0], &v43);
      v30 = retaddr;
      if ( v28 >= 0 )
      {
        v31 = 1;
        goto LABEL_14;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v30,
      (void *)0x263,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v28,
      v40[0]);
    v31 = 0;
LABEL_14:
    string[0] = 0LL;
    v32 = v42;
    RoVariant::RoVariant((RoVariant *)v40, v43, v29);
    v33 = *v32;
    *v32 = *(_QWORD *)v40;
    *(_QWORD *)v40 = v33;
    LODWORD(v33) = *((_DWORD *)v32 + 2);
    *((_DWORD *)v32 + 2) = v41;
    v41 = v33;
    RoVariant::~RoVariant((RoVariant *)v40);
    if ( v31 )
    {
      v42 = v45;
      LODWORD(v43) = v46;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v42, (unsigned __int8 *)this + 52);
      if ( Boolean < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x265,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Boolean,
          v40[0]);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) )
    {
      if ( *((_QWORD *)this + 3) )
      {
        *((_DWORD *)this + 10) = 1;
        v38 = CSingleViewShellExperience::UnstashPendingShow(this);
        *((_QWORD *)this + 8) = 0LL;
        if ( v39 == 1 )
          CSingleViewShellExperience::ShowViewAsync((__int64)this, v38);
      }
    }
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v49);
    v8 = 0;
    RoVariant::~RoVariant((RoVariant *)&v45);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24F,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v10);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
LABEL_20:
  SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::~OnViewPropertiesChangedBase((SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)v49);
  return v8;
}
