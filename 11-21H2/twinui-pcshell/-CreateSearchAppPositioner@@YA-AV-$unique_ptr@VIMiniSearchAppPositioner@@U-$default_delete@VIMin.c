/*
 * XREFs of ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005EFD8
 * Callers:
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 * Callees:
 *     ??0MiniSearchAppPositioner@@QEAA@V?$unique_ptr@VIMiniSearchAppPositionerConfig@@U?$default_delete@VIMiniSearchAppPositionerConfig@@@wistd@@@wistd@@@Z @ 0x18005F070 (--0MiniSearchAppPositioner@@QEAA@V-$unique_ptr@VIMiniSearchAppPositionerConfig@@U-$default_delet.c)
 *     ??0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F0CC (--0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreateSearchAppPositioner(_QWORD *a1, struct IServiceProvider *a2)
{
  MiniSearchAppPositionerConfig *v4; // rax
  MiniSearchAppPositionerConfig *v5; // rbx
  void *v6; // rax
  MiniSearchAppPositionerConfig *v8; // [rsp+30h] [rbp+8h] BYREF
  MiniSearchAppPositionerConfig *v9; // [rsp+40h] [rbp+18h]

  v8 = 0LL;
  v4 = (MiniSearchAppPositionerConfig *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
    v5 = MiniSearchAppPositionerConfig::MiniSearchAppPositionerConfig(v4, a2);
  else
    v5 = 0LL;
  v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = v5;
    *a1 = MiniSearchAppPositioner::MiniSearchAppPositioner(v6, &v8);
  }
  else
  {
    *a1 = 0LL;
    if ( v5 )
      (**(void (__fastcall ***)(MiniSearchAppPositionerConfig *, __int64))v5)(v5, 1LL);
  }
  return a1;
}
