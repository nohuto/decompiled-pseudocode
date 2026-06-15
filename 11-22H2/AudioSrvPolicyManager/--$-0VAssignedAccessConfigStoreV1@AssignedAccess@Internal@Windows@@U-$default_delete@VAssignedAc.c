/*
 * XREFs of ??$?0VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@XX@?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@@1@@Z @ 0x180010F60
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010EA0 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     ??$?0PEAVAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@@?$__compressed_pair@PEAVAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAPEAVAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@$$QEAU?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@1@@Z @ 0x180010F8C (--$-0PEAVAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U-$default_delete@VAssigne.c)
 */

__int64 __fastcall wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5 = v2;
  wistd::__compressed_pair<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::__compressed_pair<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
    a1,
    &v5);
  return v3;
}
