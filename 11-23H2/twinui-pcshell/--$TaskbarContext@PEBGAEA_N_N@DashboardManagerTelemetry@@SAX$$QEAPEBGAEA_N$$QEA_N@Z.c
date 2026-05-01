/*
 * XREFs of ??$TaskbarContext@PEBGAEA_N_N@DashboardManagerTelemetry@@SAX$$QEAPEBGAEA_N$$QEA_N@Z @ 0x18022F048
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180693EF0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

const struct _tlgProvider_t *__fastcall DashboardManagerTelemetry::TaskbarContext<unsigned short const *,bool &,bool>(
        __int64 *a1,
        char *a2,
        char *a3)
{
  const struct _tlgProvider_t *result; // rax
  char v7; // dl
  char v8; // r8
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  result = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v7 = *a2;
    v8 = *a3;
    v10 = *a1;
    LOBYTE(v9) = v7;
    LOBYTE(v11) = v8;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                                            (int)result,
                                            (int)&dword_180875F78,
                                            (__int64)&v10,
                                            (__int64)&v9,
                                            (__int64)&v11);
  }
  return result;
}
