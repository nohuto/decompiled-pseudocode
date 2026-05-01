/*
 * XREFs of ?OnUwpWindowUniversalPropertyChanged@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@3456@@Z @ 0x180402770
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d23c2fc33fa540a08aa4045337a4ab78___ @ 0x1803FEC3C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d23c2fc33fa540a08aa4045337a4ab78.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowUniversalPropertyChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d23c2fc33fa540a08aa4045337a4ab78___(
           v4,
           CurrentThreadId,
           &v6);
}
