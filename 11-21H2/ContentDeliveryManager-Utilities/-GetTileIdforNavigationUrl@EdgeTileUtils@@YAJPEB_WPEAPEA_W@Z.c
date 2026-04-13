/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800D3C24
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800D2890 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800CF4DC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800D2644 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800D447C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall EdgeTileUtils::GetTileIdforNavigationUrl(const WCHAR *this, wchar_t *a2, wchar_t **a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int v7; // eax
  const char *v8; // r9
  wchar_t **v9; // r8
  EdgeTileUtils *v10; // rbx
  unsigned int v11; // edi
  int v13; // eax
  HRESULT (__stdcall *CreateUriSimple)(IUriBuilder *, DWORD, DWORD_PTR, IUri **); // rsi
  int v15; // eax
  struct IUriVtbl *lpVtbl; // rax
  int v17; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 v21; // rcx
  const char *v22; // r9
  IUri *v23; // [rsp+30h] [rbp-39h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+38h] [rbp-31h] BYREF
  IUri *ppURI; // [rsp+40h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-21h] BYREF
  BSTR bstrString; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-11h] BYREF
  EdgeTileUtils *v29; // [rsp+60h] [rbp-9h] BYREF
  char *v30; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int16 v31[4]; // [rsp+70h] [rbp+7h] BYREF
  wchar_t v32[4]; // [rsp+78h] [rbp+Fh] BYREF
  char v33; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  ppURI = 0LL;
  v4 = CreateUri(this, 0, 0LL, &ppURI);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)(unsigned int)v4);
    if ( ppURI )
      ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
    return v5;
  }
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
    if ( ppIUriBuilder )
      ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
    if ( ppURI )
      ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
    return v5;
  }
  v28 = 0;
  v30 = 0LL;
  v23 = 0LL;
  v7 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, char **))ppIUriBuilder->lpVtbl->GetQuery)(
         ppIUriBuilder,
         &v28,
         &v30);
  v5 = v7;
  if ( v7 == 1 || !v28 )
  {
    v23 = ppURI;
    if ( ppURI )
      ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
  }
  else
  {
    if ( v7 < 0 )
    {
      if ( ppIUriBuilder )
        ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
      return v5;
    }
    pv = 0LL;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
      &v29,
      v30,
      v28,
      v8);
    v10 = v29;
    if ( !v29 )
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)0x8007000ELL);
      if ( pv )
        CoTaskMemFree(pv);
      if ( ppIUriBuilder )
        ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
      return v5;
    }
    *(_QWORD *)v31 = &pv;
    *(_QWORD *)v32 = 0LL;
    v33 = 1;
    v11 = EdgeTileUtils::RemoveTelemetryQueryParams(v29, v32, v9);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>((void ***)v31);
    if ( (v11 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)v11);
      CoTaskMemFree(v10);
      if ( pv )
        CoTaskMemFree(pv);
      if ( ppIUriBuilder )
        ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
      return v11;
    }
    v13 = ((__int64 (__fastcall *)(IUriBuilder *, LPVOID))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, pv);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)(unsigned int)v13);
      CoTaskMemFree(v10);
      if ( pv )
        CoTaskMemFree(pv);
      if ( ppIUriBuilder )
        ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
      return v11;
    }
    CreateUriSimple = ppIUriBuilder->lpVtbl->CreateUriSimple;
    v23 = 0LL;
    v15 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))CreateUriSimple)(
            ppIUriBuilder,
            0LL,
            0LL,
            &v23);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)(unsigned int)v15);
      CoTaskMemFree(v10);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v23 )
        ((void (__fastcall *)(IUri *))v23->lpVtbl->Release)(v23);
      if ( ppIUriBuilder )
        ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
      return v11;
    }
    CoTaskMemFree(v10);
    if ( pv )
      CoTaskMemFree(pv);
  }
  bstrString = 0LL;
  lpVtbl = v23->lpVtbl;
  bstrString = 0LL;
  v17 = ((__int64 (__fastcall *)(IUri *, BSTR *))lpVtbl->GetAbsoluteUri)(v23, &bstrString);
  v5 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)(unsigned int)v17);
    if ( bstrString )
      SysFreeString(bstrString);
    if ( v23 )
      ((void (__fastcall *)(IUri *))v23->lpVtbl->Release)(v23);
    if ( ppIUriBuilder )
      ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
    if ( ppURI )
      ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
    return v5;
  }
  v18 = 997LL;
  v19 = -1LL;
  do
    ++v19;
  while ( bstrString[v19] );
  if ( v19 && bstrString[v19 - 1] == 47 )
    --v19;
  v20 = 0;
  if ( v19 )
  {
    v21 = 0LL;
    do
    {
      v18 = (unsigned int)bstrString[v21] + 31 * (_DWORD)v18;
      v21 = ++v20;
    }
    while ( v20 < v19 );
  }
  *(_QWORD *)a2 = 0LL;
  v5 = StringCchPrintfW(v31, 13LL, L"%u%u", v18, 0);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)v5);
    if ( bstrString )
      SysFreeString(bstrString);
    if ( v23 )
      ((void (__fastcall *)(IUri *))v23->lpVtbl->Release)(v23);
    if ( ppIUriBuilder )
      ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
    if ( ppURI )
      ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
    return v5;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
    &v29,
    (char *)v31,
    0xFFFFFFFFFFFFFFFFuLL,
    v22);
  if ( !v29 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)0x8007000ELL);
    goto LABEL_78;
  }
  *(_QWORD *)a2 = v29;
  if ( bstrString )
    SysFreeString(bstrString);
  if ( v23 )
    ((void (__fastcall *)(IUri *))v23->lpVtbl->Release)(v23);
  if ( ppIUriBuilder )
    ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
  if ( ppURI )
    ((void (__fastcall *)(IUri *))ppURI->lpVtbl->Release)(ppURI);
  return 0LL;
}
