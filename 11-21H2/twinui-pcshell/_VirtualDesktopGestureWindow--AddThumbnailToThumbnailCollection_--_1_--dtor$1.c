/*
 * XREFs of _VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor$1 @ 0x18054FBF7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DF6D4 (--1-$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    return Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>::~ComPtr<IWindowManagementShowMoveSizeEvents>((__int64 *)(a2 + 104));
  }
  return result;
}
