/*
 * XREFs of ??$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Details@WRL@Microsoft@@YAJPEAPEAVElementDragData@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Z @ 0x18058E86C
 * Callers:
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x18058F6DC (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ElementDragData@@QEAA@XZ @ 0x18058EFBC (--0ElementDragData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x18059033C (-RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingView.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ElementDragData,ElementDragData,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IUnknown * &,DragMetrics const &,enum DragEffects &>(
        ElementDragData **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  ElementDragData *v11; // rax
  int v12; // ebx
  ElementDragData *v13; // rsi
  ElementDragData *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (ElementDragData *)operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = ElementDragData::ElementDragData(v11);
    v15 = v13;
    v12 = ElementDragData::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, a6, *a7);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
