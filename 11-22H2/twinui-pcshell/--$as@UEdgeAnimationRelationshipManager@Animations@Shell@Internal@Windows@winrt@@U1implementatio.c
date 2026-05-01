/*
 * XREFs of ??$as@UEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x18012B61C
 * Callers:
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18012B520 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 * Callees:
 *     ?query_interface@?$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18012B674 (-query_interface@-$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@S.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,0>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::query_interface(
           a2,
           winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
