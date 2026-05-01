/*
 * XREFs of ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18002C60C
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x18002D2A8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWriteTe.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::Hide::ViewKeptAlive<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 result; // rax
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  result = wil::details::static_lazy<SingleViewExperienceLogging>::get(
             a1,
             _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(result + 8) > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)(result + 8), 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v11 = *(_QWORD *)(a1 + 48) + 8;
      v13 = 0x1000000LL;
      v12 = *a5;
      LODWORD(v17) = *a4;
      v15 = *a3;
      v16 = *a2;
      v14 = v12;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
               v10,
               (int)&dword_18087CB25,
               v11,
               (__int64)&v16,
               (__int64)&v15,
               (__int64)&v17,
               (__int64)&v14,
               (__int64)&v13);
    }
  }
  return result;
}
