/*
 * XREFs of sub_18000CE34 @ 0x18000CE34
 * Callers:
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000CE34(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
