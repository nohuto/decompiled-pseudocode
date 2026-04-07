/*
 * XREFs of ?Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z @ 0x1800418B4
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180040320 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?CloneVisualTree@CDCompositionInteropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B39C0 (-CloneVisualTree@CDCompositionInteropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CDCompositionInteropVisual@@IEAA@XZ @ 0x180041994 (--0CDCompositionInteropVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompositionInteropVisual::Create(struct CDCompositionInteropVisual **a1)
{
  CDCompositionInteropVisual *v2; // rax
  CDCompositionInteropVisual *v3; // rbx
  CDCompositionInteropVisual *v4; // rax
  struct CDCompositionInteropVisual *v5; // rdi
  int v6; // ebx

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 7u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CDCompositionInteropVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                       WPF::g_pProcessHeap,
                                       280LL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0x118uLL);
  v4 = CDCompositionInteropVisual::CDCompositionInteropVisual(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(CDCompositionInteropVisual *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 7u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
