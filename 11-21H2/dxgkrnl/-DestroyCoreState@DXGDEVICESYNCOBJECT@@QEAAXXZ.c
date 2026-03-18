/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0186AFC
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0166608 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C030E1A0 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C03441C0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000C188 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v7; // r11
  struct ADAPTER_RENDER *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r9
  bool v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  DXGFASTMUTEX *v18; // [rsp+50h] [rbp-18h] BYREF
  char v19; // [rsp+58h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*(_BYTE *)(v2 + 209) )
  {
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 168)) )
    {
      WdLogSingleEntry1(1LL, 118LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
        118LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v18, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      if ( v19 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v18, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v18);
      v4 = *((_QWORD *)this + 2);
      v5 = *((_QWORD *)this + 4);
      v6 = *((_DWORD *)this + 18);
      v7 = *((_QWORD *)this + 3);
      v19 = 1;
      v8 = *(struct ADAPTER_RENDER **)(v4 + 16);
      v9 = *(_QWORD *)(v4 + 768);
      v10 = *((_QWORD *)v8 + 78);
      v11 = (v6 & 0x20) == 0;
      if ( (*(_DWORD *)(v5 + 204) & 4) != 0 )
        v12 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v5, v8) + 4);
      else
        v12 = *(_QWORD *)(v5 + 328);
      LOBYTE(v3) = v11;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(v10 + 8) + 672LL))(v12, v9, v3, v7);
      operator delete(*((void **)this + 3));
      *((_BYTE *)this + 92) &= ~1u;
      *((_QWORD *)this + 3) = 0LL;
      if ( v19 )
      {
        v19 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      v15 = *((_QWORD *)this + 2);
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 64LL);
      if ( v16 )
        v17 = *(_QWORD *)(v16 + 8);
      else
        v17 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v13 + 8) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(v15 + 16) + 656LL),
        v17,
        MonitoredFenceStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
