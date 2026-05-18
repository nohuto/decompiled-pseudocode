/*
 * XREFs of DwmpNotifyUserLogoff @ 0x180008690
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180007C9C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800090AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180009368 (DwmpRequestUnloadUserRegKeys.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestUnloadUserRegKeys();
    v0 = v1;
    if ( v1 < 0 )
      DoStackCaptureDirect(v1, 0x68Au);
  }
  TraceLoggingWriteEtw(8, v0, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
