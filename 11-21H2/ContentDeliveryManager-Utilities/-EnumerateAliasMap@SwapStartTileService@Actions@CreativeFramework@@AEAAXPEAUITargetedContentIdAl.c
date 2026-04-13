/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x1800BE4B4
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF174 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
char __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD *); // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rbx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v24[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp-60h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+48h] [rbp-50h]
  _QWORD v30[2]; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+60h] [rbp-38h]
  __int64 v32; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v34; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+18h]
  HSTRING string; // [rsp+B8h] [rbp+20h] BYREF

  v36 = a3;
  v34 = a1;
  v4 = *a2;
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(a2, &v25);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      297LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5,
      v24[0]);
  *(_QWORD *)v24 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v25)(v25, &GUID_c86cab97_c160_561a_9b32_542f9e2e4911, v24);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v24[0]);
  v28 = 0LL;
  v30[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v24 + 48LL))(*(_QWORD *)v24, &v28);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7,
      v24[0]);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 56LL))(v28, &v34);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8,
      v24[0]);
  LOBYTE(v9) = -(char)v34;
  v10 = ((_BYTE)v34 != 0) - 1;
  v29 = v10;
  v30[1] = 0LL;
  v31 = -1;
  v32 = 0LL;
  while ( v10 != -1 )
  {
    v11 = v28;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 48LL);
    v13 = v30[0];
    if ( v30[0] )
    {
      v30[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v12(v11, v30);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14,
        v24[0]);
    string = 0LL;
    v15 = v30[0];
    v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30[0] + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v17 = v16(v15, &string);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        306LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v17,
        v24[0]);
    v35 = 0LL;
    v18 = *(_QWORD *)v30[0];
    v35 = 0LL;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v18 + 56))(v30[0], &v35);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        309LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v19,
        v24[0]);
    v26 = v35;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v20 = *(_QWORD *)(a3 + 24);
    if ( !v20 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, PCWSTR *, __int64 *))(*(_QWORD *)v20 + 16LL))(
            v20,
            &StringRawBuffer,
            &v26) )
    {
      if ( v35 )
        (*(void (**)(void))(*(_QWORD *)v35 + 16LL))();
      LOBYTE(v9) = WindowsDeleteString(string);
      break;
    }
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    WindowsDeleteString(string);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, &v34);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9,
        v24[0]);
    if ( (_BYTE)v34 )
      v10 = v29 + 1;
    else
      v10 = -1;
    v29 = v10;
  }
  v21 = v30[0];
  if ( v30[0] )
  {
    v30[0] = 0LL;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( *(_QWORD *)v24 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 16LL))(*(_QWORD *)v24);
  if ( v25 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v9;
}
