/*
 * XREFs of ??$UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow@AEAJAEAJAEAJAEAJ@SearchAppExperienceManagerTelemetry@@SAXAEAJ000@Z @ 0x18019A1EC
 * Callers:
 *     ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FE04 (-ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180037AFC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow<long &,long &,long &,long &>(
        _DWORD *a1,
        int *a2,
        int *a3,
        unsigned int *a4)
{
  const struct _tlgProvider_t *result; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r9
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v15[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  result = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11 = *a4;
    v15[0] = *a1;
    v13 = v9;
    v14 = v10;
    v12 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (int)result,
                                            (int)&unk_1806AA8E7,
                                            0,
                                            v11,
                                            (__int64)v15,
                                            (__int64)&v14,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
