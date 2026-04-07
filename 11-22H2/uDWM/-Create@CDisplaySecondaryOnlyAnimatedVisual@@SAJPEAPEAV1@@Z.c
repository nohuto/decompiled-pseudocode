/*
 * XREFs of ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD554
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180047864 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800BDDE8 (--0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::Create(struct CDisplaySecondaryOnlyAnimatedVisual **a1)
{
  int v2; // ebx
  CDisplaySecondaryOnlyAnimatedVisual *v3; // rax
  struct CDisplaySecondaryOnlyAnimatedVisual *v4; // rdi
  int v5; // r10d

  if ( a1 )
  {
    v3 = (CDisplaySecondaryOnlyAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                  WPF::g_pProcessHeap,
                                                  464LL);
    if ( v3 )
      v4 = CDisplaySecondaryOnlyAnimatedVisual::CDisplaySecondaryOnlyAnimatedVisual(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(struct CDisplaySecondaryOnlyAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = v2;
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v2 = -2147024882;
      v5 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x13u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x13u);
  }
  return (unsigned int)v2;
}
