/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x1C012B950
 * Callers:
 *     NdisOpenConfiguration @ 0x1C001CBB0 (NdisOpenConfiguration.c)
 *     ndisWdfOpenConfiguration @ 0x1C012B7D4 (ndisWdfOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024614 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qSd @ 0x1C005D438 (WPP_RECORDER_SF_qSd.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C005D594 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BD04 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, HANDLE *a2)
{
  __int64 v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int Uint32; // eax
  _DEVICE_OBJECT *v8; // rcx
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _GUID *v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+20h] [rbp-E0h]
  char v16[8]; // [rsp+28h] [rbp-D8h]
  char v17[8]; // [rsp+30h] [rbp-D0h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v19; // [rsp+78h] [rbp-88h] BYREF
  char v20[4]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v22; // [rsp+90h] [rbp-70h]
  wchar_t v23[56]; // [rsp+A0h] [rbp-60h] BYREF

  v22 = a2;
  v2 = a1 + 4008;
  v19 = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, (KRegKey *)&v19, 1u, 1LL);
  v6 = v5;
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        v2,
        v5);
    goto LABEL_4;
  }
  *(_DWORD *)v20 = 0;
  Handle = &v19;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&Handle,
             (const struct _NETSETUPPROPKEY *)&unk_1C00E2178,
             (unsigned int *)v20);
  v6 = Uint32;
  if ( Uint32 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xBu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        Uint32);
    goto LABEL_4;
  }
  v8 = *(_DEVICE_OBJECT **)(a1 + 3832);
  DeviceRegKey = 0LL;
  v6 = IoOpenDeviceRegistryKey(v8, 2u, 0xC2000000, &DeviceRegKey);
  if ( v6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      KRegKey::~KRegKey((KRegKey *)&DeviceRegKey);
LABEL_4:
      KRegKey::~KRegKey((KRegKey *)&v19);
      return v6;
    }
    v9 = 12;
LABEL_11:
    *(_DWORD *)v17 = v6;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      v9,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      a1,
      *(_QWORD *)v17);
    goto LABEL_12;
  }
  if ( *(_DWORD *)v20 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        8u,
        0xEu,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1,
        *(_DWORD *)v20);
    *(_DWORD *)v17 = *(unsigned __int8 *)(v2 + 8);
    *(_DWORD *)v16 = *(unsigned __int16 *)(v2 + 6);
    LODWORD(v14) = *(unsigned __int16 *)(v2 + 4);
    v6 = RtlStringCbPrintfW(
           v23,
           0x70uLL,
           (wchar_t *)L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *(unsigned int *)(a1 + 4008),
           v14,
           *(_QWORD *)v16,
           *(_QWORD *)v17,
           *(unsigned __int8 *)(v2 + 9),
           *(unsigned __int8 *)(v2 + 10),
           *(unsigned __int8 *)(v2 + 11),
           *(unsigned __int8 *)(v2 + 12),
           *(unsigned __int8 *)(v2 + 13),
           *(unsigned __int8 *)(v2 + 14),
           *(unsigned __int8 *)(v2 + 15));
    if ( v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v9 = 15;
      goto LABEL_11;
    }
    Handle = 0LL;
    v6 = KRegKey::Open((KRegKey *)&Handle, 0xC2000000, v23, DeviceRegKey);
    if ( v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12, v15);
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_12;
    }
    v6 = 0;
    *v22 = Handle;
    if ( DeviceRegKey )
      ZwClose(DeviceRegKey);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        *(_DWORD *)v20 + 8,
        *(_WORD *)v20 + 13,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        a1);
    *a2 = DeviceRegKey;
    DeviceRegKey = 0LL;
  }
  if ( v19 )
    ZwClose(v19);
  return v6;
}
