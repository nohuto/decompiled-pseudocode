/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001D210
 * Callers:
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180017E90 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180041034 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException()
{
  RaiseException(0xC000008C, 1u, 0, 0LL);
}
