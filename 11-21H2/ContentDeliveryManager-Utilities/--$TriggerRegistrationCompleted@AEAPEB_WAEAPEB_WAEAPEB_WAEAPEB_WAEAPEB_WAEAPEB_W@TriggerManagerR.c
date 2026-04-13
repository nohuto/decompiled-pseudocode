/*
 * XREFs of ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x180099B78
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180098C80 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@33333AEBU?$_tlgWrapSz@D@@@Z @ 0x180002E44 (--$Write@U-$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v17; // [rsp+68h] [rbp-1h] BYREF
  __int64 v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h] BYREF
  __int64 v21; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+90h] [rbp+27h] BYREF
  __int64 v23; // [rsp+98h] [rbp+2Fh] BYREF

  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v14 = (__int64)v11;
  if ( *(_DWORD *)v11 > 5u )
  {
    LODWORD(v11) = 0;
    if ( (*(_QWORD *)(v14 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v14 + 24) & 0x400000000000LL) == *(_QWORD *)(v14 + 24) )
    {
      v17 = a7;
      v18 = *a6;
      v15 = *a5;
      v20 = *a4;
      v21 = *a3;
      v22 = *a2;
      v23 = *a1;
      v19 = v15;
      LODWORD(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
                       v14,
                       (unsigned __int8 *)dword_180192EDE,
                       v12,
                       v13,
                       (const WCHAR **)&v23,
                       (const WCHAR **)&v22,
                       (const WCHAR **)&v21,
                       (const WCHAR **)&v20,
                       (const WCHAR **)&v19,
                       (const WCHAR **)&v18,
                       (const unsigned __int16 **)&v17);
    }
  }
  return (int)v11;
}
