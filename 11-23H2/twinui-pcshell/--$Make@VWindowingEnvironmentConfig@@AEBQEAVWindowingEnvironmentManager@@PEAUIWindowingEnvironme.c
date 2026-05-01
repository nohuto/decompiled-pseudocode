/*
 * XREFs of ??$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@12@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x180091108
 * Callers:
 *     ??$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@wil@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1800910CC (--$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEn.c)
 * Callees:
 *     ??0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@W4WindowingEnvironmentType@@@Z @ 0x18008F38C (--0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWin.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4)
{
  void *v8; // rax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9

  *a1 = 0LL;
  v8 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v11 = WindowingEnvironmentConfig::WindowingEnvironmentConfig(
            (__int64)v8,
            (*a2 + 144LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64),
            *a3,
            *a4);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::Release(
        *a1,
        v10,
        v12,
        v13);
    *a1 = v11;
    v9 = 0LL;
  }
  if ( v9 )
    operator delete(v9, 1uLL);
  return a1;
}
