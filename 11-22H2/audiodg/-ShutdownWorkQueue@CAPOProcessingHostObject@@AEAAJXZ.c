/*
 * XREFs of ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14007031C
 * Callers:
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140004418 (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x1400704F4 (-StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B338 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEF4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHostObject::ShutdownWorkQueue(CAPOProcessingHostObject *this)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  std::shared_ptr<CSerialWorkQueue>::operator=(v2, (__int64 *)this + 10);
  if ( TrySubmitThreadpoolCallback(
         (PTP_SIMPLE_CALLBACK)lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_,
         v3,
         0LL) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2D,
             (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
             v4);
  }
}
