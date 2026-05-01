/*
 * XREFs of ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B5134
 * Callers:
 *     ?NonDelegatingQueryInterface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B4274 (-NonDelegatingQueryInterface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComp.c)
 *     ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B4400 (-QueryInterface@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inte.c)
 *     ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B4490 (-QueryInterface@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapCompone_ea_1805B4490.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@QEAAIXZ @ 0x1805B3B28 (-AddRef@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 *     ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1805B4EE8 (-make_weak_ref@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@In.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
    goto LABEL_4;
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    return winrt::impl::make_marshaler(v11, a3);
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      goto LABEL_5;
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
LABEL_4:
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
LABEL_5:
      *a3 = v9;
LABEL_2:
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
    {
      weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::make_weak_ref(a1);
      *a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
    }
  }
}
