/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x1800E5244
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x1800CA010 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 *     ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800E52A0 (--_ECTimelineBase@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x1801066B0 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::~CTimelineBase(CTimelineBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTimelineBase::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
