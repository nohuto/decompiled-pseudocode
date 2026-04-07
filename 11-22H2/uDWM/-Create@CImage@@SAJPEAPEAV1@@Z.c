/*
 * XREFs of ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180047020 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BF0 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800C00A0 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4D50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5680 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800CD240 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD520 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CD9A0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104960 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180047310 (-Initialize@CImage@@EEAAJXZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::Create(struct CImage **a1)
{
  CRenderDataVisual *v2; // rax
  CRenderDataVisual *v3; // rdi
  int v4; // ebx

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xCu, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              304LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x130uLL);
    CRenderDataVisual::CRenderDataVisual(v3);
    *((_QWORD *)v3 + 36) = 0LL;
    *(_QWORD *)v3 = &CImage::`vftable';
    v4 = CImage::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xCu, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
