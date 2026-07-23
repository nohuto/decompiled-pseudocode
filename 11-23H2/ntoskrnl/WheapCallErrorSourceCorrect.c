/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x140380E04
 * Callers:
 *     WheapInitializeErrorSource @ 0x14081F090 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x140380EBC (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceCorrect(__int64 a1)
{
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64); // rax
  __int64 result; // rax

  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64))WheapGetErrorSourceFunction(a1, 0LL, 0LL);
  if ( ErrorSourceFunction )
    result = ErrorSourceFunction(a1 + 96, a1 + 68);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
