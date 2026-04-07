/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18004C290
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18004C45C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  CAccentAcrylicBlurBehind *v2; // rax
  CAccentAcrylicBlurBehind *v3; // rbx
  CAccentAcrylicBlurBehind *v4; // rax
  struct CAccentAcrylicBlurBehind *v5; // rdi
  int v6; // ebx

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEDu);
    return (unsigned int)v6;
  }
  v2 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                                     WPF::g_pProcessHeap,
                                     384LL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0x180uLL);
  v4 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xEDu);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
