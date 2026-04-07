/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180012668
 * Callers:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044E00 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800FC5EC (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 *     ?_Change_array@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIInspectable@Foundation@Windows@winrt@@_K1@Z @ 0x1800FECF4 (-_Change_array@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Found.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
