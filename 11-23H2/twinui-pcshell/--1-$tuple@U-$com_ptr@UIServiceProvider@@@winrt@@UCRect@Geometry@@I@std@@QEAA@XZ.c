/*
 * XREFs of ??1?$tuple@U?$com_ptr@UIServiceProvider@@@winrt@@UCRect@Geometry@@I@std@@QEAA@XZ @ 0x18022A3CC
 * Callers:
 *     _std::bind_winrt::fire_and_forget_(__cdecl_)(std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____winrt::com_ptr_IServiceProvider__Geometry::CRect_const_&_unsigned_int)_std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____&_winrt::com_ptr_IServiceProvider__&_Geometry::CRect_unsigned_int__::_1_::dtor$4 @ 0x180229CA7 (_std--bind_winrt--fire_and_forget_(__cdecl_)(std--vector_winrt--Windows--Internal--Shell--Platfo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::tuple<winrt::com_ptr<IServiceProvider>,Geometry::CRect,unsigned int>::~tuple<winrt::com_ptr<IServiceProvider>,Geometry::CRect,unsigned int>(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 24);
  if ( *v1 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
  return result;
}
