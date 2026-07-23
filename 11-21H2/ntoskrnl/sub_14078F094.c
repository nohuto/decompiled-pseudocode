/*
 * XREFs of sub_14078F094 @ 0x14078F094
 * Callers:
 *     sub_1406F2000 @ 0x1406F2000 (sub_1406F2000.c)
 *     sub_14078EF08 @ 0x14078EF08 (sub_14078EF08.c)
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 *     sub_140797468 @ 0x140797468 (sub_140797468.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14078F094(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
