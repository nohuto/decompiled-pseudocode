/*
 * XREFs of ?get@?$static_lazy@VThemeCoordinatorProvider@@@details@wil@@QEAAPEAVThemeCoordinatorProvider@@P6AXXZ@Z @ 0x1806E43C4
 * Callers:
 *     ??$CacheHit@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z @ 0x1806E06C0 (--$CacheHit@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1806E18B8 (--1-$_TlgActivityBase@V-$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?CreateNew@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXXZ @ 0x1806E1F58 (-CreateNew@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXXZ.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?NotifyFailure@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1806E2EB0 (-NotifyFailure@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 *     ?StartActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXI@Z @ 0x1806E3A60 (-StartActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXI@Z.c)
 *     ?StopActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@MEAAXXZ @ 0x1806E3B20 (-StopActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806E51D4 (-zInternalStart@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ThemeCoordinatorProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ThemeCoordinatorProvider::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`ThemeCoordinatorProvider::Instance'::`2'::wrapper;
    v9 = &qword_1809900B8;
    qword_1809900B8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1809900D0 = (__int64)&`ThemeCoordinatorProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
