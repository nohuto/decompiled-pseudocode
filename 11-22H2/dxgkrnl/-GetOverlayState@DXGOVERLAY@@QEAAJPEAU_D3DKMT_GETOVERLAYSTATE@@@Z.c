/*
 * XREFs of ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C0334D1C
 * Callers:
 *     DxgkGetOverlayState @ 0x1C0336BB0 (DxgkGetOverlayState.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGOVERLAY::GetOverlayState(DXGOVERLAY *this, struct _D3DKMT_GETOVERLAYSTATE *a2)
{
  __int64 (__fastcall **v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 522LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      522LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v4[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 523LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 523LL, 0LL, 0LL, 0LL, 0LL);
  }
  a2->OverlayEnabled = *((_DWORD *)this + 8) != -1;
  return 0LL;
}
