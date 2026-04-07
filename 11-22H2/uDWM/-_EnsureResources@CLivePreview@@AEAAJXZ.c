/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18004A924
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A7E0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x180056AE4 (--$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(struct CVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = CCompositor::CreateProxy<CDoubleResourceProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         this + 56);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x605u, 0LL);
  }
  else
  {
    v4 = CCompositor::CreateProxy<CDoubleResourceProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           this + 57);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x606u, 0LL);
    }
    else
    {
      v5 = CVisual::Create(this + 58);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x608u, 0LL);
      }
      else
      {
        v6 = CVisual::Create(this + 59);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x609u, 0LL);
        }
        else
        {
          v7 = CVisual::Create(this + 60);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x60Au, 0LL);
          }
          else
          {
            v8 = CRenderDataVisual::Create(this + 61);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x60Bu, 0LL);
          }
        }
      }
    }
  }
  return v3;
}
