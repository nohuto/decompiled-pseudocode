/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ @ 0x180115860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::_Destroy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 32);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a1 + 24));
}
