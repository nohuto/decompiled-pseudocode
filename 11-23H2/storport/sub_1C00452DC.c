/*
 * XREFs of sub_1C00452DC @ 0x1C00452DC
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 */

char __fastcall sub_1C00452DC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = a2 + 1664;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), 134684676, 134684677) != 134684677 || !v5 )
    return 0;
  *(_DWORD *)(v5 + 32) = 12;
  *(_QWORD *)(v5 + 40) = a2 + 1912;
  *(_DWORD *)(v5 + 36) = a3;
  *(_QWORD *)(a2 + 1920) = a4;
  sub_1C0014D10((char *)(a1 + 944), (struct _SLIST_ENTRY *)v5);
  return 1;
}
