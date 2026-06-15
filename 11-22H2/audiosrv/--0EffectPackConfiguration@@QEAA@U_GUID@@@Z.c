/*
 * XREFs of ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180025550
 * Callers:
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18002598C (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ??$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA?AV?$shared_ptr@UEffectPackConfiguration@@@0@AEAU_GUID@@@Z @ 0x18015448C (--$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA-AV-$shared_ptr@UEffectPackConfigura.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006709C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

// Hidden C++ exception states: #wind=6
EffectPackConfiguration *__fastcall EffectPackConfiguration::EffectPackConfiguration(
        EffectPackConfiguration *this,
        struct _GUID *a2)
{
  memset_0(this, 0, 0x520uLL);
  `eh vector constructor iterator'(
    (char *)this + 1312,
    0x20uLL,
    0xCuLL,
    (void (*)(void *))EffectPackConfiguration::ApoRegistrationInfo::ApoRegistrationInfo,
    (void (*)(void *))EffectPackConfiguration::ApoRegistrationInfo::~ApoRegistrationInfo);
  *((_DWORD *)this + 424) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_DWORD *)this + 428) = 0;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_WORD *)this + 896) = 0;
  *((_BYTE *)this + 1794) = 0;
  *(_WORD *)((char *)this + 1795) = 0;
  `eh vector constructor iterator'(
    (char *)this + 1800,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 233) = 4LL;
  *((_QWORD *)this + 234) = (char *)this + 1800;
  if ( this == (EffectPackConfiguration *)-1800LL )
  {
    _o_terminate();
    JUMPOUT(0x180091E8FLL);
  }
  *(struct _GUID *)this = *a2;
  return this;
}
