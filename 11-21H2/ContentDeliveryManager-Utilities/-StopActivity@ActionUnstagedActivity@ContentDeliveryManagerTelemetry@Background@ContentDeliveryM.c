/*
 * XREFs of ?StopActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180083160
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180001EAC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000249C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // [rsp+A0h] [rbp-19h] BYREF
  int v10; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v11; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v13; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v20[4]; // [rsp+F0h] [rbp+37h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+67h] BYREF
  __int64 v22; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+130h] [rbp+77h] BYREF
  __int64 v24; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v2 + 88) || (v4 = v2 + 80, v2 == -80) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    **((_DWORD **)this + 6) = 2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v7 = (__int64)v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      LODWORD(SRWLock) = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      LODWORD(v22) = *(_DWORD *)(v8 + 76);
      v23 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_1801926FF,
        (const GUID *)(v8 + 8),
        0LL,
        (__int64)&v23,
        (__int64)&v22,
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
    if ( *(_DWORD *)v5 > 5u
      && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v11 = *(_QWORD *)(v4 + 120);
      v12 = *(_QWORD *)(v4 + 112);
      LODWORD(SRWLock) = *(_DWORD *)(v4 + 104);
      v13 = *(_QWORD *)(v4 + 96);
      v14 = *(_QWORD *)(v4 + 88);
      LODWORD(v22) = *(_DWORD *)(v4 + 80);
      v15 = *(_QWORD *)(v4 + 72);
      LODWORD(v23) = *(_DWORD *)(v4 + 32);
      v16 = *(_QWORD *)(v4 + 24);
      LODWORD(v24) = *(_DWORD *)v4;
      v17 = *(_QWORD *)(v4 + 128);
      v9 = *(_DWORD *)(v4 + 64);
      v18 = *(_QWORD *)(v4 + 56);
      v10 = *(_DWORD *)(v4 + 8);
      v19 = 0x1000000LL;
      v20[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        (__int64)v5,
        (unsigned __int8 *)dword_180192131,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        (__int64)v5,
        (__int64)v20,
        (__int64)&v19,
        (__int64)&v10,
        (const unsigned __int16 **)&v18,
        (__int64)&v9,
        (const unsigned __int16 **)&v17,
        (__int64)&v24,
        (const WCHAR **)&v16,
        (__int64)&v23,
        (const unsigned __int16 **)&v15,
        (__int64)&v22,
        (const unsigned __int16 **)&v14,
        (const WCHAR **)&v13,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v12,
        (const WCHAR **)&v11);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *)((char *)this + 8));
}
