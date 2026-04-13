/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_e186064656f7d8cd47b6dee26a4bab29___ @ 0x1800BC0F4
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C0E90 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_e186064656f7d8cd47b6dee26a4bab29_@@QEAA_NAEBV?$com_ptr_t@UICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDC48 (--R_lambda_e186064656f7d8cd47b6dee26a4bab29_@@QEAA_NAEBV-$com_ptr_t@UICuratedTile@CuratedTileCol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_e186064656f7d8cd47b6dee26a4bab29___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v21; // [rsp+78h] [rbp+38h] BYREF

  v3 = *a1;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(a1, &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      142LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4,
      v15);
  v16 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v17)(
         v17,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         &v16);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v5,
      v15);
  v21 = 0LL;
  v6 = *v16;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v6 + 48))(v16, &v21);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      146LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7,
      v15);
  v19 = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, char *))(*v21 + 56))(v21, &v19);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      148LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result,
      v15);
  while ( v19 )
  {
    v20 = 0LL;
    v15 = 0LL;
    v9 = *v21;
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48))(v21, &v15);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        155LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10,
        v15);
    v11 = v15;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 56LL);
    v13 = v20;
    v20 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v12(v11, &v20);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        156LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14,
        v15);
    result = _lambda_e186064656f7d8cd47b6dee26a4bab29_::operator()(a2, &v20);
    if ( !(_BYTE)result )
    {
      if ( v15 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v20 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      break;
    }
    result = (*(__int64 (__fastcall **)(__int64 *, char *))(*v21 + 64))(v21, &v19);
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        163LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)result,
        v15);
    if ( v15 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v20 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v21 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  if ( v16 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  if ( v17 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return result;
}
