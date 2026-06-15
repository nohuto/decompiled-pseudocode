/*
 * XREFs of ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x180031B7C
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EffectPack::GetFilteredProcessingModesForStreaming(
        __int64 a1,
        int a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0;
  v7 = *(_QWORD *)(a1 + 1272);
  v8 = 32 * (a3 + 3LL * a2);
  v9 = *(_DWORD *)(v8 + v7 + 1328);
  v10 = *(_QWORD *)(v8 + v7 + 1336);
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    if ( a4 )
      goto LABEL_13;
    v12 = *(_QWORD *)(v10 + 16LL * v5) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(v10 + 16LL * v5 + 8) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v12 )
    {
LABEL_13:
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            a5,
                            (_OWORD *)(v10 + 16LL * v5)) )
        break;
    }
    if ( ++v5 >= v9 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x494,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL,
    v13);
  return 2147942414LL;
}
