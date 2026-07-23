/*
 * XREFs of PsIsComponentEnabled @ 0x14025AB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsComponentEnabled(int a1)
{
  return (a1 & *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2872LL)) == 0;
}
