/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C01963A0
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C01964D8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01965F0 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  unsigned int i; // ecx
  __int64 v8; // rax
  DXGFASTMUTEX *v9; // [rsp+70h] [rbp-18h]
  char v10; // [rsp+78h] [rbp-10h]

  v3 = a2;
  v9 = (ADAPTER_DISPLAY *)((char *)this + 608);
  v10 = 0;
  if ( this == (ADAPTER_DISPLAY *)-608LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v9 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v9);
  v10 = 1;
  v6 = *((_QWORD *)this + 16) + 4000 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v6 + 8) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9271LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9271LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    (DISPLAY_SOURCE *)v6,
    0,
    a3,
    1u,
    0,
    (const struct tagRECT *)(v6 + 688),
    (const struct tagRECT *)(v6 + 688),
    (const struct tagRECT *)(v6 + 688),
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
    0,
    D3DDDIFMT_UNKNOWN,
    0);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)v6, 0);
  for ( i = 0; i < *(_DWORD *)(v6 + 3764); *(_BYTE *)(v8 + v6 + 2904) = 0 )
    v8 = i++;
  *(_DWORD *)(v6 + 3764) = 0;
  *(_BYTE *)(v6 + 3720) = 0;
  if ( v10 )
  {
    v10 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v9);
  }
}
