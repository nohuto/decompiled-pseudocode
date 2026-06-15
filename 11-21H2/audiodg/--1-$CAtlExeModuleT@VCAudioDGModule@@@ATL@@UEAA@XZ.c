/*
 * XREFs of ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x140050A58
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14002F174 (--1CAudioDGModule@@UEAA@XZ.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$0 @ 0x1400399A5 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$0.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002C2D4 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14002EF8C (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x140051720 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
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
