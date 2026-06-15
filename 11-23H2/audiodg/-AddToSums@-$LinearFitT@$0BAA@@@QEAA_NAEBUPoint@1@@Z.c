/*
 * XREFs of ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14007399C
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?LongLongAdd@@YAJ_J0PEA_J@Z @ 0x140073CC8 (-LongLongAdd@@YAJ_J0PEA_J@Z.c)
 *     ?LongLongMult@@YAJ_J0PEA_J@Z @ 0x140073CFC (-LongLongMult@@YAJ_J0PEA_J@Z.c)
 */

char __fastcall LinearFitT<256>::AddToSums(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2[1] - *(_QWORD *)(a1 + 48);
  if ( (int)LongLongMult(*a2 - *(_QWORD *)(a1 + 40), *a2 - *(_QWORD *)(a1 + 40), &v10) < 0
    || (int)LongLongAdd(*(_QWORD *)(v3 + 80), v10, &v12) < 0
    || (int)LongLongMult(v4, v2, &v10) < 0
    || (int)LongLongAdd(*(_QWORD *)(v5 + 72), v10, &v11) < 0 )
  {
    return 0;
  }
  v8 = v11;
  *(_QWORD *)(v6 + 56) += v7;
  *(_QWORD *)(v6 + 64) += v2;
  ++*(_DWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 72) = v8;
  *(_QWORD *)(v6 + 80) = v12;
  return 1;
}
