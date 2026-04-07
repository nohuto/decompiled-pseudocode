/*
 * XREFs of ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800478EC
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180047864 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x1800479BC (--0CDisplayDisconnectAnimatedVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayDisconnectAnimatedVisual::Create(struct CDisplayDisconnectAnimatedVisual **a1)
{
  CDisplayDisconnectAnimatedVisual *v2; // rax
  struct CDisplayDisconnectAnimatedVisual *v3; // rdi
  int v4; // ebx
  int v5; // r10d

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x11u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CDisplayDisconnectAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                             WPF::g_pProcessHeap,
                                             464LL);
  if ( v2 )
    v3 = CDisplayDisconnectAnimatedVisual::CDisplayDisconnectAnimatedVisual(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(struct CDisplayDisconnectAnimatedVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v4 = -2147024882;
    v5 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x11u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
