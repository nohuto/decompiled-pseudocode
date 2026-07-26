/*
 * XREFs of ndisMiniportQueryInterfaceProperty @ 0x1C0121634
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C01134CC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C01137A4 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall ndisMiniportQueryInterfaceProperty(__int64 a1, void *a2, KRegKey **a3)
{
  unsigned int v5; // ebx
  PVOID v6; // rcx
  KRegKey v8; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF
  KRegKey *v10; // [rsp+78h] [rbp+38h] BYREF

  P = a2;
  v8.m_ptr = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, &v8, 1u, 1);
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Bu,
        &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
        a1,
        v5);
  }
  else
  {
    P = 0LL;
    v10 = &v8;
    v5 = NetSetupPropertyBag::ReadString(
           (NetSetupPropertyBag *)&v10,
           (const struct _NETSETUPPROPKEY *)&unk_1C00DA5D8,
           &P);
    if ( v5 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x1Cu,
          &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
          a1,
          v5);
    }
    else
    {
      Rtl::DuplicateUnicodeString(&v10, (const void **)P);
      if ( v10 )
      {
        *a3 = v10;
        v5 = 0;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Du,
            &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
            a1);
        v5 = -1073741670;
      }
    }
    v6 = P;
    P = 0LL;
    if ( v6 )
      ExFreePoolWithTag(v6, 0x7274534Bu);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
  return v5;
}
