/*
 * XREFs of ?EvaluatePosture@Postures@InputTraceLogging@@SAXKK_NW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x18006E3F8
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@XZ @ 0x18006E1F0 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180001694 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall InputTraceLogging::Postures::EvaluatePosture(int a1, int a2, char a3, int a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // r8
  const char *v12; // rax
  char v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+44h] [rbp-24h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF

  result = InputTraceLogging::Provider();
  v10 = (int)result;
  if ( *(_DWORD *)result > 4u && (*((_BYTE *)result + 16) & 2) != 0 )
  {
    v11 = *((_QWORD *)result + 3) & 2LL;
    if ( v11 == *((_QWORD *)result + 3) )
    {
      if ( a4 )
      {
        if ( a4 == 1 )
          v12 = "Tablet";
        else
          v12 = "UNKNOWN";
      }
      else
      {
        v12 = "Desktop";
      }
      v16 = (__int64)v12;
      v13 = a3;
      v14 = a2;
      LODWORD(v15) = a1;
      return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
                                              v10,
                                              (int)&unk_180234949,
                                              v11,
                                              v9,
                                              (__int64)&v15,
                                              (__int64)&v14,
                                              (__int64)&v13,
                                              (const unsigned __int16 **)&v16);
    }
  }
  return result;
}
