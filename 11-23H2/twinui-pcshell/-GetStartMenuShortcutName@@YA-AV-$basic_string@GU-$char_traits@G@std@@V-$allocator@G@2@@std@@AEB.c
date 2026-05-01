/*
 * XREFs of ?GetStartMenuShortcutName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18061E234
 * Callers:
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18061D5D0 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall GetStartMenuShortcutName(_QWORD *a1, _QWORD *a2)
{
  LPVOID v4; // rbx
  int (__fastcall *v5)(LPVOID, _QWORD *, __int64 *, _QWORD); // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, _QWORD, void **); // rdi
  void **v9; // rax
  LPVOID ppv; // [rsp+38h] [rbp-8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, &ppv) < 0 )
    goto LABEL_12;
  v4 = ppv;
  v5 = *(int (__fastcall **)(LPVOID, _QWORD *, __int64 *, _QWORD))(*(_QWORD *)ppv + 72LL);
  v6 = v12;
  v12 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  if ( v5(v4, a2, &v12, 0LL) < 0 )
    goto LABEL_12;
  pv = 0LL;
  v7 = v12;
  v8 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v12 + 40LL);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  if ( v8(v7, 0LL, v9) < 0 )
  {
    if ( pv )
      CoTaskMemFree(pv);
LABEL_12:
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_13;
  }
  std::wstring::wstring(a1, pv);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_13:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
