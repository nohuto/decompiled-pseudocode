/*
 * XREFs of ??1?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x180098C98
 * Callers:
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$3 @ 0x18006CFB3 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$3.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::~pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v1);
  return result;
}
