/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800960A8
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180095C68 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180095DD8 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180095F40 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 * Callees:
 *     ?Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18009611C (-Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 **__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 **a1)
{
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *v2; // rdi
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *v3; // rbx

  v2 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *)operator new(0x20uLL);
  v3 = v2;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::Initialize(v2) )
  {
    v3 = 0LL;
    (**(void (__fastcall ***)(Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *, __int64))v2)(v2, 1LL);
  }
  *a1 = v3;
  return a1;
}
