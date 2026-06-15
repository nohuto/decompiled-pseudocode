/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010B20
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x1800108D8 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180047808 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180047A50 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 * Callees:
 *     ??$?0VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@XX@?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@@1@@Z @ 0x180010BE0 (--$-0VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U-$default_delete@VAssignedAc.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@Z @ 0x180010C20 (-reset@-$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U-$default_del.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  unsigned __int8 (__fastcall *v4)(_QWORD *); // rdx
  void (__fastcall ***v6)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( !v3 )
  {
    v6 = 0LL;
    goto LABEL_5;
  }
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v4 = (unsigned __int8 (__fastcall *)(_QWORD *))*(&Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable'
                                                 + 5);
  *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v6 = (void (__fastcall ***)(_QWORD, __int64))v3;
  if ( !v4(v3) )
LABEL_5:
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2>>::reset(&v6);
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
    a1,
    &v6);
  if ( v6 )
    (**v6)(v6, 1LL);
  return a1;
}
