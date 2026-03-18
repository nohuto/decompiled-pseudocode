/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180290A6C
 * Callers:
 *     ?Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18010A0D0 (-Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 * Callees:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18001C148 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x18001C21C (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180111C8E (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  CLegacySwapChain *v5; // r14
  char v8; // bp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v5 = (CLegacySwapChain *)(a1 - 424);
  v8 = (a3 & 2) != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(a1 - 424), v8);
  v9 = CD3DDevice::Present(*(CD3DDevice **)(a1 - 360), *(struct IDXGISwapChainDWM1 **)(a1 - 352));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x88u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v10, &EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent(v5, v8, v11 == 142213121);
  }
  return v11;
}
