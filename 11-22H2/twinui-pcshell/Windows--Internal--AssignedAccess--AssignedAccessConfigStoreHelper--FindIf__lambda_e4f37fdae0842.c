/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180095C68
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180096460 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800960A8 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180096194 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180096218 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
        __int64 a1,
        __int64 *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  __int64 v6; // r12
  _QWORD *v7; // r14
  __int64 v8; // r15
  char v9; // bp
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+20h] [rbp-68h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+28h] [rbp-60h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v13);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v12);
  v3 = v13;
  v4 = v11;
  v5 = v12;
  if ( v13 && v11 && v12 )
  {
    v6 = *a2;
    v7 = v14;
    v14[0] = v13;
    v14[1] = v11;
    v14[2] = v12;
    while ( 1 )
    {
      v8 = *v7;
      if ( *(_DWORD *)(v6 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a2[1]) )
          break;
      }
      if ( ++v7 == &v15 )
        goto LABEL_8;
    }
    v9 = 1;
  }
  else
  {
LABEL_8:
    v9 = 0;
  }
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return v9;
}
