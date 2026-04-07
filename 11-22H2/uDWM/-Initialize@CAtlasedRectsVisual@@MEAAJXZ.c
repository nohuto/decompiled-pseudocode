/*
 * XREFs of ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180052F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180022770 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Initialize(CAtlasedRectsVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (__int64 *)this + 2);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x4Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1Fu, 0LL);
  }
  return v2;
}
