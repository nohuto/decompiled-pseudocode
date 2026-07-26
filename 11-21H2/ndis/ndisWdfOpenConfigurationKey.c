/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x1C011FC18
 * Callers:
 *     NdisOpenConfiguration @ 0x1C001AE70 (NdisOpenConfiguration.c)
 *     ndisWdfOpenConfiguration @ 0x1C011FAB0 (ndisWdfOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002563C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qSd @ 0x1C00581E8 (WPP_RECORDER_SF_qSd.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C0058348 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, HANDLE *a2)
{
  __int64 v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int Uint32; // eax
  _DEVICE_OBJECT *v8; // rcx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *m_ptr; // rax
  struct _GUID *v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+20h] [rbp-E0h]
  char v18[8]; // [rsp+28h] [rbp-D8h]
  char v19[8]; // [rsp+30h] [rbp-D0h]
  KRegKey v20; // [rsp+70h] [rbp-90h] BYREF
  char v21[4]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE DeviceRegKey; // [rsp+80h] [rbp-80h] BYREF
  KRegKey v23; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v24; // [rsp+90h] [rbp-70h]
  wchar_t v25[56]; // [rsp+A0h] [rbp-60h] BYREF

  v24 = a2;
  v2 = a1 + 4008;
  v23.m_ptr = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, &v23, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
        a1,
        v2,
        v5);
    goto LABEL_27;
  }
  *(_DWORD *)v21 = 0;
  v20.m_ptr = &v23;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (void ***)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D9DD8,
             (unsigned int *)v21);
  v6 = Uint32;
  if ( !Uint32 )
  {
    v8 = *(_DEVICE_OBJECT **)(a1 + 3832);
    DeviceRegKey = 0LL;
    v9 = IoOpenDeviceRegistryKey(v8, 2u, 0xC2000000, &DeviceRegKey);
    v6 = v9;
    if ( v9 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = 12;
LABEL_19:
        *(_DWORD *)v19 = v9;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          8u,
          v10,
          (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
          a1,
          *(_QWORD *)v19);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
    if ( *(_DWORD *)v21 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          8u,
          0xEu,
          (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
          a1,
          *(_DWORD *)v21);
      *(_DWORD *)v19 = *(unsigned __int8 *)(v2 + 8);
      *(_DWORD *)v18 = *(unsigned __int16 *)(v2 + 6);
      LODWORD(v16) = *(unsigned __int16 *)(v2 + 4);
      v9 = RtlStringCbPrintfW(
             v25,
             0x70uLL,
             (wchar_t *)L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
             *(unsigned int *)(a1 + 4008),
             v16,
             *(_QWORD *)v18,
             *(_QWORD *)v19,
             *(unsigned __int8 *)(v2 + 9),
             *(unsigned __int8 *)(v2 + 10),
             *(unsigned __int8 *)(v2 + 11),
             *(unsigned __int8 *)(v2 + 12),
             *(unsigned __int8 *)(v2 + 13),
             *(unsigned __int8 *)(v2 + 14),
             *(unsigned __int8 *)(v2 + 15));
      v6 = v9;
      if ( v9 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v10 = 15;
          goto LABEL_19;
        }
LABEL_26:
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
        goto LABEL_27;
      }
      v20.m_ptr = 0LL;
      v6 = KRegKey::Open(&v20, 0xC2000000, v25, DeviceRegKey);
      if ( v6 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v12, v13, v17);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20.m_ptr);
        goto LABEL_26;
      }
      m_ptr = v20.m_ptr;
      v20.m_ptr = 0LL;
      *v24 = m_ptr;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20.m_ptr);
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          *(_DWORD *)v21 + 8,
          *(_WORD *)v21 + 13,
          (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
          a1);
      *a2 = DeviceRegKey;
      DeviceRegKey = 0LL;
    }
    v6 = 0;
    goto LABEL_26;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      0xBu,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      a1,
      Uint32);
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v23.m_ptr);
  return v6;
}
