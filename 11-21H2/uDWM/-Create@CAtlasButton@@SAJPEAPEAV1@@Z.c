/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x1800245E4
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800359F0 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180027094 (--0CAtlasedImage@@IEAA@XZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::Create(struct CAtlasButton **a1)
{
  CAtlasedImage *v2; // rax
  CAtlasedImage *v3; // rbx
  unsigned int v4; // ebx

  if ( a1 )
  {
    v2 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            152LL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0x98uLL);
      CAtlasedImage::CAtlasedImage(v3);
      *((_QWORD *)v3 + 16) = 0LL;
      *((_DWORD *)v3 + 35) = 0;
      *(_QWORD *)v3 = &CAtlasButton::`vftable';
      *((_DWORD *)v3 + 34) = 1;
      *((_BYTE *)v3 + 144) = 0;
      *a1 = v3;
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Du);
      *a1 = 0LL;
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Du);
  }
  return v4;
}
