/*
 * XREFs of ??1?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800C3A60
 * Callers:
 *     _ShellMRTHelper::MRTHelperBase::InitializeMRTObjects_::_1_::dtor$0 @ 0x1800DC8F3 (_ShellMRTHelper--MRTHelperBase--InitializeMRTObjects_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::~NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>()
{
  return Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free();
}
