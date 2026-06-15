/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010C0C
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180010888 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180046378 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1800465C0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 * Callees:
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@Z @ 0x180010CE0 (-reset@-$unique_ptr@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U-$default_del.c)
 *     ??$?0VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@wistd@@XX@?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@wistd@@@1@@Z @ 0x180010D1C (--$-0VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U-$default_delete@VAssignedAc.c)
 *     _lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator() @ 0x180010D48 (_lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( !v3 )
  {
    v7 = 0LL;
LABEL_6:
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0>>::reset(&v7);
    goto LABEL_7;
  }
  v3[2] = 0LL;
  v3[3] = 0LL;
  *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v7 = (void (__fastcall ***)(_QWORD, __int64))v3;
  v5[0] = v3;
  v5[1] = &v6;
  v6 = 0;
  if ( (int)lambda_d3e0cbfb3a0db2b18ab77775bcbdb9f6_::operator()(v5) < 0 || !v6 )
    goto LABEL_6;
LABEL_7:
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
    a1,
    &v7);
  if ( v7 )
    (**v7)(v7, 1LL);
  return a1;
}
