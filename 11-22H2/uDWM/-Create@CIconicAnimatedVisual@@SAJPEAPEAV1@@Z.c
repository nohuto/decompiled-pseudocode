/*
 * XREFs of ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800EA720
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800EBAF8 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C228C (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::Create(struct CIconicAnimatedVisual **a1)
{
  int v2; // ebx
  CIconicAnimatedVisual *v3; // rax
  CIconicAnimatedVisual *v4; // rax
  struct CIconicAnimatedVisual *v5; // rdi

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x19u);
    return (unsigned int)v2;
  }
  v3 = (CIconicAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  400LL);
  if ( v3 )
  {
    v4 = CIconicAnimatedVisual::CIconicAnimatedVisual(v3);
    v5 = v4;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(CIconicAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x19u);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v2;
}
