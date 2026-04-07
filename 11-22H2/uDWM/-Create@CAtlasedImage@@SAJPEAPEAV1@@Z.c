/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x18009F134
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B634 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x18000B300 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA2u);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xA2u);
  }
  return v2;
}
