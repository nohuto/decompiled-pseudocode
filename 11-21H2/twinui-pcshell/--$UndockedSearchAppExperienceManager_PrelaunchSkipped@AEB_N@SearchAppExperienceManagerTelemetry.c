/*
 * XREFs of ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x18019A1A8
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1800FBD30 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180348A04 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

const struct _tlgProvider_t *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(
        unsigned __int8 *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1806AACDA,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
