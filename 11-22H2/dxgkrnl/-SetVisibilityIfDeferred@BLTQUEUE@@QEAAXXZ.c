/*
 * XREFs of ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C03D4190
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C03D1B9C (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03D33E4 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0014FAC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

void __fastcall BLTQUEUE::SetVisibilityIfDeferred(BLTQUEUE *this)
{
  struct DXGADAPTER *Adapter; // rsi
  int v3; // eax
  __int64 v4; // rbx

  if ( _InterlockedExchange((volatile __int32 *)this + 240, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    v3 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
           *((ADAPTER_DISPLAY **)Adapter + 365),
           *((_DWORD *)this + 64),
           1u,
           0x4000,
           0);
    if ( v3 < 0 )
    {
      v4 = v3;
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 64), Adapter, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to enable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
        *((unsigned int *)this + 64),
        (__int64)Adapter,
        v4,
        0LL,
        0LL);
    }
  }
}
