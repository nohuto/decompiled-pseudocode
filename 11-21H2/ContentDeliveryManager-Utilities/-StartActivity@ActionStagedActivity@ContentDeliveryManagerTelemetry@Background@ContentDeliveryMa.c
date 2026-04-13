/*
 * XREFs of ?StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x1800821E0
 * Callers:
 *     _lambda_0d276c7ea3d710d19b822c1822ed0068_::operator() @ 0x18007E7F8 (_lambda_0d276c7ea3d710d19b822c1822ed0068_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180002D0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180065A6C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800744CC (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const struct _tlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v12 = (__int64)a4;
    v13 = (__int64)a3;
    v14 = (__int64)a2;
    CurrentThreadId = GetCurrentThreadId();
    v10 = *((_QWORD *)this + 6);
    LODWORD(v16) = CurrentThreadId;
    v15 = 0x1000000LL;
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      (unsigned __int8 *)dword_180192068,
      (const GUID *)(v10 + 8),
      v11,
      (__int64)&v15,
      (__int64)&v16,
      (const WCHAR **)&v14,
      (const WCHAR **)&v13,
      (const WCHAR **)&v12);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity *)((char *)this + 8));
}
