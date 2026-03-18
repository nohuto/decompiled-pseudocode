/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@VIDDASwapChain@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180279820
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180108130 (-QueryInterface@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180108190 (-QueryInterface@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A9D0 (-QueryInterface@-$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010D5D0 (-QueryInterface@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDDASwapChain>::QueryInterface(__int64 a1, _QWORD *a2, __int64 *a3)
{
  return CMILCOMBaseT<IDDASwapChain>::InternalQueryInterface((_QWORD *)(a1 - 32), a2, a3);
}
