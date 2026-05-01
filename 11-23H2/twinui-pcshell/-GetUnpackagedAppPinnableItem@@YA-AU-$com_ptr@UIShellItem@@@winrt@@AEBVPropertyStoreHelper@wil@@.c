/*
 * XREFs of ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1806A2770
 * Callers:
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A1FC4 (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802D29FC (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1806A1B2C (-GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     PropVariantToIDList @ 0x1806AA490 (PropVariantToIDList.c)
 */

// Hidden C++ exception states: #wind=6
void **__fastcall GetUnpackagedAppPinnableItem(void **a1, _QWORD *a2, _QWORD *a3)
{
  int FailIf; // eax
  const struct _GUID *v6; // rdx
  __int64 v7; // r8
  HRESULT Instance; // eax
  LPCITEMIDLIST v9; // rbx
  __int64 (__fastcall *v10)(LPCITEMIDLIST, _QWORD, void **); // rsi
  int v11; // eax
  int ObjectW; // eax
  int v13; // eax
  void *v14; // rcx
  HRESULT v15; // eax
  ITEMIDLIST *v16; // rcx
  int ppv; // [rsp+20h] [rbp-39h]
  int ppva; // [rsp+20h] [rbp-39h]
  __int128 v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-9h]
  void **v22; // [rsp+60h] [rbp+7h]
  LPCITEMIDLIST pidl; // [rsp+68h] [rbp+Fh] BYREF
  PROPVARIANT pvar[3]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v22 = a1;
  *a1 = 0LL;
  LOWORD(pvar[0]) = 0;
  v20 = PKEY_AppUserModel_BestShortcut;
  v21 = 10;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a2, (__int64)&v20, pvar);
  if ( FailIf >= 0 )
  {
    if ( LOWORD(pvar[0]) == 13 )
    {
      if ( *a1 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1);
      ObjectW = wil::PropVariant::GetObjectW((wil::PropVariant *)pvar, v6, a1);
      if ( ObjectW < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x62,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)ObjectW,
          ppv);
    }
    else
    {
      pidl = 0LL;
      *(_QWORD *)&v20 = &pidl;
      *((_QWORD *)&v20 + 1) = 0LL;
      LOBYTE(v21) = 1;
      v13 = PropVariantToIDList(pvar, (char *)&v20 + 8, v7);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x68,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)v13,
          ppv);
      if ( (_BYTE)v21 )
      {
        v14 = *(void **)v20;
        *(_QWORD *)v20 = *((_QWORD *)&v20 + 1);
        if ( v14 )
          CoTaskMemFree(v14);
      }
      if ( *a1 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1);
      v15 = SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, a1);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x69,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)v15,
          ppv);
      v16 = (ITEMIDLIST *)pidl;
      pidl = 0LL;
      if ( v16 )
        CoTaskMemFree(v16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)FailIf);
    pidl = 0LL;
    Instance = CoCreateInstance(
                 &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
                 0LL,
                 3u,
                 &GUID_de25675a_72de_44b4_9373_05170450c140,
                 (LPVOID *)&pidl);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)Instance,
        ppva);
    v9 = pidl;
    v10 = *(__int64 (__fastcall **)(LPCITEMIDLIST, _QWORD, void **))(*(_QWORD *)&pidl->mkid.cb + 64LL);
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1);
    v11 = v10(v9, *a3, a1);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)v11,
        ppva);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pidl);
  }
  PropVariantClear(pvar);
  return a1;
}
