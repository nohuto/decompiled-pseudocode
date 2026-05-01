/*
 * XREFs of ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18064772C
 * Callers:
 *     ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18005CC80 (-UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 *     ?TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180649C14 (-TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180645F20 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIconFactory@Mul.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1806461CC (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1806484B8 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewIconFactory::CreateInstance(
        struct IApplicationView *a1,
        struct IApplicationViewIconLoader *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 *v5; // rax
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v12; // [rsp+38h] [rbp+10h] BYREF
  AppViewIconFactory *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = (AppViewIconFactory *)a3;
  v12 = a2;
  v11 = a1;
  *a4 = 0LL;
  try
  {
    v5 = (__int64 *)wil::MakeAndInitializeOrThrow<AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
                      &v13,
                      (__int64 *)&v11,
                      (__int64 *)&v12);
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IIconFactory>>(
           *v5,
           &GUID_2ddda005_932b_45bd_bdba_e25598ba2204,
           a4);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6C,
        (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v6,
        v9);
    Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
                           v7);
  }
  return result;
}
