/*
 * XREFs of ?OpenSharedVisualFromTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisualTargetPartner@345@PEAPEAUIVisual@345@@Z @ 0x180128C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PEAPEAX@Z @ 0x180128398 (-GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OpenSharedVisualFromTarget(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IVisual **a3)
{
  int SharedHandleFromIUnknown_NoLock; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edx
  HANDLE hObject; // [rsp+40h] [rbp+18h] BYREF

  hObject = 0LL;
  *a3 = 0LL;
  SharedHandleFromIUnknown_NoLock = Windows::UI::Composition::CompositorCommon::GetSharedHandleFromIUnknown_NoLock(
                                      a2,
                                      &hObject);
  v6 = SharedHandleFromIUnknown_NoLock;
  if ( SharedHandleFromIUnknown_NoLock < 0 )
  {
    v7 = 7529;
  }
  else
  {
    SharedHandleFromIUnknown_NoLock = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositorCommon::Partner *, HANDLE, struct Windows::UI::Composition::IVisual **))(*(_QWORD *)this + 88LL))(
                                        this,
                                        hObject,
                                        a3);
    v6 = SharedHandleFromIUnknown_NoLock;
    if ( SharedHandleFromIUnknown_NoLock >= 0 )
      goto LABEL_6;
    v7 = 7530;
  }
  DoStackCaptureDirect(SharedHandleFromIUnknown_NoLock, v7);
LABEL_6:
  if ( hObject )
    CloseHandle(hObject);
  return v6;
}
