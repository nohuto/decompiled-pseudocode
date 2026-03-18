/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18029FD60
 * Callers:
 *     ?Present@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180120850 (-Present@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800FC9F0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18010A9CC (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DB80 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(CD3DDevice **this, __int64 a2, char a3)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi

  if ( (a3 & 2) != 0 )
  {
    v4 = 1;
  }
  else
  {
    (*((void (__fastcall **)(CD3DDevice **))*this + 3))(this);
    v4 = 0;
  }
  v5 = CD3DDevice::Present(this[10], this[28]);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x88u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v6, (__int64)&EVTDESC_ETWGUID_PRESENT);
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, v4, v7 == 142213121);
  }
  return v7;
}
