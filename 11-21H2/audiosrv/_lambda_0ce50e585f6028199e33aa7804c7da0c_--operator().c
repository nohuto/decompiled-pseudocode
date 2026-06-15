/*
 * XREFs of _lambda_0ce50e585f6028199e33aa7804c7da0c_::operator() @ 0x1800684B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0ce50e585f6028199e33aa7804c7da0c__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18006A320 (std--_Func_impl_no_alloc__lambda_0ce50e585f6028199e33aa7804c7da0c__long_SystemEffec_ea_18006A320.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180048610 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0ce50e585f6028199e33aa7804c7da0c_::operator()(
        __int64 a1,
        unsigned int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                   *(CEndpointCharacteristics **)a1,
                   0LL,
                   0LL,
                   a2[12],
                   (struct tWAVEFORMATEX **)&pv);
  v7 = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
  {
    v10 = *(_WORD *)pv != 0xFFFE || !IsCompressedSpatialFormat((const struct tWAVEFORMATEX *)pv);
    v11 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                       (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                       *(int *)(a1 + 24));
    v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v11,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                     (SystemEffectDescriptor *)a2,
                     a3,
                     1u,
                     a1 + 8,
                     v10,
                     v12 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_DWORD *)a3 + 4) = 2;
      v7 = 0;
      goto LABEL_11;
    }
    v9 = 1626LL;
  }
  else
  {
    v9 = 1620LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat,
    v14);
LABEL_11:
  CoTaskMemFree(v8);
  return v7;
}
