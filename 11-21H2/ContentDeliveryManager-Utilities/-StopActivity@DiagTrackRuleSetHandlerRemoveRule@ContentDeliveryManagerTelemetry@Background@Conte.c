/*
 * XREFs of ?StopActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x1800B2250
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180002174 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002174.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000249C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this)
{
  int *v2; // rax
  int v3; // ecx
  int *v4; // rdi
  const struct _tlgProvider_t *v5; // r9
  const struct _tlgProvider_t *v6; // rdi
  __int64 v7; // r8
  int v8; // [rsp+C0h] [rbp-80h] BYREF
  int v9; // [rsp+C4h] [rbp-7Ch] BYREF
  int v10; // [rsp+C8h] [rbp-78h] BYREF
  int v11; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v18; // [rsp+100h] [rbp-40h] BYREF
  __int64 v19; // [rsp+108h] [rbp-38h] BYREF
  __int64 v20; // [rsp+110h] [rbp-30h] BYREF
  __int64 v21; // [rsp+118h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+120h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+150h] [rbp+10h] BYREF
  __int64 v24; // [rsp+158h] [rbp+18h] BYREF
  __int64 v25; // [rsp+160h] [rbp+20h] BYREF
  __int64 v26; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 >= 0 || v3 != v2[22] || (v4 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      LODWORD(SRWLock) = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      LODWORD(v24) = *(_DWORD *)(v7 + 76);
      v25 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        byte_1801938AB,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&SRWLock);
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
    v5 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
    {
      v12 = *((_QWORD *)v4 + 6);
      LODWORD(SRWLock) = v4[17];
      LODWORD(v24) = v4[4];
      v13 = *((_QWORD *)v4 + 15);
      v14 = *((_QWORD *)v4 + 14);
      LODWORD(v25) = v4[26];
      v15 = *((_QWORD *)v4 + 12);
      v16 = *((_QWORD *)v4 + 11);
      LODWORD(v26) = v4[20];
      v17 = *((_QWORD *)v4 + 9);
      v8 = v4[8];
      v18 = *((_QWORD *)v4 + 3);
      v9 = *v4;
      v19 = *((_QWORD *)v4 + 16);
      v10 = v4[16];
      v20 = *((_QWORD *)v4 + 7);
      v11 = v4[2];
      v21 = 0x1000000LL;
      v22[0] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v5,
        (unsigned __int8 *)dword_180193D9E,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        (__int64)v5,
        (__int64)v22,
        (__int64)&v21,
        (__int64)&v11,
        (const unsigned __int16 **)&v20,
        (__int64)&v10,
        (const unsigned __int16 **)&v19,
        (__int64)&v9,
        (const WCHAR **)&v18,
        (__int64)&v8,
        (const unsigned __int16 **)&v17,
        (__int64)&v26,
        (const unsigned __int16 **)&v16,
        (const WCHAR **)&v15,
        (__int64)&v25,
        (const unsigned __int16 **)&v14,
        (const WCHAR **)&v13,
        (__int64)&v24,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v12);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)((char *)this + 8));
}
