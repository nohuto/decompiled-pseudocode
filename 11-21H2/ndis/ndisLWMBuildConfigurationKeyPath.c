/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x1C0120228
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C01209F0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002C654 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C005B994 (WPP_RECORDER_SF__guid_d.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0110310 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C012DD9C (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(__int64 a1, wchar_t *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v7; // eax
  char v9[8]; // [rsp+28h] [rbp-D8h]
  struct KRegKey v10; // [rsp+40h] [rbp-C0h] BYREF
  KRegKey v11; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v13[132]; // [rsp+60h] [rbp-A0h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x86u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1);
  v11.m_ptr = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey(a1, &v11, 1u, 1);
  v5 = v4;
  if ( v4 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v6 = 135;
    *(_DWORD *)v9 = v4;
    goto LABEL_6;
  }
  *(_QWORD *)&v12 = &v11;
  memset(v13, 0, 0x204uLL);
  v10.m_ptr = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey((void ***)&v12, (const struct _NETSETUPPROPKEY *)&unk_1C00DC100, &v10);
  if ( !v5 )
  {
    v12 = 0LL;
    v5 = KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(&v10, &v12, v13);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 136;
LABEL_12:
      *(_DWORD *)v9 = v5;
LABEL_6:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v6,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        *(_QWORD *)v9);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  if ( !v13[0] )
  {
    v7 = RtlStringCchPrintfW(a2, 0x100uLL, (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\%ws", &v13[1]);
LABEL_18:
    v5 = v7;
    if ( !v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x8Au,
          (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
          a2);
      goto LABEL_23;
    }
    goto LABEL_19;
  }
  if ( v13[0] == 1 )
  {
    v7 = RtlStringCchPrintfW(a2, 0x100uLL, L"\\Registry\\Machine\\DEVICES\\%ws", &v13[1]);
    goto LABEL_18;
  }
  v5 = -1073741811;
LABEL_19:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = 137;
    goto LABEL_12;
  }
LABEL_23:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Bu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1,
      v5);
  return v5;
}
