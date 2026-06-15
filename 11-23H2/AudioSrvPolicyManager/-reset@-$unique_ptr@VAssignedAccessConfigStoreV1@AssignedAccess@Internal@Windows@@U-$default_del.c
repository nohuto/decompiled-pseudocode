/*
 * XREFs of ?reset@?$unique_ptr@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@Z @ 0x180010F50
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010E50 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1>>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
