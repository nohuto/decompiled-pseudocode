/*
 * XREFs of ??$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVIMiniSearch@@AEAPEAUIServiceProvider@@$$QEA$$T2@Z @ 0x18005DB54
 * Callers:
 *     ?GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18005D5B0 (-GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18005DC24 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@De.c)
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0MiniSearchExperienceManager@@QEAA@XZ @ 0x180101578 (--0MiniSearchExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017BED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Det.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<MiniSearchExperienceManager,IMiniSearch,IServiceProvider * &,std::nullptr_t,std::nullptr_t>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  MiniSearchExperienceManager *v4; // rax
  MiniSearchExperienceManager *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  va_list va1; // [rsp+80h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v4 = (MiniSearchExperienceManager *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v4;
  if ( v4 )
  {
    v5 = MiniSearchExperienceManager::MiniSearchExperienceManager(v4);
    v8 = 0LL;
    v6 = MiniSearchExperienceManager::RuntimeClassInitialize(v5, (__int64)va);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)va);
    if ( v6 >= 0 )
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMiniSearch>>(
             v5,
             &GUID_8ea1a33a_4a62_484e_967c_439093cd6ac3,
             a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMiniSearch>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
