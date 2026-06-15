/*
 * XREFs of ?ReadProcessingModeList@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@PEA_N@Z @ 0x180048BDC
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::ReadProcessingModeList(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CAudioSignalProcessingModeArray *a5,
        bool *a6)
{
  int v7; // eax
  __int64 v8; // rdi
  HRESULT v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *(_OWORD *)pvar = 0LL;
  v16 = 0LL;
  if ( a6 )
    *a6 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a2->lpVtbl->GetValue)(
         a2,
         a3,
         pvar) < 0 )
    goto LABEL_16;
  if ( LOWORD(pvar[0]) != 4127 )
    goto LABEL_16;
  v7 = (int)pvar[1];
  if ( !LODWORD(pvar[1]) )
    goto LABEL_16;
  if ( a6 )
    *a6 = 1;
  v8 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = CLSIDFromString(*(LPCOLESTR *)(v16 + 8 * v8), &pclsid);
      v10 = v9;
      if ( v9 < 0 )
        break;
      if ( a4 )
        goto LABEL_14;
      v11 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v11 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v11 )
      {
LABEL_14:
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a5) )
        {
          v10 = -2147024882;
          v13 = 2147942414LL;
          v14 = 1256LL;
          goto LABEL_20;
        }
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= LODWORD(pvar[1]) )
        goto LABEL_16;
    }
    v13 = (unsigned int)v9;
    v14 = 1252LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v13,
      (int)pvar[0]);
  }
  else
  {
LABEL_16:
    v10 = 0;
  }
  PropVariantClear(pvar);
  return v10;
}
