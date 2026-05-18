/*
 * XREFs of ??1CpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x180031C30
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@EEAAXXZ @ 0x180038120 (-_Destroy@-$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Tidy@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800384EC (-_Tidy@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Engine@Spec.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::CpuProfiler::~CpuProfiler(Spectre::Engine::CpuProfiler *this)
{
  `eh vector destructor iterator'(
    (char *)this + 56,
    24LL,
    10LL,
    (void (*)(void *))std::vector<enum D3D_FEATURE_LEVEL>::~vector<enum D3D_FEATURE_LEVEL>);
  std::vector<Spectre::Engine::CpuProfiler::Marker>::_Tidy((char *)this + 32);
  Spectre::Utils::SharedMutex::~SharedMutex(this);
}
