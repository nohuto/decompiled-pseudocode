/*
 * XREFs of ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800D2440
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800D1B80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180100724 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayManager::Initialize(CDisplayManager *this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = CDisplayManager::UpdateDXGIFactory(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0x1Cu, 0LL);
  return v3;
}
