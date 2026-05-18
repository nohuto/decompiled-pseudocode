/*
 * XREFs of ??1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x180031F1C
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     _Spectre::dtor$32::Engine::Engine_::_1_::dtor$32 @ 0x1800E5739 (_Spectre--dtor$32--Engine--Engine_--_1_--dtor$32.c)
 *     _Spectre::dtor$29::Engine::_Engine_::_1_::dtor$29 @ 0x1800E5A3C (_Spectre--dtor$29--Engine--_Engine_--_1_--dtor$29.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18003189C (--1-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_IN.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLogger::GpuProfileData::~GpuProfileData(void **this)
{
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>(this + 2);
  std::_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>>,0>>(this);
}
