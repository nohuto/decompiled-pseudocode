/*
 * XREFs of GetModernAppId @ 0x18001F368
 * Callers:
 *     ?GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0005@@@Z @ 0x18001DF00 (-GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     GetFileName @ 0x18001F148 (GetFileName.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009D9B8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetModernAppId(__int64 a1, unsigned __int16 **a2, _DWORD *a3)
{
  const unsigned __int16 *v3; // rsi
  int v6; // ebx
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  const unsigned __int16 *v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  unsigned __int16 *v13; // r12
  const char *v14; // r9
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int16 *v17; // rbx
  int v18; // eax
  unsigned int v19; // edi
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rdx
  const unsigned __int16 *v24; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int16 *v26; // [rsp+90h] [rbp+48h] BYREF
  __int64 v27; // [rsp+98h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp+60h] BYREF

  v3 = (const unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 80));
  *a2 = 0LL;
  *a3 = 0;
  v29 = 0LL;
  v6 = StringCchLengthW(v3, 0x104uLL, &v29);
  if ( v6 < 0 )
  {
    v21 = 71LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = (const unsigned __int16 *)(v7 + *(unsigned int *)(v7 + 84));
  v28 = v8;
  v6 = StringCchLengthW(v9, 0x104uLL, &v28);
  if ( v6 < 0 )
  {
    v21 = 76LL;
    goto LABEL_9;
  }
  v12 = *(unsigned int *)(v10 + 76);
  v27 = v11;
  v24 = (const unsigned __int16 *)(v10 + v12);
  v26 = (unsigned __int16 *)&unk_1801E5750;
  GetFileName(&v24, &v26, &v27);
  v13 = v26;
  *a3 = ((unsigned int)_o__wcsicmp(v26, L"wwahost.exe") != 0) + 1;
  v15 = v29 + v28 + v27;
  v16 = v15 + 8;
  if ( v15 == -9LL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCCD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v14);
  v17 = (unsigned __int16 *)CoTaskMemAlloc(2 * v16 + 2);
  v26 = v17;
  if ( v17 )
  {
    *v17 = 0;
    v17[v16] = 0;
    v18 = StringCchPrintfW(v17, v15 + 9, aUSS, v3, v9, v13);
    v19 = v18;
    if ( v18 >= 0 )
    {
      *a2 = v17;
      return 0LL;
    }
    v22 = (unsigned int)v18;
    v23 = 126LL;
  }
  else
  {
    v19 = -2147024882;
    v23 = 114LL;
    v22 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
    (const char *)v22);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v26);
  return v19;
}
