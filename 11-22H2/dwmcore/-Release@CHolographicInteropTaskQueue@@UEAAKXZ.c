/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x18012DE90
 * Callers:
 *     ?Release@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x18011DAE0 (-Release@CWARPDrawListEntry@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicInteropTaskQueue::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease(this);
}
