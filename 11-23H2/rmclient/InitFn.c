/*
 * XREFs of InitFn @ 0x180009300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitFn(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  __int64 result; // rax

  byte_180032A30 = 1;
  qword_1800328E0 = (__int64)&qword_180032A28;
  result = 1LL;
  qword_180032A28 = (__int64)&off_180020AF8;
  return result;
}
