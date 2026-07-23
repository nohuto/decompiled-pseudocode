/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1405A2810
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
