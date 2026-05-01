/*
 * XREFs of sub_18000CE7C @ 0x18000CE7C
 * Callers:
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000CE7C(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
