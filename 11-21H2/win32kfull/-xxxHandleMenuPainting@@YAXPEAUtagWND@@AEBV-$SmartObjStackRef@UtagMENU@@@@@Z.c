/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022F3B0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+30h] [rbp-78h]
  HDC v12[10]; // [rsp+40h] [rbp-68h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  memset(v12, 0, 0x48uLL);
  v4 = (__int64)a2[2];
  if ( !v4 )
    v4 = **a2;
  ThreadLock(v4, (__int64 *)&v10);
  xxxBeginPaint(a1, (__int64)v12);
  v5 = (__int64)a2[2];
  if ( !v5 )
    v5 = **a2;
  xxxMenuDraw(v12[0], v5, a1);
  xxxEndPaint(a1, v12);
  return ThreadUnlock1(v7, v6, v8);
}
