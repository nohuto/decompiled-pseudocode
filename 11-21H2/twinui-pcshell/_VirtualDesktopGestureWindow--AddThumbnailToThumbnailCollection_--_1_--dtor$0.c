/*
 * XREFs of _VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor$0 @ 0x18054FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DF6D4 (--1-$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>::~ComPtr<IWindowManagementShowMoveSizeEvents>((__int64 *)(a2 + 32));
  }
  return result;
}
