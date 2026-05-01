/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180095F40
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180096460 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800960A8 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180096194 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180096218 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  _QWORD *v6; // r14
  __int64 v7; // r15
  char v8; // bp
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v11);
  v3 = v12;
  v4 = v10;
  v5 = v11;
  if ( v12 && v10 && v11 )
  {
    v13[0] = v12;
    v6 = v13;
    v13[1] = v10;
    v13[2] = v11;
    while ( 1 )
    {
      v7 = *v6;
      if ( *(_DWORD *)(a2 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
          break;
      }
      if ( ++v6 == &v14 )
        goto LABEL_8;
    }
    v8 = 1;
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return v8;
}
