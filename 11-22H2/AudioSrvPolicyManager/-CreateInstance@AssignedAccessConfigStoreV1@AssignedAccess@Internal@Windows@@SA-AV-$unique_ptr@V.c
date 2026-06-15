/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010EA0
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x1800108D8 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180047808 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180047A50 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 * Callees:
 *     ??$?0VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@XX@?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@@1@@Z @ 0x180010F60 (--$-0VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U-$default_delete@VAssignedAc.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@@Z @ 0x180010FA0 (-reset@-$unique_ptr@VAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@U-$default_del.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( !v3 )
  {
    v5 = 0LL;
    goto LABEL_5;
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))v3;
  *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v3 + 40LL))(v3) )
LABEL_5:
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1>>::reset(&v5);
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
    a1,
    &v5);
  if ( v5 )
    (**v5)(v5, 1LL);
  return a1;
}
