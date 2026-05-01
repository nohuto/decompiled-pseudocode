/*
 * XREFs of ?get_EdgeAnimationRelationshipManager@?$produce@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UIShellAnimationCoordinator@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180760450
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::get_EdgeAnimationRelationshipManager(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  v6 = *(_QWORD *)v3;
  v4 = v6;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  *a2 = v4;
  return 0LL;
}
