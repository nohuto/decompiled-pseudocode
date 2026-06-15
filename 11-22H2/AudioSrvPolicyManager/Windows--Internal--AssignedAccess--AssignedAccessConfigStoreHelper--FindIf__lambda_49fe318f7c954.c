/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x1800108D8
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000FF60 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010B20 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010C5C (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180010EA0 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  __int64 *v6; // r14
  __int64 v7; // r15
  void (__fastcall ***v9)(_QWORD, __int64); // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v9);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v10);
  v3 = v11;
  v4 = v9;
  v5 = v10;
  if ( !v11 || !v9 || !v10 )
  {
    if ( v10 )
      (**v10)(v10, 1LL);
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( !v3 )
      return 0;
    goto LABEL_27;
  }
  v12[0] = v11;
  v6 = v12;
  v12[1] = v9;
  v12[2] = v10;
  while ( v6 != &v13 )
  {
    v7 = *v6;
    if ( *(_DWORD *)(a2 + 24) <= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v6 + 32LL))(*v6)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) )
    {
      if ( v5 )
        (**v5)(v5, 1LL);
      if ( v4 )
        (**v4)(v4, 1LL);
      if ( v3 )
        (**v3)(v3, 1LL);
      return 1;
    }
    ++v6;
  }
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
LABEL_27:
    (**v3)(v3, 1LL);
  return 0;
}
