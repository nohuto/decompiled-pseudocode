/*
 * XREFs of ??R_lambda_5e4b16c36dead49fea411161d0ed4586_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800BD898
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_5e4b16c36dead49fea411161d0ed4586_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@std@@@2@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@2@U92@U92@U92@U92@@std@@UEAA_N$$QEAPEB_W$$QEAPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800C2280 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_5e4b16c36dead49fea411161d0ed4586_@@$0A@@std@@V-.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800BE2A0 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall _lambda_5e4b16c36dead49fea411161d0ed4586_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  char *StringRawBuffer; // rax
  int v11; // ebx
  unsigned __int64 v12; // r8
  char v13; // di
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  void **v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // eax
  char *v20; // rax
  unsigned __int64 v21; // r8
  _QWORD *v22; // rax
  unsigned __int64 *v23; // rdx
  void *v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r10
  char v27; // bl
  _QWORD *v28; // r8
  __int64 *v29; // rax
  __int64 *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  HSTRING string; // [rsp+20h] [rbp-60h] BYREF
  HSTRING v35; // [rsp+28h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v37[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-38h]
  unsigned __int64 v39; // [rsp+50h] [rbp-30h]
  void *v40[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-18h]
  unsigned __int64 v42; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LODWORD(v36) = 0;
  v35 = 0LL;
  string = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 56LL);
  WindowsDeleteString(0LL);
  v35 = 0LL;
  v7 = v6(a3, &v35);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      354LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7,
      (int)string);
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL);
  WindowsDeleteString(string);
  string = 0LL;
  v9 = v8(a3, &string);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      355LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      (int)string);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v35, 0LL);
  v42 = 7LL;
  v41 = 0LL;
  LOWORD(v40[0]) = 0;
  v11 = -1;
  if ( *(_WORD *)StringRawBuffer )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&StringRawBuffer[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v40, StringRawBuffer, v12);
  v13 = 1;
  LODWORD(v36) = 1;
  v14 = (_QWORD *)*a1;
  v15 = (_QWORD *)(*a1 + 232LL);
  v16 = v40;
  if ( v42 >= 8 )
    v16 = (void **)v40[0];
  v17 = *(_QWORD *)(*a1 + 248LL);
  v18 = v17;
  if ( v17 >= v41 )
    v18 = v41;
  if ( *(_QWORD *)(*a1 + 256LL) >= 8uLL )
    v15 = (_QWORD *)*v15;
  if ( v18 )
  {
    while ( *(_WORD *)v15 == *(_WORD *)v16 )
    {
      v15 = (_QWORD *)((char *)v15 + 2);
      v16 = (void **)((char *)v16 + 2);
      if ( !--v18 )
        goto LABEL_16;
    }
    v19 = *(_WORD *)v15 < *(_WORD *)v16 ? -1 : 1;
  }
  else
  {
LABEL_16:
    if ( v17 >= v41 )
      v19 = v17 != v41;
    else
      v19 = -1;
  }
  if ( v19 )
  {
    v25 = v39;
    v24 = (void *)v37[0];
  }
  else
  {
    v20 = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v39 = 7LL;
    v38 = 0LL;
    LOWORD(v37[0]) = 0;
    if ( *(_WORD *)v20 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v20[2 * v21] );
    }
    else
    {
      v21 = 0LL;
    }
    std::wstring::assign(v37, v20, v21);
    v13 = 3;
    v22 = v14 + 25;
    v23 = v37;
    v24 = (void *)v37[0];
    v25 = v39;
    if ( v39 >= 8 )
      v23 = (unsigned __int64 *)v37[0];
    v26 = v14[27];
    v18 = v26;
    if ( v26 >= v38 )
      v18 = v38;
    if ( v14[28] >= 8uLL )
      v22 = (_QWORD *)*v22;
    if ( v18 )
    {
      while ( *(_WORD *)v22 == *(_WORD *)v23 )
      {
        v22 = (_QWORD *)((char *)v22 + 2);
        v23 = (unsigned __int64 *)((char *)v23 + 2);
        if ( !--v18 )
          goto LABEL_34;
      }
      v11 = *(_WORD *)v22 < *(_WORD *)v23 ? -1 : 1;
    }
    else
    {
LABEL_34:
      if ( v26 >= v38 )
        v11 = v26 != v38;
    }
    if ( !v11 )
    {
      v27 = 1;
      goto LABEL_41;
    }
  }
  v27 = 0;
LABEL_41:
  if ( (v13 & 2) != 0 )
  {
    v13 &= ~2u;
    if ( v25 >= 8 )
      operator delete(v24);
    v39 = 7LL;
    v38 = 0LL;
    LOWORD(v37[0]) = 0;
  }
  if ( (v13 & 1) != 0 && v42 >= 8 )
    operator delete(v40[0]);
  if ( v27 )
  {
    v28 = v14 + 21;
    if ( v14[24] >= 8uLL )
      v28 = (_QWORD *)*v28;
    v29 = (__int64 *)CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
                       v18,
                       &v36,
                       v28,
                       a2);
    v30 = (__int64 *)a1[1];
    v31 = *v29;
    *v29 = 0LL;
    v32 = *v30;
    *v30 = v31;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v35);
    return 0;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v35);
    return 1;
  }
}
