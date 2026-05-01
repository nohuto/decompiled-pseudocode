/*
 * XREFs of ??$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N00$$QEAI1@Z @ 0x18052F2E8
 * Callers:
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000221C (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ComputePrimaryViewAnimationDurations<bool &,bool &,bool &,unsigned int,unsigned int>(
        _BYTE *a1,
        char *a2,
        char *a3,
        int *a4,
        int *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // ecx
  char v15; // [rsp+50h] [rbp-20h] BYREF
  char v16; // [rsp+51h] [rbp-1Fh] BYREF
  _BYTE v17[2]; // [rsp+52h] [rbp-1Eh] BYREF
  int v18; // [rsp+54h] [rbp-1Ch] BYREF
  int v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF

  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(v9[1], 16LL);
    if ( (_BYTE)v9 )
    {
      v20 = 0x1000000LL;
      v13 = *a5;
      v19 = *a4;
      v15 = *a3;
      v16 = *a2;
      v17[0] = *a1;
      v18 = v13;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v12,
                     (int)&unk_180864089,
                     v10,
                     v11,
                     (__int64)v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v20);
    }
  }
  return (char)v9;
}
