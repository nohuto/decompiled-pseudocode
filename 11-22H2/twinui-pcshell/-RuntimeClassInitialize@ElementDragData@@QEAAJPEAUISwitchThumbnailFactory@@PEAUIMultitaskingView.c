/*
 * XREFs of ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x18059033C
 * Callers:
 *     ??$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Details@WRL@Microsoft@@YAJPEAPEAVElementDragData@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Z @ 0x18058E86C (--$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingVi.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x180572A0C (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ??4?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@@@Z @ 0x180573C60 (--4-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@.c)
 */

__int64 __fastcall ElementDragData::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7)
{
  __int128 v10; // xmm1
  __int64 result; // rax

  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)(a1 + 16), a2);
  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::operator=((__int64 *)(a1 + 40), a3);
  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::operator=((__int64 *)(a1 + 32), a4);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 24), a5);
  *(_OWORD *)(a1 + 112) = *a6;
  *(_OWORD *)(a1 + 128) = a6[1];
  *(_OWORD *)(a1 + 144) = a6[2];
  v10 = a6[3];
  *(_DWORD *)(a1 + 176) = a7;
  result = 0LL;
  *(_OWORD *)(a1 + 160) = v10;
  return result;
}
