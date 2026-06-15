/*
 * XREFs of ??1EffectPack@@QEAA@XZ @ 0x180004E5C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VEffectPack@@@std@@EEAAXXZ @ 0x180006520 (-_Destroy@-$_Ref_count_obj2@VEffectPack@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x180004F70 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall EffectPack::~EffectPack(EffectPack *this)
{
  std::_Ref_count_base *v2; // rcx

  SystemEffectDescriptor::~SystemEffectDescriptor((EffectPack *)((char *)this + 1648));
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 1632);
  `eh vector destructor iterator'(
    (char *)this + 1552,
    0x10uLL,
    4uLL,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1440,
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1328,
    0x10uLL,
    4uLL,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 160);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  `eh vector destructor iterator'(
    (char *)this + 1224,
    8uLL,
    4uLL,
    std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>);
  `eh vector destructor iterator'(
    (char *)this + 768,
    0x60uLL,
    4uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 384,
    0x60uLL,
    4uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    this,
    0x60uLL,
    4uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
}
