/*
 * XREFs of RIMSetDeviceInputMode @ 0x1C00D2D38
 * Callers:
 *     _lambda_71c7f17e38aeb1e1c3ba27f103f26824_::_lambda_invoker_cdecl_ @ 0x1C00D2CF0 (_lambda_71c7f17e38aeb1e1c3ba27f103f26824_--_lambda_invoker_cdecl_.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01B7EF0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00A2104 (RIMUpdateDeviceForInputMode.c)
 *     RIMIsWakeCapableDevice @ 0x1C00D2D98 (RIMIsWakeCapableDevice.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152794 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C017E4CC (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C019A364 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(struct RIMDEV *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v5 = InputTraceLogging::InputModeToString(a2);
    v6 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C028EE70,
      (__int64)&v6,
      (__int64)&v5);
  }
  if ( a2 == 1 || a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice(a1) )
    rimInvalidateInputs(a1);
  result = RIMUpdateDeviceForInputMode((__int64)a1, a2);
  *((_DWORD *)a1 + 330) = a2;
  return result;
}
