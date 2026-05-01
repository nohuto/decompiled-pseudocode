/*
 * XREFs of ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801770F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBBA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CEF70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800CEF70.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180154434 (-InternalRelease@-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x1801771A4 (--$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManagerFactory::CreateInstance(
        CortanaStoreAppExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  int CanCastTo; // ebx
  void *v8; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v18; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( !a2 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease((__int64 *)&v18);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManager,CortanaStoreAppExperienceManager,>(&v18);
    CanCastTo = v6;
    if ( v6 < 0 )
    {
      v10 = (unsigned int)v6;
      v11 = 1358LL;
      goto LABEL_17;
    }
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v8 = v18;
      *a4 = v18;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v13, v12) )
      {
        *a4 = v18;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                      (__int64)v18 + 8,
                      a3,
                      a4);
        if ( CanCastTo == -2147467262 )
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::CanCastTo(
                        v16 + 112,
                        v14,
                        v15);
        if ( CanCastTo < 0 )
          goto LABEL_5;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
LABEL_5:
    if ( CanCastTo >= 0 )
    {
LABEL_6:
      Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease((__int64 *)&v18);
      return (unsigned int)CanCastTo;
    }
    v10 = (unsigned int)CanCastTo;
    v11 = 1359LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  return 2147746064LL;
}
