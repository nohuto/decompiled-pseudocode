/*
 * XREFs of ApiSetEditionWakeThreadForInput @ 0x1C00590B4
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionWakeThreadForInput(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02963A8;
  if ( qword_1C02963A8 )
  {
    result = (__int64 (*)(void))qword_1C02963A8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02963B0;
      if ( qword_1C02963B0 )
        return (__int64 (*)(void))qword_1C02963B0(a1, 512LL);
    }
  }
  return result;
}
