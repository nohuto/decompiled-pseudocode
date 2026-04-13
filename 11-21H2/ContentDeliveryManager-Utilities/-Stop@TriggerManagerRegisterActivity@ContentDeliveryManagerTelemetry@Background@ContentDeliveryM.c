/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x1800A2138
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x1800A01AC (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x18000302C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000302C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@D@@@Z @ 0x180003700 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const char *a3)
{
  int v4; // r14d
  int *v6; // rax
  int v7; // ecx
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // r9
  const struct _tlgProvider_t *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+D0h] [rbp-80h] BYREF
  int v14; // [rsp+D4h] [rbp-7Ch] BYREF
  int v15; // [rsp+D8h] [rbp-78h] BYREF
  int v16; // [rsp+DCh] [rbp-74h] BYREF
  int v17; // [rsp+E0h] [rbp-70h] BYREF
  int v18; // [rsp+E4h] [rbp-6Ch] BYREF
  int v19; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+100h] [rbp-50h] BYREF
  __int64 v23; // [rsp+108h] [rbp-48h] BYREF
  __int64 v24; // [rsp+110h] [rbp-40h] BYREF
  __int64 v25; // [rsp+118h] [rbp-38h] BYREF
  __int64 v26; // [rsp+120h] [rbp-30h] BYREF
  __int64 v27; // [rsp+128h] [rbp-28h] BYREF
  __int64 v28; // [rsp+130h] [rbp-20h] BYREF
  __int64 v29; // [rsp+138h] [rbp-18h] BYREF
  __int64 v30; // [rsp+140h] [rbp-10h] BYREF
  __int64 v31; // [rsp+148h] [rbp-8h] BYREF
  PSRWLOCK SRWLock; // [rsp+170h] [rbp+20h] BYREF
  __int64 v33; // [rsp+188h] [rbp+38h] BYREF

  v4 = a2;
  v6 = (int *)*((_QWORD *)this + 6);
  v7 = v6[19];
  if ( v7 >= 0 || v7 != v6[22] || (v8 = v6 + 20, v6 == (int *)-80LL) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v21 = (__int64)a3;
      LODWORD(SRWLock) = v4;
      LODWORD(v33) = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      v13 = *(_DWORD *)(v11 + 76);
      v20 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        byte_1801933A2,
        (const GUID *)(v11 + 8),
        v12,
        (__int64)&v20,
        (__int64)&v13,
        (__int64)&v33,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v21);
    }
  }
  else
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v22 = (__int64)a3;
      LODWORD(SRWLock) = v4;
      v23 = *((_QWORD *)v8 + 6);
      LODWORD(v33) = v8[17];
      v14 = v8[4];
      v24 = *((_QWORD *)v8 + 15);
      v25 = *((_QWORD *)v8 + 14);
      v15 = v8[26];
      v26 = *((_QWORD *)v8 + 12);
      v27 = *((_QWORD *)v8 + 11);
      v16 = v8[20];
      v28 = *((_QWORD *)v8 + 9);
      v17 = v8[8];
      v29 = *((_QWORD *)v8 + 3);
      v18 = *v8;
      v30 = *((_QWORD *)v8 + 16);
      v19 = v8[16];
      v31 = *((_QWORD *)v8 + 7);
      v13 = v8[2];
      v20 = 0x1000000LL;
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180192A5C,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        (__int64)v9,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v13,
        (const unsigned __int16 **)&v31,
        (__int64)&v19,
        (const unsigned __int16 **)&v30,
        (__int64)&v18,
        (const WCHAR **)&v29,
        (__int64)&v17,
        (const unsigned __int16 **)&v28,
        (__int64)&v16,
        (const unsigned __int16 **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v15,
        (const unsigned __int16 **)&v25,
        (const WCHAR **)&v24,
        (__int64)&v14,
        (__int64)&v33,
        (const unsigned __int16 **)&v23,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)((char *)this + 8));
}
