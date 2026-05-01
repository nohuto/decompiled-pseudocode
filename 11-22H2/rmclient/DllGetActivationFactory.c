/*
 * XREFs of DllGetActivationFactory @ 0x180007A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DllGetActivationFactory(HSTRING a1, _QWORD *a2)
{
  __int64 v4; // rdx

  InitOnceExecuteOnce(&InitOnce, InitFn, 0LL, 0LL);
  byte_180032A30 = 1;
  return sub_1800044E0((__int64)&qword_180032A28, v4, a1, a2);
}
