/*
 * XREFs of HalGetInterruptVector @ 0x140504500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetInterruptVector(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))off_140C01A50[0])(a1, a2);
}
