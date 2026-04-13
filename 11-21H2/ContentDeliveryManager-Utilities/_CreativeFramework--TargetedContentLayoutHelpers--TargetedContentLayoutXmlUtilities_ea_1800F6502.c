/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities_::_1_::dtor$5 @ 0x1800F6502
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028E6C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 32));
  }
  return result;
}
