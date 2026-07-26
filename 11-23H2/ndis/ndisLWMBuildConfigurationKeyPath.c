/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x1C012BF50
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C012C76C (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002EE34 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 *     WPP_RECORDER_SF_S @ 0x1C00358BC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035B24 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0060C04 (WPP_RECORDER_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BCC4 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC14 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C0139B8C (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(__int64 a1, wchar_t *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v7; // eax
  char v9[8]; // [rsp+28h] [rbp-D8h]
  HANDLE v10; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v13[132]; // [rsp+60h] [rbp-A0h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x85u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      a1);
  v10 = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey(a1, (KRegKey *)&v10, 1u, 1LL);
  v5 = v4;
  if ( v4 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v6 = 134;
    *(_DWORD *)v9 = v4;
    goto LABEL_6;
  }
  *(_QWORD *)&v12 = &v10;
  memset(v13, 0, 0x204uLL);
  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(
         (void ***)&v12,
         (const struct _NETSETUPPROPKEY *)&unk_1C00E43A0,
         (struct KRegKey *)&Handle);
  if ( v5 )
  {
    KRegKey::~KRegKey((KRegKey *)&Handle);
    goto LABEL_12;
  }
  v12 = 0LL;
  v5 = KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(&Handle, &v12, v13);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
  {
LABEL_12:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 135;
LABEL_14:
      *(_DWORD *)v9 = v5;
LABEL_6:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v6,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        *(_QWORD *)v9);
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  if ( !v13[0] )
  {
    v7 = RtlStringCchPrintfW(a2, 0x100uLL, (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\%ws", &v13[1]);
LABEL_20:
    v5 = v7;
    if ( !v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x89u,
          (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
          a2);
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  if ( v13[0] == 1 )
  {
    v7 = RtlStringCchPrintfW(a2, 0x100uLL, L"\\Registry\\Machine\\DEVICES\\%ws", &v13[1]);
    goto LABEL_20;
  }
  v5 = -1073741811;
LABEL_21:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = 136;
    goto LABEL_14;
  }
LABEL_25:
  if ( v10 )
    ZwClose(v10);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Au,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      a1,
      v5);
  return v5;
}
