/*
 * XREFs of _util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$0 @ 0x1400909E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140060D98 (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 */

void __fastcall util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(*(_QWORD *)(a2 + 96));
  }
}
