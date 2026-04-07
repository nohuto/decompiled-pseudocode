/*
 * XREFs of ?Initialize@CButton@@MEAAJXZ @ 0x1800359F0
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800364B4 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18001FE00 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x1800245E4 (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180034CA0 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180036480 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CButton::Initialize(CButton *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct CAtlasedImage **v5; // rsi
  int v6; // eax
  int inserted; // eax
  int v8; // eax
  CAtlasedImage *v9; // rcx
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = CAtlasedRectsVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2Cu);
  }
  else
  {
    v4 = CAtlasButton::Create((struct CAtlasButton **)this + 37);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2Eu);
    }
    else
    {
      v5 = (struct CAtlasedImage **)((char *)this + 304);
      v6 = CAtlasButton::Create((struct CAtlasButton **)this + 38);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x2Fu);
      }
      else
      {
        inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v5, *((_DWORD *)this + 68));
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x33u);
        }
        else
        {
          v8 = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                 this,
                 *((struct CAtlasedImage **)this + 37),
                 *((_DWORD *)this + 68));
          v3 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x34u);
          }
          else
          {
            v9 = *v5;
            v11 = 0LL;
            CAtlasedImage::SetInsetFromParent(v9, &v11);
          }
        }
      }
    }
  }
  return v3;
}
