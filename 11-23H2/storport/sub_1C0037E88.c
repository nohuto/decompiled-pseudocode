/*
 * XREFs of sub_1C0037E88 @ 0x1C0037E88
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 */

char __fastcall sub_1C0037E88(__int64 a1, __int64 a2, int a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1088), 134684676, 134684677) != 134684677
    || a1 == -1072 )
  {
    _InterlockedIncrement(&dword_1C0093C54);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1104) = 1;
    *(_QWORD *)(a1 + 1112) = a2;
    *(_DWORD *)(a1 + 1120) = a3;
    sub_1C0014D10((char *)(a1 + 944), (struct _SLIST_ENTRY *)(a1 + 1072));
    return 1;
  }
}
