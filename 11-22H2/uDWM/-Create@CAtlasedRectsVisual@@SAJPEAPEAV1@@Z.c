/*
 * XREFs of ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180012B6C
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012AF0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180012C3C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Create(struct CAtlasedRectsVisual **a1)
{
  CAtlasedRectsVisual *v2; // rax
  CAtlasedRectsVisual *v3; // rax
  struct CAtlasedRectsVisual *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Eu, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                288LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_9;
  }
  v3 = CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_9:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3Eu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
