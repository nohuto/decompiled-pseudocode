/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x14051F924
 * Callers:
 *     HalpPrepareForBugcheck @ 0x14050B8B0 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x14050C2A0 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050C640 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerUpdateApiConsumers()
{
  __int64 i; // rbx
  __int64 result; // rax
  __int16 v2; // [rsp+20h] [rbp-8h]

  _disable();
  for ( i = HalpTimerHvApicCallbackList; i; i = *(_QWORD *)i )
    result = (*(__int64 (__fastcall **)(__int64))(i + 8))(5LL);
  if ( (v2 & 0x200) != 0 )
    _enable();
  return result;
}
