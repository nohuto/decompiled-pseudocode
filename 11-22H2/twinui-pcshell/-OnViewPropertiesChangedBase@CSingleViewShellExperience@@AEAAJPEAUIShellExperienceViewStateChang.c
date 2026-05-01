/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DD360
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B450 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9714 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA8D0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800DD278 (-StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800DD334 (--1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800DD72C (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1800DD770 (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DD7C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800DDA68 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800DDE10 (--1RoVariant@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ @ 0x18019E008 (-UnstashPendingShow@CSingleViewShellExperience@@AEAA-AW4ShowOptions@1@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v12)(__int64, __int64, struct IInspectable **); // rdi
  int v13; // eax
  bool v14; // r8
  char v15; // di
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  int Size; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, struct IInspectable **); // rdi
  int v21; // eax
  bool v22; // r8
  char v23; // di
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  int Boolean; // eax
  int v27; // edx
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // eax
  int v32; // r8d
  int v33[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v34; // [rsp+28h] [rbp-D8h]
  _QWORD *v35; // [rsp+30h] [rbp-D0h] BYREF
  struct IInspectable *v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v5 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v42,
    (__int64)"OnViewPropertiesChangedBase");
  v42[0] = (__int64)&SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)v42,
    v5,
    StringRawBuffer);
  *(_QWORD *)v33 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v33);
  v7 = v6(a2, v33);
  v8 = v7;
  if ( v7 < 0 )
  {
    v29 = (unsigned int)v7;
    v30 = 580LL;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)v33 )
  {
    v8 = -2147467259;
    v29 = 2147500037LL;
    v30 = 582LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v29,
      v33[0]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v33);
    goto LABEL_17;
  }
  v9 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = *(_QWORD *)v33;
  *(_QWORD *)v33 = v9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v33);
  v37 = 0LL;
  v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          (char *)this + 32,
          &v37);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24B,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      v33[0]);
  }
  else
  {
    v38 = 0LL;
    v39 = 0;
    *(_QWORD *)((char *)this + 44) = 0LL;
    v11 = v37;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v37 + 48LL);
    v35 = &v38;
    v36 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"desiredSize", 0xCu, 0xBu);
    v13 = v12(v11, v41, &v36);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x252,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v13,
        v33[0]);
      v15 = 0;
    }
    else
    {
      v15 = 1;
    }
    v41 = 0LL;
    v16 = v35;
    RoVariant::RoVariant((RoVariant *)v33, v36, v14);
    v17 = *v16;
    *v16 = *(_QWORD *)v33;
    *(_QWORD *)v33 = v17;
    LODWORD(v17) = *((_DWORD *)v16 + 2);
    *((_DWORD *)v16 + 2) = v34;
    v34 = v17;
    RoVariant::~RoVariant((RoVariant *)v33);
    if ( v15 )
    {
      v35 = v38;
      LODWORD(v36) = v39;
      Size = RoVariant::Accessor::GetSize(
               (RoVariant::Accessor *)&v35,
               (CSingleViewShellExperience *)((char *)this + 44));
      if ( Size < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x255,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Size,
          v33[0]);
    }
    *((_BYTE *)this + 52) = 0;
    v19 = v37;
    v20 = *(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v37 + 48LL);
    v35 = &v38;
    v36 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"fullScreen", 0xBu, 0xAu);
    v21 = v20(v19, v41, &v36);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25F,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v21,
        v33[0]);
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    v41 = 0LL;
    v24 = v35;
    RoVariant::RoVariant((RoVariant *)v33, v36, v22);
    v25 = *v24;
    *v24 = *(_QWORD *)v33;
    *(_QWORD *)v33 = v25;
    LODWORD(v25) = *((_DWORD *)v24 + 2);
    *((_DWORD *)v24 + 2) = v34;
    v34 = v25;
    RoVariant::~RoVariant((RoVariant *)v33);
    if ( v23 )
    {
      v35 = v38;
      LODWORD(v36) = v39;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v35, (unsigned __int8 *)this + 52);
      if ( Boolean < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x261,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Boolean,
          v33[0]);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) )
    {
      if ( *((_QWORD *)this + 3) )
      {
        *((_DWORD *)this + 10) = 1;
        v31 = CSingleViewShellExperience::UnstashPendingShow(this);
        *((_QWORD *)this + 8) = 0LL;
        if ( v32 == 1 )
          CSingleViewShellExperience::ShowViewAsync(this, v31);
      }
    }
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v42, v27);
    v8 = 0;
    RoVariant::~RoVariant((RoVariant *)&v38);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
LABEL_17:
  SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::~OnViewPropertiesChangedBase((SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)v42);
  return v8;
}
