/*
 * XREFs of ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z @ 0x1400269F4
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140026B74 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140026E9C (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x140026F9C (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x140031E30 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GetModuleName(const struct _GUID *a1, struct IComCatalog *a2, unsigned __int16 **a3)
{
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned __int16 *v10; // rax
  const char *v11; // r9
  unsigned __int16 *v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  unsigned __int64 v17; // [rsp+60h] [rbp-38h]
  _QWORD v18[3]; // [rsp+68h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v14 = 0LL;
    v4 = *(_QWORD *)a2;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(struct IComCatalog *, const struct _GUID *, GUID *, __int64 *))(v4 + 24))(
           a2,
           a1,
           &GUID_000001e2_0000_0000_c000_000000000046,
           &v13) >= 0
      && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 1LL, &v14) >= 0 )
    {
      std::wstring::wstring(v15, v14);
      v7 = v15;
      if ( v17 >= 8 )
        LODWORD(v7) = v15[0];
      v8 = std::_Traits_find_last_of<std::char_traits<unsigned short>>((_DWORD)v7, v16, v5, v6, 2LL);
      v9 = (_QWORD *)std::wstring::substr(v15, v18, v8 + 1);
      if ( v9[3] >= 8uLL )
        v9 = (_QWORD *)*v9;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v12,
        v9);
      if ( v19 >= 8 )
        std::_Deallocate<16,0>(v18[0], 2 * v19 + 2);
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        *a3 = v10;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v12);
      if ( v17 >= 8 )
        std::_Deallocate<16,0>(v15[0], 2 * v17 + 2);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      v11);
  }
}
