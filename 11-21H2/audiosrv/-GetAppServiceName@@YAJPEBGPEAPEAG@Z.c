/*
 * XREFs of ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180153DB0
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180155B00 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180021120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18003D570 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800F085C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetAppServiceName(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  unsigned int v2; // edi
  int v4; // eax
  const char *v5; // r9
  char *v6; // r11
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  const char *v10; // r9
  _WORD *v11; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v13; // rbp
  unsigned __int16 *v14; // rsi
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 *v20; // [rsp+48h] [rbp+10h] BYREF
  _WORD *v21; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v20 = 0LL;
  v4 = StringCchLengthW(a1, 65LL, (unsigned __int64 *)&v20);
  v7 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v4);
    return v7;
  }
  v9 = (unsigned __int64)v20;
  if ( (unsigned __int64)v20 > 0x1E )
    v9 = 30LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v21,
    v6,
    v9,
    v5);
  v11 = v21;
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)0x8007000ELL);
    v2 = -2147024882;
    goto LABEL_18;
  }
  for ( i = 0LL; i < v9; ++i )
  {
    if ( v11[i] == 95 )
      v11[i] = 46;
  }
  v13 = v9 + 7;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v20,
    0LL,
    v9 + 7,
    v10);
  v14 = v20;
  if ( !v20 )
  {
    v16 = -2147024882;
    v18 = 207LL;
    v17 = 2147942414LL;
    goto LABEL_15;
  }
  v15 = StringCchPrintfW(v20, v13 + 1, L"com.%s", v11);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = (unsigned int)v15;
    v18 = 209LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)v17);
    v2 = v16;
    goto LABEL_16;
  }
  v20 = 0LL;
  *a2 = v14;
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v20);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v21);
  return v2;
}
