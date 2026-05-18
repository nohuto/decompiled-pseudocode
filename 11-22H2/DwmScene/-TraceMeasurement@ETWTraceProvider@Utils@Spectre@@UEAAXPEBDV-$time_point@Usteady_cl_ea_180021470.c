/*
 * XREFs of ?TraceMeasurement@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K00H@Z @ 0x180021470
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
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  const wchar_t *v13; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801C8188 > 5 )
  {
    v8 = a7;
    v9 = a6;
    v10 = a5;
    v13 = a2;
    v11 = a4;
    v12 = a3;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
             a1,
             (int)&unk_1801AAC49,
             a3,
             a4,
             &v13,
             (__int64)&v12,
             (__int64)&v11,
             &v10,
             &v9,
             (__int64)&v8);
  }
  return result;
}
