/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C006A698 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 DeviceObject_low; // r14
  CVisRgnTrackerProp *Prop; // rbx
  struct tagWND *i; // rbx
  int v6; // esi
  tagObjLock **v7; // rbx
  __int128 v8; // [rsp+48h] [rbp-28h] BYREF
  char v9; // [rsp+58h] [rbp-18h]
  char v10; // [rsp+60h] [rbp-10h]

  if ( a1 )
  {
    v1 = *((_QWORD *)a1 + 18);
    DeviceObject_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v8 = 0LL;
    v9 = 0;
    v10 = 0;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    {
      v10 = 1;
      if ( v1 == gObjDummyLock )
        v1 = 0LL;
      *(_QWORD *)&v8 = v1;
      v6 = 0;
      v7 = (tagObjLock **)&v8;
      do
      {
        if ( *v7 )
          tagObjLock::LockExclusive(*v7);
        ++v6;
        ++v7;
      }
      while ( !v6 );
      v9 = 1;
    }
    Prop = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), DeviceObject_low, 1LL);
    if ( v10 && v9 )
    {
      if ( (_QWORD)v8 )
        tagObjLock::UnLockExclusive((tagObjLock *)v8);
      v9 = 0;
    }
    if ( Prop )
      CVisRgnTrackerProp::MarkDirty(Prop);
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
