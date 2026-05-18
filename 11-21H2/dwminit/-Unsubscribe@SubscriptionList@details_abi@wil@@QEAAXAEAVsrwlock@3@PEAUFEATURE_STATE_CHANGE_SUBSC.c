/*
 * XREFs of ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D570
 * Callers:
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D640 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D810 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_CRITICAL_SECTION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_CRITICAL_SECTION@@@ZAEAPEAU1@@Z @ 0x180009990 (--$invoke@P6AXPEAU_RTL_CRITICAL_SECTION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_CRITICAL_SECTIO.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x1800099B0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::Unsubscribe(
        struct _RTL_CRITICAL_SECTION *this,
        RTL_SRWLOCK *a2,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall *v8)(_QWORD); // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    EnterCriticalSection(this);
    AcquireSRWLockExclusive(a2);
    DebugInfo = this[1].DebugInfo;
    if ( (unsigned __int64)a3 - 1 < (*(_QWORD *)&this[1].LockCount - (_QWORD)DebugInfo) >> 4 )
      *((_OWORD *)&DebugInfo->Type + (unsigned __int64)a3 - 1) = 0LL;
    if ( a2 )
    {
      v8 = (__int64 (__fastcall *)(_QWORD))ReleaseSRWLockExclusive;
      v7 = (struct _RTL_CRITICAL_SECTION *)a2;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v8, &v7);
    }
    if ( this )
    {
      v8 = (__int64 (__fastcall *)(_QWORD))LeaveCriticalSection;
      v7 = this;
      wistd::invoke<void (*)(_RTL_CRITICAL_SECTION *),_RTL_CRITICAL_SECTION * &>(&v8, &v7);
    }
  }
}
