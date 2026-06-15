/*
 * XREFs of ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140065798
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x1400656B8 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x14002D340 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400382EC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x140064918 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140064B4C (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall GetModuleName(
        const struct _GUID *a1,
        struct IComCatalog *a2,
        struct IPropertyStore *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  int v8; // eax
  __int64 v9; // r8
  const char *v10; // r9
  char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  void **v15; // rcx
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // r8
  const char *v19; // r9
  const char *v20; // r9
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  void *v27[3]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+98h] [rbp-70h]
  void *v31; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v29 = (__int128)*a1;
  v30 = 100;
  v21 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  try
  {
    if ( ((int (*)(void))a3->lpVtbl->GetValue)() >= 0 && LOWORD(pvar[0]) == 31 )
    {
      v21 = 0LL;
      v8 = CoRegisterDeviceCatalog(pvar[1], &v21);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x31,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
          (const char *)(unsigned int)v8);
      std::wstring::wstring(v27, (__int64)pvar[1]);
      v11 = (char *)v27;
      if ( v28 >= 8 )
        v11 = (char *)v27[0];
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v23,
        v11,
        v9,
        v10);
      if ( v23 )
        *a5 = v23;
      if ( v28 >= 8 )
        std::_Deallocate<16,0>(v27[0], 2 * v28 + 2);
    }
    v24 = 0LL;
    v12 = *(_QWORD *)a2;
    v22 = 0LL;
    if ( (*(int (__fastcall **)(struct IComCatalog *, const struct _GUID *, GUID *, __int64 *))(v12 + 24))(
           a2,
           a1,
           &GUID_000001e2_0000_0000_c000_000000000046,
           &v22) >= 0
      && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, 1LL, &v24) >= 0 )
    {
      std::wstring::wstring(v27, v24);
      v15 = v27;
      if ( v28 >= 8 )
        v15 = (void **)v27[0];
      v16 = std::_Traits_find_last_of<std::char_traits<unsigned short>>(v15, (__int64)v27[2], v13, v14, 2LL);
      v17 = (char *)std::wstring::substr((__int64)v27, &v31, v16 + 1);
      if ( *((_QWORD *)v17 + 3) >= 8uLL )
        v17 = *(char **)v17;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v23,
        v17,
        v18,
        v19);
      if ( v32 >= 8 )
        std::_Deallocate<16,0>(v31, 2 * v32 + 2);
      if ( v23 )
        *a4 = v23;
      if ( v28 >= 8 )
        std::_Deallocate<16,0>(v27[0], 2 * v28 + 2);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
    PropVariantClear(pvar);
    if ( v21 )
      CoRevokeDeviceCatalog(v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      v20);
  }
}
