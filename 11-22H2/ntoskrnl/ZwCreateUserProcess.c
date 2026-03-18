/*
 * XREFs of ZwCreateUserProcess @ 0x14041C080
 * Callers:
 *     RtlpCreateUserProcess @ 0x140B69E18 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
