/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180042530
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180041DB4 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800428B8 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180042958 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180042A04 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
        __int64 a1,
        __int64 *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  __int64 v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // r15
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-40h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+28h] [rbp-38h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v10);
  v3 = v12;
  v4 = v11;
  if ( v12 && v11 )
  {
    v5 = v10;
    if ( v10 )
    {
      v6 = *a2;
      v7 = v13;
      v13[0] = v12;
      v13[1] = v11;
      v13[2] = v10;
      while ( 1 )
      {
        v8 = *v7;
        if ( *(_DWORD *)(v6 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a2[1]) )
            break;
        }
        if ( ++v7 == &v14 )
        {
          (**v5)(v5, 1LL);
          (**v4)(v4, 1LL);
          (**v3)(v3, 1LL);
          return 0;
        }
      }
      (**v5)(v5, 1LL);
      (**v4)(v4, 1LL);
      (**v3)(v3, 1LL);
      return 1;
    }
  }
  else if ( v10 )
  {
    (**v10)(v10, 1LL);
  }
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return 0;
}
