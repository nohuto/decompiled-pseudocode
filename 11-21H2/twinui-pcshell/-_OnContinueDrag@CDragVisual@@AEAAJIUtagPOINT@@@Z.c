/*
 * XREFs of ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180534AF8
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180534FAC (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x18053531C (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x180530F80 (--$As@UITabletModeInputCallback@@@-$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180531D94 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CDragVisual::_OnContinueDrag(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  __int64 **v5; // rax
  int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v9; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  v8 = 0LL;
  v5 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v10);
  v6 = Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17,
         *v5);
  if ( v6 >= 0 )
  {
    Geometry::CPoint::ClientToScreen(&v10, *((HWND *)this + 19), (LONG *)&v9);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v8 + 32LL))(v8, a2, &v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return (unsigned int)v6;
}
