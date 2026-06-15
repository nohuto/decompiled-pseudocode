/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800428B8
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x1800420D0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180042300 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180042530 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 * Callees:
 *     ?Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180043FAC (-Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rbx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = (void (__fastcall ***)(_QWORD, __int64))v3;
  if ( !v3 )
    goto LABEL_4;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *)v3) )
  {
    (**v4)(v4, 1LL);
LABEL_4:
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
