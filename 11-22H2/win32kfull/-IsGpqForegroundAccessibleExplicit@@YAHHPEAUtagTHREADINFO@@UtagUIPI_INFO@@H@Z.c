/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00A6F88
 * Callers:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C000A838 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckCursorClipAccess @ 0x1C005D510 (CheckCursorClipAccess.c)
 *     EditionKeyEventLLHook @ 0x1C00718F0 (EditionKeyEventLLHook.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C00A6F60 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C00B4670 (EditionHandleAltTabCancel.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A8AB8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00A6FF0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, const struct tagTHREADINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  if ( !a1
    || !gpqForeground
    || a4
    || (unsigned int)IsForegroundShellFrameQueueAccessible(a2)
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 432LL) )
  {
    return 1;
  }
  return v4;
}
