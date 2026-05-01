/*
 * XREFs of ??1?$com_ptr_t@V?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803966D4
 * Callers:
 *     _cshell::make_agile_vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::dtor$0 @ 0x180395E13 (_cshell--make_agile_vector_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper____--_1_--.c)
 *     __lambda_67d44a18aa71790abd3976d622df6952_::operator()_::_1_::dtor$4 @ 0x18049C096 (__lambda_67d44a18aa71790abd3976d622df6952_--operator()_--_1_--dtor$4.c)
 *     _cshell::make_agile_vector_unsigned_int__::_1_::dtor$0 @ 0x1804BB2AF (_cshell--make_agile_vector_unsigned_int__--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x1804CD88A (_WindowingEnvironmentSettings--get_RequestedDisplayRegionIds_--_1_--dtor$0.c)
 *     _UwpWindowingEnvironmentSettings::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x1804D404A (_UwpWindowingEnvironmentSettings--get_RequestedDisplayRegionIds_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$0 @ 0x18061D288 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039EBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGet.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
