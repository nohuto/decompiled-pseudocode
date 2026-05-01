/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_ @ 0x180021370
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180023F24 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a1 + 12));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x170uLL);
  return a1;
}
