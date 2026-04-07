/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800508C0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800509DC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  unsigned int v1; // r15d
  int v2; // esi
  __int64 i; // r14
  __int64 v5; // rbx
  unsigned int *v6; // r12
  char *v7; // rdi
  __int64 v8; // rbp
  int BitmapsFromAtlasImageStrip; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0LL; !*(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames); i += 8LL )
  {
LABEL_11:
    if ( (unsigned int)++v2 >= 6 )
      return v1;
  }
  v5 = 0LL;
  v6 = (unsigned int *)&unk_1801173A8;
  while ( 1 )
  {
    v7 = (unsigned int)(v2 - 4) <= 1
       ? (char *)&unk_1801173A0 + 8 * v5 + 4 * (unsigned int)v5 + 4
       : (char *)&unk_1801173A0 + 12 * v5;
    if ( *v7 )
      break;
LABEL_10:
    v5 = (unsigned int)(v5 + 1);
    v6 += 3;
    if ( (unsigned int)v5 >= 0xA )
      goto LABEL_11;
  }
  v8 = 0LL;
  while ( 1 )
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   (unsigned __int8)*v7,
                                   4u,
                                   0LL,
                                   *v6 + 200LL + 320 * v8 + *(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames));
    v1 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      break;
    v8 = (unsigned int)(v8 + 1);
    ++v7;
    if ( (unsigned int)v8 >= 4 )
      goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x249u);
  return v1;
}
