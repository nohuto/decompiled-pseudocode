/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800BE8F8
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800BD9A4 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C160 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEA_W@Z$1-SysFreeString@@YAX0@ZU-$integral_const.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800BAEC0 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800BD5DC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800BED28 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?TileIdtoPWSTR@EdgeTileUtils@@YAJKPEAPEA_W@Z @ 0x1800BF26C (-TileIdtoPWSTR@EdgeTileUtils@@YAJKPEAPEA_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall EdgeTileUtils::GetTileIdforNavigationUrl(const WCHAR *this, const wchar_t *a2, wchar_t **a3)
{
  unsigned int v3; // esi
  HRESULT v4; // eax
  int v5; // ebx
  HRESULT v6; // eax
  int v7; // eax
  const char *v8; // r9
  wchar_t **v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  int v12; // eax
  IUriBuilder *v13; // rbx
  HRESULT (__stdcall *CreateUriSimple)(IUriBuilder *, DWORD, DWORD_PTR, IUri **); // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  struct IUriVtbl *lpVtbl; // rax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r10d
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // rcx
  void *v26; // [rsp+30h] [rbp-40h] BYREF
  EdgeTileUtils *v27; // [rsp+38h] [rbp-38h] BYREF
  OLECHAR *v28; // [rsp+40h] [rbp-30h] BYREF
  IUri *ppURI; // [rsp+48h] [rbp-28h] BYREF
  char *v30; // [rsp+50h] [rbp-20h] BYREF
  void **v31; // [rsp+58h] [rbp-18h] BYREF
  wchar_t v32[4]; // [rsp+60h] [rbp-10h] BYREF
  char v33; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v35; // [rsp+A8h] [rbp+38h] BYREF
  IUri *v36; // [rsp+B0h] [rbp+40h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (unsigned int)a2;
  *(_QWORD *)a2 = 0LL;
  ppURI = 0LL;
  v4 = CreateUri(this, 0, 0LL, &ppURI);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ppIUriBuilder = 0LL;
    v6 = CreateIUriBuilder(ppURI, 0, 0LL, &ppIUriBuilder);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)(unsigned int)v6);
LABEL_5:
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppIUriBuilder);
      goto LABEL_41;
    }
    v35 = 0;
    v30 = 0LL;
    v36 = 0LL;
    v7 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, char **))ppIUriBuilder->lpVtbl->GetQuery)(
           ppIUriBuilder,
           &v35,
           &v30);
    v5 = v7;
    if ( v7 == 1 || !v35 )
    {
      v17 = (__int64)v36;
      v36 = ppURI;
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    else
    {
      if ( v7 < 0 )
      {
LABEL_13:
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v36);
        goto LABEL_5;
      }
      v26 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
        &v27,
        v30,
        v35,
        v8);
      if ( !v27 )
      {
        v5 = -2147024882;
        v10 = 179LL;
LABEL_11:
        v11 = (unsigned int)v5;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
          (const char *)v11);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v27);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v26);
        goto LABEL_13;
      }
      v31 = &v26;
      *(_QWORD *)v32 = 0LL;
      v33 = 1;
      v5 = EdgeTileUtils::RemoveTelemetryQueryParams(v27, v32, v9);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>((__int64)&v31);
      if ( v5 < 0 )
      {
        v10 = 182LL;
        goto LABEL_11;
      }
      v12 = ((__int64 (__fastcall *)(IUriBuilder *, void *))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, v26);
      v5 = v12;
      if ( v12 < 0 )
      {
        v11 = (unsigned int)v12;
        v10 = 184LL;
        goto LABEL_12;
      }
      v13 = ppIUriBuilder;
      CreateUriSimple = ppIUriBuilder->lpVtbl->CreateUriSimple;
      v15 = (__int64)v36;
      v36 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))CreateUriSimple)(v13, 0LL, 0LL, &v36);
      v5 = v16;
      if ( v16 < 0 )
      {
        v11 = (unsigned int)v16;
        v10 = 185LL;
        goto LABEL_12;
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v27);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v26);
    }
    v28 = 0LL;
    lpVtbl = v36->lpVtbl;
    v28 = 0LL;
    v19 = ((__int64 (__fastcall *)(IUri *, OLECHAR **))lpVtbl->GetAbsoluteUri)(v36, &v28);
    v5 = v19;
    if ( v19 >= 0 )
    {
      v21 = 997;
      v22 = -1LL;
      do
        ++v22;
      while ( v28[v22] );
      if ( v22 && v28[v22 - 1] == 47 )
        --v22;
      v23 = 0;
      if ( v22 )
      {
        v24 = 0LL;
        do
        {
          v21 = v28[v24] + 31 * v21;
          v24 = ++v23;
        }
        while ( v23 < v22 );
      }
      v19 = EdgeTileUtils::TileIdtoPWSTR((EdgeTileUtils *)v21, v3, (wchar_t **)v22);
      v5 = v19;
      if ( v19 >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v28);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppIUriBuilder);
        v5 = 0;
        goto LABEL_41;
      }
      v20 = 196LL;
    }
    else
    {
      v20 = 194LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)(unsigned int)v19);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v28);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
    (const char *)(unsigned int)v4);
LABEL_41:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppURI);
  return (unsigned int)v5;
}
