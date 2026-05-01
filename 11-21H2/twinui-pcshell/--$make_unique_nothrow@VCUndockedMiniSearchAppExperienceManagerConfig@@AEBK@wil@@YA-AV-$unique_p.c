/*
 * XREFs of ??$make_unique_nothrow@VCUndockedMiniSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x18005DF24
 * Callers:
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18006AA50 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@XZ @ 0x18017E680 (--0-$function@$$A6AXXZ@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<CUndockedMiniSearchAppExperienceManagerConfig,unsigned long const &>(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *(_QWORD *)v4 = &CUndockedMiniSearchAppExperienceManagerConfig::`vftable';
    v4[2] = v5;
    *((_QWORD *)v4 + 2) = 0LL;
    std::function<void (void)>::function<void (void)>(v4 + 6);
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)(v6 + 88));
    *(_BYTE *)(v7 + 96) = v8;
    *(_QWORD *)(v7 + 104) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7;
  return a1;
}
