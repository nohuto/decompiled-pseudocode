/*
 * XREFs of ??_G?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UEAAPEAXI@Z @ 0x180705850
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  winrt::Windows::Internal::Shell::RegistrationData *v4; // rcx

  v4 = *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 48);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(
      v4,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 56));
    std::_Deallocate<16,0>(*(void **)(a1 + 48), (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(a1);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
