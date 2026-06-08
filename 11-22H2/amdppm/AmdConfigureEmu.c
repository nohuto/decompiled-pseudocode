/*
 * XREFs of AmdConfigureEmu @ 0x1C0020480
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1C0002E30 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdConfigureEmu(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r10

  result = AmdPctPlatformCounterState(a1, a2);
  *(_QWORD *)(result + 32) = v3;
  return result;
}
