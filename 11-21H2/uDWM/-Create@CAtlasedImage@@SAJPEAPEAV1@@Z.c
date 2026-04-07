/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800972F0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180068896 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180027094 (--0CAtlasedImage@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct CAtlasedImage **a1)
{
  unsigned int v2; // ebx
  CAtlasedImage *v3; // rax
  struct CAtlasedImage *v4; // rax

  if ( a1 )
  {
    v3 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            128LL);
    if ( v3 && (v4 = CAtlasedImage::CAtlasedImage(v3)) != 0LL )
    {
      *a1 = v4;
      return 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA3u);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xA3u);
  }
  return v2;
}
