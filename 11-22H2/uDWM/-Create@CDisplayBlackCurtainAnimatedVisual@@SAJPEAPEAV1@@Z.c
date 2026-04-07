/*
 * XREFs of ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BCEAC
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180047864 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800BDA18 (--0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::Create(struct CDisplayBlackCurtainAnimatedVisual **a1)
{
  int v2; // ebx
  CDisplayBlackCurtainAnimatedVisual *v3; // rax
  struct CDisplayBlackCurtainAnimatedVisual *v4; // rdi
  int v5; // r10d

  if ( a1 )
  {
    v3 = (CDisplayBlackCurtainAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                 WPF::g_pProcessHeap,
                                                 456LL);
    if ( v3 )
      v4 = CDisplayBlackCurtainAnimatedVisual::CDisplayBlackCurtainAnimatedVisual(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(struct CDisplayBlackCurtainAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x12u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x12u);
  }
  return (unsigned int)v2;
}
