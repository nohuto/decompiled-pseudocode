/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJXZ @ 0x180054790
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x1800546D0 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18005481C (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x1800548D8 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CLivePreviewTimeline *v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 70;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v6);
    return v3;
  }
  v4 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
  if ( v4 )
    v4 = CLivePreviewTimeline::CLivePreviewTimeline(v4);
  *((_QWORD *)this + 59) = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x49u);
    return v3;
  }
  v2 = CLivePreview::_EnsureResources(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 75;
    goto LABEL_10;
  }
  return v3;
}
