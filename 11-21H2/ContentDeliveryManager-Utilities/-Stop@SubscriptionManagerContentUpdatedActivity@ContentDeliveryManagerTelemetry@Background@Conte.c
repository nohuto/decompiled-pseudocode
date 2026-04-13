/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180072A38
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444@Z @ 0x180002638 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002638.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v6; // rax
  int v7; // ecx
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // [rsp+C8h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+CCh] [rbp-7Ch] BYREF
  int v15; // [rsp+D0h] [rbp-78h] BYREF
  int v16; // [rsp+D4h] [rbp-74h] BYREF
  int v17; // [rsp+D8h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-68h] BYREF
  PSRWLOCK v19; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-58h] BYREF
  int v21; // [rsp+F8h] [rbp-50h] BYREF
  int v22; // [rsp+FCh] [rbp-4Ch] BYREF
  const WCHAR *v23; // [rsp+100h] [rbp-48h] BYREF
  __int64 v24; // [rsp+108h] [rbp-40h] BYREF
  __int64 v25; // [rsp+110h] [rbp-38h] BYREF
  __int64 v26; // [rsp+118h] [rbp-30h] BYREF
  __int64 v27; // [rsp+120h] [rbp-28h] BYREF
  __int64 v28; // [rsp+128h] [rbp-20h] BYREF
  __int64 v29; // [rsp+130h] [rbp-18h] BYREF
  __int64 v30; // [rsp+138h] [rbp-10h] BYREF
  __int64 v31; // [rsp+140h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+148h] [rbp+0h] BYREF
  PSRWLOCK *v33; // [rsp+168h] [rbp+20h]
  __int64 v34; // [rsp+170h] [rbp+28h]
  int *v35; // [rsp+178h] [rbp+30h]
  __int64 v36; // [rsp+180h] [rbp+38h]
  DWORD *p_CurrentThreadId; // [rsp+188h] [rbp+40h]
  __int64 v38; // [rsp+190h] [rbp+48h]
  int *v39; // [rsp+198h] [rbp+50h]
  __int64 v40; // [rsp+1A0h] [rbp+58h]
  int *v41; // [rsp+1A8h] [rbp+60h]
  __int64 v42; // [rsp+1B0h] [rbp+68h]
  int *v43; // [rsp+1B8h] [rbp+70h]
  __int64 v44; // [rsp+1C0h] [rbp+78h]
  PSRWLOCK *p_SRWLock; // [rsp+1C8h] [rbp+80h]
  __int64 v46; // [rsp+1D0h] [rbp+88h]

  v6 = (int *)*((_QWORD *)this + 6);
  v7 = v6[19];
  if ( v7 >= 0 || v7 != v6[22] || (v8 = v6 + 20, v6 == (int *)-80LL) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v19);
    **((_DWORD **)this + 6) = 2;
    if ( v19 )
      ReleaseSRWLockExclusive(v19);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v11 = (__int64)v10;
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
    {
      LODWORD(SRWLock) = 0;
      v17 = 0;
      v16 = a3;
      v15 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 6);
      v13 = *(_DWORD *)(v12 + 76);
      v19 = 0LL;
      p_SRWLock = &SRWLock;
      v46 = 4LL;
      v43 = &v17;
      v44 = 4LL;
      v41 = &v16;
      v42 = 4LL;
      v39 = &v15;
      v40 = 4LL;
      p_CurrentThreadId = &CurrentThreadId;
      v38 = 4LL;
      v35 = &v13;
      v36 = 4LL;
      v33 = &v19;
      v34 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        v11,
        (unsigned __int8 *)dword_1801913AE,
        (const GUID *)(v12 + 8),
        0LL,
        9u,
        &v32);
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
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v20 = 0LL;
      v21 = a3;
      v22 = a2;
      v23 = (const WCHAR *)*((_QWORD *)v8 + 15);
      v24 = *((_QWORD *)v8 + 14);
      v13 = v8[26];
      v25 = *((_QWORD *)v8 + 12);
      v26 = *((_QWORD *)v8 + 11);
      CurrentThreadId = v8[20];
      v27 = *((_QWORD *)v8 + 9);
      v15 = v8[8];
      v28 = *((_QWORD *)v8 + 3);
      v16 = *v8;
      v29 = *((_QWORD *)v8 + 16);
      v17 = v8[16];
      v30 = *((_QWORD *)v8 + 7);
      LODWORD(SRWLock) = v8[2];
      v31 = 0x1000000LL;
      v19 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180191648,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        (__int64)v9,
        (__int64)&v19,
        (__int64)&v31,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v30,
        (__int64)&v17,
        (const unsigned __int16 **)&v29,
        (__int64)&v16,
        (const WCHAR **)&v28,
        (__int64)&v15,
        (const unsigned __int16 **)&v27,
        (__int64)&CurrentThreadId,
        (const unsigned __int16 **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v13,
        (const unsigned __int16 **)&v24,
        &v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20 + 4,
        (__int64)&v20);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)((char *)this + 8));
}
