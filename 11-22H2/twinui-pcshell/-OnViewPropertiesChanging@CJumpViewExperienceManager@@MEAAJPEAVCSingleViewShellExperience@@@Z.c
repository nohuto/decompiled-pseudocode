/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804490D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DD7C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800DDA68 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800DDE10 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1801B73D8 (-Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ @ 0x1801E398C (-IsShowingOnHover@CJumpViewExperienceManager@@AEAA_NXZ.c)
 *     ?StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801E3BB8 (-StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1801E3C78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180440F28 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180447B3C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        HSTRING *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int String; // eax
  bool IsShowingOnHover; // al
  char *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  int v22; // eax
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  int v28; // [rsp+40h] [rbp-40h]
  _QWORD *v29; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)(this - 8), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 715LL;
      goto LABEL_5;
    }
    v29 = 0LL;
    v30 = 0;
    v8 = v24;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v24 + 48LL);
    v25 = &v29;
    v26 = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v31,
            (const WCHAR **)&JumpViewExperienceEvents::Param_Title,
            v7);
    v5 = v9(v8, v10[1].Reserved.Reserved1, &v26);
    v32 = 0LL;
    v11 = v25;
    RoVariant::RoVariant((RoVariant *)&v27, v26);
    v12 = *v11;
    *v11 = v27;
    v27 = v12;
    LODWORD(v12) = *((_DWORD *)v11 + 2);
    *((_DWORD *)v11 + 2) = v28;
    v28 = v12;
    RoVariant::~RoVariant((RoVariant *)&v27);
    if ( v5 < 0 )
    {
      v13 = (unsigned int)v5;
      v14 = 718LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)v13);
LABEL_20:
      RoVariant::~RoVariant((RoVariant *)&v29);
      goto LABEL_21;
    }
    if ( v29 )
    {
      v25 = v29;
      LODWORD(v26) = v30;
      Microsoft::WRL::Wrappers::HString::Release(this + 45);
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v25, this + 45);
      v5 = String;
      if ( String < 0 )
      {
        v13 = (unsigned int)String;
        v14 = 721LL;
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 456) )
    {
      *((_BYTE *)this + 456) = 0;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
      {
        IsShowingOnHover = CJumpViewExperienceManager::IsShowingOnHover((CJumpViewExperienceManager *)(this - 8));
        v17 = (char *)(this + 11);
        if ( IsShowingOnHover )
        {
          v18 = CSingleViewShellExperience::Show(
                  (__int64)v17,
                  (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
          v19 = v18;
          if ( v18 < 0 )
          {
            v5 = -2147467259;
            if ( v18 == -2147467259 )
              goto LABEL_20;
            v20 = 739LL;
LABEL_28:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
              (const char *)v19);
            v5 = v19;
            goto LABEL_20;
          }
          CJumpViewExperienceManager::StartMouseHoverHook((CJumpViewExperienceManager *)(this - 8));
        }
        else
        {
          v22 = CSingleViewShellExperience::Show(
                  (__int64)v17,
                  *((_BYTE *)this + 457) == 0
                ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4
                : 0);
          v19 = v22;
          if ( v22 < 0 )
          {
            v5 = -2147467259;
            if ( v22 == -2147467259 )
              goto LABEL_20;
            v20 = 745LL;
            goto LABEL_28;
          }
        }
      }
      else
      {
        v23 = CSingleViewShellExperience::Show(
                (__int64)(this + 11),
                *((_BYTE *)this + 457) == 0 ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4 : 0);
        v19 = v23;
        if ( v23 < 0 )
        {
          v5 = -2147467259;
          if ( v23 == -2147467259 )
            goto LABEL_20;
          v20 = 751LL;
          goto LABEL_28;
        }
      }
    }
    v5 = 0;
    goto LABEL_20;
  }
  v6 = 699LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_21:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v24);
  return (unsigned int)v5;
}
