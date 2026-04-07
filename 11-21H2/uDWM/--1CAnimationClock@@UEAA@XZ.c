/*
 * XREFs of ??1CAnimationClock@@UEAA@XZ @ 0x1800A1A0C
 * Callers:
 *     ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x1800A1B60 (--_GCAnimationClock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x1800E3C44 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 */

void __fastcall CAnimationClock::~CAnimationClock(CAnimationClock *this)
{
  CTimer *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  v2 = (CTimer *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CTimer::SetTimerCallback(v2, 0LL);
    v3 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
