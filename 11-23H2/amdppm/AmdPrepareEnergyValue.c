/*
 * XREFs of AmdPrepareEnergyValue @ 0x1C00030B0
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1C0002E70 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdPrepareEnergyValue(__int64 a1, int a2, unsigned __int64 a3)
{
  int v4; // edx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  AmdPctPlatformCounterState(a1, a2);
  result = AmdPctPlatformCounterState(v5, *((_DWORD *)&unk_1C001201C + 12 * v4));
  v8 = *(_QWORD *)(v7 + 16);
  v9 = a3 - v8 + 0xFFFFFFFF;
  if ( a3 >= v8 )
    v9 = a3 - v8;
  *(_QWORD *)(v7 + 32) += *(_QWORD *)(result + 32) * v9;
  return result;
}
