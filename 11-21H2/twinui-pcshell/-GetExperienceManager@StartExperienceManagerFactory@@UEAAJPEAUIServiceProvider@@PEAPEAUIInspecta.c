/*
 * XREFs of ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180171CC0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18011AC04 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x180171D84 (--$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStartExperienceManag.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18036E9D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartExperienceManagerFactory::GetExperienceManager(
        StartExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v5; // eax
  int CanCastTo; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rdx
  CStartExperienceManager *v10; // rcx
  CStartExperienceManager *v11; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CStartExperienceManager *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(&v16);
  if ( !v16 )
  {
    CanCastTo = -2147024882;
    v13 = 1406LL;
LABEL_16:
    v14 = (unsigned int)CanCastTo;
    goto LABEL_17;
  }
  v5 = CStartExperienceManager::RuntimeClassInitialize(v16, a2);
  CanCastTo = v5;
  if ( v5 >= 0 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      v10 = v16;
      *a3 = (struct IInspectable *)v16;
      (*(void (__fastcall **)(CStartExperienceManager *))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::CanCastTo(
                    (char *)v16 + 8,
                    v9,
                    a3);
      if ( CanCastTo >= 0 )
        ((void (__fastcall *)(_QWORD))(*a3)->lpVtbl->AddRef)(*a3);
    }
    if ( CanCastTo >= 0 )
    {
      CanCastTo = 0;
      goto LABEL_8;
    }
    v13 = 1408LL;
    goto LABEL_16;
  }
  v14 = (unsigned int)v5;
  v13 = 1407LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)v14);
LABEL_8:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release((__int64)v11);
  }
  return (unsigned int)CanCastTo;
}
