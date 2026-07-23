/*
 * XREFs of PoSetSystemState @ 0x1405CFE90
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 * Callees:
 *     sub_140368E90 @ 0x140368E90 (sub_140368E90.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    sub_140A48330(Flags);
    v2 = 1;
  }
  sub_140368E90(Flags, 7u);
  if ( v2 )
    sub_140A47CF8(v4, v3);
}
