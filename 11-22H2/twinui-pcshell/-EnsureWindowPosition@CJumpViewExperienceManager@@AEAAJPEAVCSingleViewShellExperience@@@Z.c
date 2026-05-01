/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180447B3C
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804490D0 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DD7C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800DDA68 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800DDE10 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ @ 0x1801E398C (-IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1801E3C78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x180447838 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180448270 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1804482B8 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z @ 0x1804484B4 (-GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x180749334 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v11; // rax
  struct tagPOINT *v12; // rbx
  struct tagPOINT v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int Point; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, char *); // rdi
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  _DWORD *Reserved1; // rbx
  void **v22; // rcx
  int Int32; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, PVOID, char *); // rdi
  unsigned int v26; // r8d
  HSTRING_HEADER *v27; // rax
  _DWORD *v28; // rbx
  void **v29; // rcx
  int v30; // eax
  int MonitorInformation; // eax
  __int128 v32; // xmm6
  int v33; // eax
  int v34; // eax
  int *v36; // [rsp+28h] [rbp-A9h]
  enum EDGEUI_TRAYSTUCKPLACE *v37; // [rsp+28h] [rbp-A9h]
  __int64 v38; // [rsp+30h] [rbp-A1h]
  void *v39; // [rsp+48h] [rbp-89h] BYREF
  int v40; // [rsp+50h] [rbp-81h]
  void **v41; // [rsp+58h] [rbp-79h] BYREF
  struct IInspectable *v42; // [rsp+60h] [rbp-71h] BYREF
  int v43[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v44; // [rsp+70h] [rbp-61h] BYREF
  struct tagPOINT v45; // [rsp+78h] [rbp-59h] BYREF
  LONG x; // [rsp+80h] [rbp-51h]
  unsigned int v47; // [rsp+88h] [rbp-49h] BYREF
  int v48; // [rsp+8Ch] [rbp-45h] BYREF
  HSTRING_HEADER v49; // [rsp+98h] [rbp-39h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-21h]
  struct tagRECT v51; // [rsp+B8h] [rbp-19h] BYREF
  HSTRING_HEADER v52; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v44 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v44);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 963LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_32;
  }
  v39 = 0LL;
  v40 = 0;
  v9 = v44;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v44 + 48LL);
  v41 = &v39;
  v42 = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v49,
          (const WCHAR **)&JumpViewExperienceEvents::Param_Position,
          v5);
  v6 = v10(v9, v11[1].Reserved.Reserved1, &v42);
  v50 = 0LL;
  v12 = (struct tagPOINT *)v41;
  RoVariant::RoVariant((RoVariant *)&v45, v42);
  v13 = *v12;
  *v12 = v45;
  v45 = v13;
  v13.x = v12[1].x;
  v12[1].x = x;
  x = v13.x;
  RoVariant::~RoVariant((RoVariant *)&v45);
  if ( v6 >= 0 )
  {
    v49.Reserved.Reserved1 = v39;
    *(_DWORD *)&v49.Reserved.Reserved2[8] = v40;
    Point = RoVariant::Accessor::GetPoint((RoVariant::Accessor *)&v49, (struct Windows::Foundation::Point *)v43);
    v6 = Point;
    if ( Point < 0 )
    {
      v14 = (unsigned int)Point;
      v15 = 969LL;
      goto LABEL_12;
    }
    v45.x = (int)*(float *)v43;
    v45.y = (int)*(float *)&v43[1];
    RoVariant::~RoVariant((RoVariant *)&v39);
    v39 = 0LL;
    v40 = 0;
    v17 = v44;
    v18 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v44 + 48LL);
    v49.Reserved.Reserved1 = &v39;
    *(_QWORD *)&v49.Reserved.Reserved2[8] = 0LL;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v52,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign,
            v19);
    v6 = v18(v17, v20[1].Reserved.Reserved1, &v49.Reserved.Reserved2[8]);
    v53 = 0LL;
    Reserved1 = v49.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v41, *(struct IInspectable **)&v49.Reserved.Reserved2[8]);
    v22 = *(void ***)Reserved1;
    *(_QWORD *)Reserved1 = v41;
    v41 = v22;
    LODWORD(v22) = Reserved1[2];
    Reserved1[2] = (_DWORD)v42;
    LODWORD(v42) = (_DWORD)v22;
    RoVariant::~RoVariant((RoVariant *)&v41);
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 978LL;
      goto LABEL_12;
    }
    v49.Reserved.Reserved1 = v39;
    *(_DWORD *)&v49.Reserved.Reserved2[8] = v40;
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v49, v43);
    v6 = Int32;
    if ( Int32 < 0 )
    {
      v14 = (unsigned int)Int32;
      v15 = 981LL;
      goto LABEL_12;
    }
    RoVariant::~RoVariant((RoVariant *)&v39);
    v39 = 0LL;
    v40 = 0;
    v24 = v44;
    v25 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v44 + 48LL);
    v49.Reserved.Reserved1 = &v39;
    *(_QWORD *)&v49.Reserved.Reserved2[8] = 0LL;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v52,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign,
            v26);
    v6 = v25(v24, v27[1].Reserved.Reserved1, &v49.Reserved.Reserved2[8]);
    v53 = 0LL;
    v28 = v49.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v41, *(struct IInspectable **)&v49.Reserved.Reserved2[8]);
    v29 = *(void ***)v28;
    *(_QWORD *)v28 = v41;
    v41 = v29;
    LODWORD(v29) = v28[2];
    v28[2] = (_DWORD)v42;
    LODWORD(v42) = (_DWORD)v29;
    RoVariant::~RoVariant((RoVariant *)&v41);
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 988LL;
      goto LABEL_12;
    }
    v49.Reserved.Reserved1 = v39;
    *(_DWORD *)&v49.Reserved.Reserved2[8] = v40;
    v30 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v49, v43);
    v6 = v30;
    if ( v30 < 0 )
    {
      v14 = (unsigned int)v30;
      v15 = 991LL;
      goto LABEL_12;
    }
    RoVariant::~RoVariant((RoVariant *)&v39);
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v45,
                           (struct tagRECT *)&v49,
                           &v47,
                           (CJumpViewExperienceManager *)((char *)this + 496));
    v6 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v7 = (unsigned int)MonitorInformation;
      v8 = 1000LL;
      goto LABEL_31;
    }
    v32 = *(_OWORD *)&v49.Reserved.Reserved1;
    *(_OWORD *)((char *)this + 524) = *(_OWORD *)&v49.Reserved.Reserved1;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)v47,
      (int)&v48,
      v43,
      v36);
    if ( v48 <= 0 || v43[0] <= 0 )
    {
      v6 = -2147024809;
      v7 = 2147942487LL;
      v8 = 1010LL;
      goto LABEL_31;
    }
    *(_OWORD *)&v49.Reserved.Reserved1 = v32;
    v33 = CJumpViewExperienceManager::CalcWindowPosition(
            (int *)&v49,
            *(_QWORD *)&v45,
            v48,
            v43[0],
            (__int64)v37,
            v38,
            &v51);
    v6 = v33;
    if ( v33 < 0 )
    {
      v7 = (unsigned int)v33;
      v8 = 1013LL;
      goto LABEL_31;
    }
    v34 = CSingleViewShellExperience::SetPosition(a2, &v51);
    v6 = v34;
    if ( v34 < 0 )
    {
      v7 = (unsigned int)v34;
      v8 = 1014LL;
      goto LABEL_31;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
    {
      if ( CJumpViewExperienceManager::IsShowingOnHover(this) )
        *(struct tagRECT *)((char *)&g_hoverState + 4) = v51;
    }
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v44);
    return 0LL;
  }
  v14 = (unsigned int)v6;
  v15 = 966LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)v14);
  RoVariant::~RoVariant((RoVariant *)&v39);
LABEL_32:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v44);
  return (unsigned int)v6;
}
