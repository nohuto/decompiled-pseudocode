/*
 * XREFs of ?TraceMeasurement@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@N00H@Z @ 0x1800213D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001010 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 */

__int64 __fastcall Spectre::Utils::ETWTraceProvider::TraceMeasurement(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t *a5,
        const wchar_t *a6,
        int a7)
{
  __int64 v7; // xmm3_8
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  const wchar_t *v14; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801C8188 > 5 )
  {
    v9 = a7;
    v10 = a6;
    v11 = a5;
    v12 = v7;
    v14 = a2;
    v13 = a3;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
             a1,
             (int)&unk_1801AAD85,
             a3,
             a4,
             &v14,
             (__int64)&v13,
             (__int64)&v12,
             &v11,
             &v10,
             (__int64)&v9);
  }
  return result;
}
