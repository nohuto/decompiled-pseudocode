/*
 * XREFs of ?CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@23@@Z @ 0x1800183A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIUIContentRoot@UI@Windows@@UIWeakReferenceSource@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180018554 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIUIContentRoot@UI@Win.c)
 *     ??$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Details@WRL@Microsoft@@YAJPEAPEAVAppContentRoot@UI@Windows@@$$QEAPEAUICompositionIsland@Composition@45@$$QEAPEAUIInputSite@Input@Internal@45@@Z @ 0x180018600 (--$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAU.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAppContentRoot@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D9D8 (-InternalRelease@-$ComPtr@VAppContentRoot@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::AppContentRootFactory::CreateInstance(
        Windows::UI::AppContentRootFactory *this,
        struct IInspectable *a2,
        struct IInspectable *a3,
        struct Windows::UI::IUIContentRoot **a4)
{
  struct IInspectableVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int v9; // eax
  struct IInspectableVtbl *v10; // rax
  HRESULT (__stdcall *v11)(IInspectable *, const IID *const, void **); // rbx
  int v12; // eax
  int v13; // eax
  int CanCastTo; // ebx
  const struct _GUID *v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  struct Windows::UI::IUIContentRoot *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::IUIContentRoot *v26; // [rsp+70h] [rbp+30h] BYREF

  lpVtbl = a3->lpVtbl;
  v22 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
         a3,
         &GUID_cfb32fa7_5399_5f3d_82ba_9641f106ffcd,
         &v22);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
      (const char *)(unsigned int)v9,
      v21);
  v10 = a2->lpVtbl;
  v21 = 0LL;
  v11 = v10->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
  v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v11)(
          a2,
          &GUID_9d031780_ae09_5272_80e0_50a215c0baf0,
          &v21);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
      (const char *)(unsigned int)v12,
      v21);
  v26 = 0LL;
  v23 = v22;
  v24 = v21;
  Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(&v26);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::AppContentRoot,Windows::UI::AppContentRoot,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Internal::Input::IInputSite *>(
          &v26,
          &v24,
          &v23);
  CanCastTo = v13;
  if ( v13 < 0 )
  {
    v18 = (unsigned int)v13;
    v19 = 122LL;
  }
  else
  {
    *a4 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_1dfcbac6_b36b_5cb9_9bc5_2b7a0eddc378,
                         &GUID_00000000_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v15, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v20 = v26;
      *a4 = v26;
      (*(void (__fastcall **)(struct Windows::UI::IUIContentRoot *))(*(_QWORD *)v20 + 8LL))(v20);
      goto LABEL_8;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::UI::IUIContentRoot,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::CanCastTo(
                  v26,
                  v16,
                  a4);
    if ( CanCastTo >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
      return 0LL;
    }
    v18 = (unsigned int)CanCastTo;
    v19 = 124LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
    (const char *)v18);
  Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  return (unsigned int)CanCastTo;
}
