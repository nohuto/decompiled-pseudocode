/*
 * XREFs of ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800F8888
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003D168 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDisplayManager::Initialize(CDisplayManager *this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = CDisplayManager::UpdateDXGIFactory(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, updated, 0x1Cu);
  return v3;
}
