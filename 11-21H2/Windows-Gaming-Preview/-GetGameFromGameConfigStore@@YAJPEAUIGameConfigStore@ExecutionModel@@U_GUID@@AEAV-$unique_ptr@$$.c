/*
 * XREFs of ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180018520
 * Callers:
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180018484 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018620 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGameFromGameConfigStore(__int64 *a1, __int128 *a2, void **a3, _DWORD *a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  void *v10; // rax
  void *v11; // rcx
  void *v12; // r8
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*a3 )
    *a4 = 0;
  v8 = *a1;
  v15 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v8 + 24))(a1, &v15);
  if ( v9 == -2147024662 )
  {
    v10 = operator new[]((unsigned int)*a4, (const struct std::nothrow_t *)&std::nothrow);
    v11 = *a3;
    v12 = v10;
    *a3 = v10;
    if ( v11 )
    {
      operator delete[](v11);
      v12 = *a3;
    }
    if ( !v12 )
    {
      v9 = -2147024882;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v9);
      return v9;
    }
    v13 = *a1;
    v15 = *a2;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, void *, _DWORD *))(v13 + 24))(a1, &v15, v12, a4);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_10;
  return v9;
}
