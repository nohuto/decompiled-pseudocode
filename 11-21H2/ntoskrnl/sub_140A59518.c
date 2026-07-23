/*
 * XREFs of sub_140A59518 @ 0x140A59518
 * Callers:
 *     sub_140568AA0 @ 0x140568AA0 (sub_140568AA0.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403C1B74 @ 0x1403C1B74 (sub_1403C1B74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A59518(__int64 a1, LARGE_INTEGER *a2)
{
  struct _KTIMER *v2; // rbp
  ULONG LowPart; // eax
  __int64 Pool2; // r8
  int v7; // esi
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KTIMER *)(a1 + 34328);
  KeCancelTimer((PKTIMER)(a1 + 34328));
  LowPart = a2[5].LowPart;
  P = 0LL;
  Pool2 = *(_QWORD *)(a1 + 34984);
  if ( a2[5].HighPart != LowPart )
  {
    if ( LowPart )
      Pool2 = ExAllocatePool2(64LL, LowPart, 1347905867LL);
    else
      Pool2 = 0LL;
  }
  v7 = sub_1403C1B74(a1, a2, Pool2, &P);
  if ( v7 >= 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0x5057694Bu);
    if ( dword_140D0501C )
      KeSetCoalescableTimer(v2, a2[1], a2->LowPart, 0xFAu, (PKDPC)(a1 + 34264));
  }
  return (unsigned int)v7;
}
