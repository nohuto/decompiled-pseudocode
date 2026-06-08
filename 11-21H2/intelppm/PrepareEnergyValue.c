/*
 * XREFs of PrepareEnergyValue @ 0x1C0024C70
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

__int64 __fastcall PrepareEnergyValue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  PctPlatformCounterState(a1, a2);
  result = PctPlatformCounterState(v4, 0LL);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = a3 - v7 + 0xFFFFFFFF;
  if ( a3 >= v7 )
    v8 = a3 - v7;
  *(_QWORD *)(v6 + 32) += *(_QWORD *)(result + 32) * v8;
  return result;
}
