/*
 * XREFs of ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800971B8
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::Create(struct CAccentBlurBehind **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                384LL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x180uLL);
      CRenderDataVisual::CRenderDataVisual(v4);
      *(_QWORD *)v4 = &CAccentBlurBehind::`vftable';
      *((_QWORD *)v4 + 37) = 0LL;
      *((_QWORD *)v4 + 38) = 0LL;
      *((_DWORD *)v4 + 78) = 0;
      *((_DWORD *)v4 + 79) = 0;
      *((_DWORD *)v4 + 80) = 0;
      *((_DWORD *)v4 + 82) = 1056964608;
      v2 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CAccentBlurBehind::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x40u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x40u);
  }
  return (unsigned int)v2;
}
