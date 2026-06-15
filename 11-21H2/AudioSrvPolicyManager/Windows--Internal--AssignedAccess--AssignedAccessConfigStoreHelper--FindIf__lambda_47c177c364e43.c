/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x1800420D0
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180041DB4 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800428B8 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180042958 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180042A04 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  _QWORD *v6; // r15
  __int64 v7; // r12
  void (__fastcall ***v9)(_QWORD, __int64); // [rsp+20h] [rbp-40h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+28h] [rbp-38h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v9);
  v3 = v11;
  v4 = v10;
  if ( v11 && v10 )
  {
    v5 = v9;
    if ( v9 )
    {
      v12[0] = v11;
      v6 = v12;
      v12[1] = v10;
      v12[2] = v9;
      while ( 1 )
      {
        v7 = *v6;
        if ( *(_DWORD *)(a2 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
            break;
        }
        if ( ++v6 == &v13 )
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
  else if ( v9 )
  {
    (**v9)(v9, 1LL);
  }
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return 0;
}
