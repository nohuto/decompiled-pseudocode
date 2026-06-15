/*
 * XREFs of ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BC54
 * Callers:
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18014BAA4 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x180143D1C (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x180143D84 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B9B8 (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v3; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // edx
  __int64 v5; // r14
  __int64 i; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  int v10; // eax
  char v12; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-21h]
  struct _GUID v14; // [rsp+40h] [rbp-19h] BYREF
  struct _GUID v15; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp+7h] BYREF
  char *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v13 = 0LL;
  v3 = *((_QWORD *)this + 1223);
  if ( *(_DWORD *)v3 > 4u
    && (*(_BYTE *)(v3 + 16) & 0x10) != 0
    && (*(_QWORD *)(v3 + 24) & 0x10LL) == *(_QWORD *)(v3 + 24) )
  {
    v12 = 0;
    v17 = &v12;
    v18 = 1;
    v19 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_18018F167, 0LL, 0LL, 3, (__int64)v16);
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v15, 0LL, 0LL);
  v14 = v15;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v15, 0, &v14, 0);
  v5 = *((_QWORD *)this + 29);
  for ( i = *((_QWORD *)this + 28); i != v5; i += 8LL )
  {
    v7 = *(_QWORD **)i;
    v8 = **(_QWORD **)i - *(_QWORD *)&v15.Data1;
    if ( !v8 )
      v8 = v7[1] - *(_QWORD *)v15.Data4;
    if ( !v8 )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
        (void ***)v7[2],
        (void ***)v7[3]);
      v7[3] = v7[2];
      v9 = *(_QWORD **)i;
      std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(
        *(void ***)(*(_QWORD *)i + 40LL),
        *(void ***)(*(_QWORD *)i + 48LL));
      v9[6] = v9[5];
    }
  }
  v10 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(this, v4);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16D2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
