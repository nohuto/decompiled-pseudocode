/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018620
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180018520 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001AA6C (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     wprintf @ 0x18004B75C (wprintf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  const char *v7; // r9
  int v8; // eax
  unsigned int v10; // r14d
  unsigned int v11; // esi
  int GameFromGameConfigStore; // eax
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  void *v16[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  void *v23; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0;
  v4 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v21);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !v21 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  v18 = 0LL;
  v19 = 0LL;
  try
  {
    std::vector<_GUID>::_Reallocate_exactly(&v18);
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x79,
                     (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v7);
    if ( (_QWORD)v18 )
      std::_Deallocate<16,0>((char *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
    return (unsigned int)v23;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, v18, &v21);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v8);
    if ( (_QWORD)v18 )
      std::_Deallocate<16,0>((char *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
    return v6;
  }
  v10 = 0;
  v11 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v18 + 16LL * v11);
      GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)v16, &v23, &v22);
      v10 = GameFromGameConfigStore;
      if ( GameFromGameConfigStore < 0 )
        break;
      v13 = v23;
      v4 = 0LL;
      v23 = 0LL;
      v16[0] = v13;
      v17 = *(_OWORD *)(v18 + 16LL * v11);
      v14 = *(_QWORD *)(a2 + 56);
      if ( !v14 )
      {
        std::_Xbad_function_call();
        break;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v14 + 16LL))(v14, &v17, v16);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          143LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v15);
      if ( v16[0] )
        operator delete[](v16[0]);
      if ( ++v11 >= v21 )
        goto LABEL_21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)GameFromGameConfigStore);
    v4 = v23;
  }
LABEL_21:
  if ( (_QWORD)v18 )
  {
    std::_Deallocate<16,0>((char *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( v4 )
    operator delete[](v4);
  return v10;
}
