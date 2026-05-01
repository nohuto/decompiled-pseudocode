/*
 * XREFs of sub_1800191D0 @ 0x1800191D0
 * Callers:
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800191D0(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
