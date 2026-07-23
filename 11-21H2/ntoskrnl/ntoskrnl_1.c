/*
 * XREFs of ntoskrnl_1 @ 0x14069D3D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_14069D480 @ 0x14069D480 (sub_14069D480.c)
 */

__int64 __fastcall ntoskrnl_1(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return sub_14069D480(a1, a2, 0, 3, CurrentServerSilo);
}
