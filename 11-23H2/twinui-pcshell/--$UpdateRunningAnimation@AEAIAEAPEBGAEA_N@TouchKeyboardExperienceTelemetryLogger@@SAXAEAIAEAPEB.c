/*
 * XREFs of ??$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEBGAEA_N@Z @ 0x180509250
 * Callers:
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800019DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::UpdateRunningAnimation<unsigned int &,unsigned short const * &,bool &>(
        _DWORD *a1,
        __int64 *a2,
        _BYTE *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 16LL);
    if ( (_BYTE)v6 )
    {
      LOBYTE(v15) = *a3;
      v14 = *a2;
      LODWORD(v12) = *a1;
      v13 = 0x1000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_18085CD49,
                     v9,
                     v10,
                     (__int64)&v12,
                     (const WCHAR **)&v14,
                     (__int64)&v15,
                     (__int64)&v13);
    }
  }
  return (char)v6;
}
