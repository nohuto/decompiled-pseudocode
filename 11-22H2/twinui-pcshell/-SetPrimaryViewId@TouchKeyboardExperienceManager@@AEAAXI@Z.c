/*
 * XREFs of ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1802DC620
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TouchKeyboardExperienceManager::SetPrimaryViewId(TouchKeyboardExperienceManager *this, unsigned int a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 16LL) )
  {
    v8 = 0x1000000LL;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      byte_18085D2D6,
      0LL,
      v6,
      (__int64)&v9,
      (__int64)&v8);
  }
  v7 = *((_QWORD *)this + 73);
  *((_DWORD *)this + 153) = a2;
  if ( *(_DWORD *)(v7 + 480) != a2 )
  {
    *(_DWORD *)(v7 + 480) = a2;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 128) + 304LL))(*(_QWORD *)(v7 + 128), a2);
  }
}
