/*
 * XREFs of ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800251E0
 * Callers:
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800257F0 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800254D0 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006709C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::EffectPack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8

  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)a1, eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 96), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 192), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 288), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 384), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 480), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 576), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 672), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 768), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 864), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 960), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1056), eKeywordDetectorConnector);
  *(_QWORD *)(a1 + 1152) = 4LL;
  *(_QWORD *)(a1 + 1160) = a1;
  if ( !a1
    || (*(_QWORD *)(a1 + 1168) = 4LL, *(_QWORD *)(a1 + 1176) = a1 + 384, a1 == -384)
    || (*(_QWORD *)(a1 + 1184) = 4LL, *(_QWORD *)(a1 + 1192) = a1 + 768, a1 == -768) )
  {
LABEL_15:
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x180091E81LL);
  }
  *(_OWORD *)(a1 + 1200) = 0LL;
  *(_DWORD *)(a1 + 1216) = 0;
  *(_DWORD *)(a1 + 1220) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 1224),
    8uLL,
    4uLL,
    ATL::CComHeapPtr<_GUID>::CComHeapPtr<_GUID>,
    (void (*)(void *))std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>);
  *(_QWORD *)(a1 + 1256) = 4LL;
  *(_QWORD *)(a1 + 1264) = a1 + 1224;
  if ( a1 == -1224 )
  {
    _o_terminate();
    goto LABEL_12;
  }
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1 + 1272, a4, v8);
  *(_QWORD *)(a1 + 1288) = a3;
  *(_QWORD *)(a1 + 1312) = 4LL;
  *(_QWORD *)(a1 + 1320) = a1 + 1296;
  if ( a1 == -1296 )
  {
LABEL_12:
    _o_terminate();
    goto LABEL_13;
  }
  `eh vector constructor iterator'(
    (void *)(a1 + 1328),
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *(_QWORD *)(a1 + 1392) = 4LL;
  *(_QWORD *)(a1 + 1400) = a1 + 1328;
  if ( a1 == -1328 )
    goto LABEL_14;
  *(_QWORD *)(a1 + 1424) = 4LL;
  *(_QWORD *)(a1 + 1432) = a1 + 1408;
  if ( a1 == -1408 )
    goto LABEL_14;
  `eh vector constructor iterator'(
    (void *)(a1 + 1440),
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  *(_QWORD *)(a1 + 1536) = 4LL;
  *(_QWORD *)(a1 + 1544) = a1 + 1440;
  if ( a1 == -1440
    || (`eh vector constructor iterator'(
          (void *)(a1 + 1552),
          0x10uLL,
          4uLL,
          (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
          (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>),
        *(_QWORD *)(a1 + 1616) = 4LL,
        *(_QWORD *)(a1 + 1624) = a1 + 1552,
        a1 == -1552) )
  {
LABEL_13:
    _o_terminate();
LABEL_14:
    _o_terminate();
    goto LABEL_15;
  }
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_DWORD *)(a1 + 1640) = 0;
  *(_DWORD *)(a1 + 1644) = 0;
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1648), eHostProcessConnector);
  *(_DWORD *)(a1 + 1744) = 100;
  *(_QWORD *)(a1 + 1752) = a2;
  *(_WORD *)(a1 + 1760) = 0;
  return a1;
}
