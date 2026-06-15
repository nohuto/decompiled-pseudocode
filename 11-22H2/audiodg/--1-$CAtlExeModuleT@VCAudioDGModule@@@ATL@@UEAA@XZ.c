/*
 * XREFs of ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x1400502E8
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$0 @ 0x1400272C3 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$0.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140027320 (--1CAudioDGModule@@UEAA@XZ.c)
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140027504 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140050E50 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x140052430 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::~CAtlExeModuleT<CAudioDGModule>(ATL::CAtlModule *this)
{
  ATL::CAtlComModule::ExecuteObjectMain(this, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  if ( *((_BYTE *)this + 98) )
    CoUninitialize();
  ATL::CAtlModule::Term(this);
}
