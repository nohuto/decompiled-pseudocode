/*
 * XREFs of ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x140008E04
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140008E4C (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

__int64 __fastcall LinearFitT<256>::InitWithPoint(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  LinearFitT<256>::Reset(a1);
  *(_OWORD *)(a1 + 104) = *a2;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  result = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 8) = 1;
  return result;
}
