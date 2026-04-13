/*
 * XREFs of ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x1800B1A5C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800B07A0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180002C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x1800033A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800033A4.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *this,
        const char *a2)
{
  int *v4; // rax
  int v5; // ecx
  int *v6; // rdi
  const struct _tlgProvider_t *v7; // r9
  const struct _tlgProvider_t *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+C0h] [rbp-80h] BYREF
  int v12; // [rsp+C4h] [rbp-7Ch] BYREF
  int v13; // [rsp+C8h] [rbp-78h] BYREF
  int v14; // [rsp+CCh] [rbp-74h] BYREF
  int v15; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+100h] [rbp-40h] BYREF
  __int64 v22; // [rsp+108h] [rbp-38h] BYREF
  __int64 v23; // [rsp+110h] [rbp-30h] BYREF
  __int64 v24; // [rsp+118h] [rbp-28h] BYREF
  __int64 v25; // [rsp+120h] [rbp-20h] BYREF
  __int64 v26; // [rsp+128h] [rbp-18h] BYREF
  __int64 v27; // [rsp+130h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+160h] [rbp+20h] BYREF
  __int64 v29; // [rsp+170h] [rbp+30h] BYREF
  __int64 v30; // [rsp+178h] [rbp+38h] BYREF

  v4 = (int *)*((_QWORD *)this + 6);
  v5 = v4[19];
  if ( v5 >= 0 || v5 != v4[22] || (v6 = v4 + 20, v4 == (int *)-80LL) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v30 = (__int64)a2;
      LODWORD(SRWLock) = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      LODWORD(v29) = *(_DWORD *)(v9 + 76);
      v16 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v8,
        byte_180193EFA,
        (const GUID *)(v9 + 8),
        v10,
        (__int64)&v16,
        (__int64)&v29,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v30);
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
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v17 = (__int64)a2;
      v18 = *((_QWORD *)v6 + 6);
      LODWORD(SRWLock) = v6[17];
      LODWORD(v29) = v6[4];
      v19 = *((_QWORD *)v6 + 15);
      v20 = *((_QWORD *)v6 + 14);
      LODWORD(v30) = v6[26];
      v21 = *((_QWORD *)v6 + 12);
      v22 = *((_QWORD *)v6 + 11);
      v11 = v6[20];
      v23 = *((_QWORD *)v6 + 9);
      v12 = v6[8];
      v24 = *((_QWORD *)v6 + 3);
      v13 = *v6;
      v25 = *((_QWORD *)v6 + 16);
      v14 = v6[16];
      v26 = *((_QWORD *)v6 + 7);
      v15 = v6[2];
      v27 = 0x1000000LL;
      v16 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v7,
        (unsigned __int8 *)dword_18019390D,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        (__int64)v7,
        (__int64)&v16,
        (__int64)&v27,
        (__int64)&v15,
        (const unsigned __int16 **)&v26,
        (__int64)&v14,
        (const unsigned __int16 **)&v25,
        (__int64)&v13,
        (const WCHAR **)&v24,
        (__int64)&v12,
        (const unsigned __int16 **)&v23,
        (__int64)&v11,
        (const unsigned __int16 **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v30,
        (const unsigned __int16 **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v29,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v18,
        (const unsigned __int16 **)&v17);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *)((char *)this + 8));
}
