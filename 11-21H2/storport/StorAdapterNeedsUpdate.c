/*
 * XREFs of StorAdapterNeedsUpdate @ 0x1C005A2E0
 * Callers:
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 */

bool __fastcall StorAdapterNeedsUpdate(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // si
  char v5; // bp
  char v6; // di

  v2 = *(_QWORD *)(a1 + 568);
  v4 = StorMiniportDiagnosticEventsEnabled;
  v5 = StorMiniportHealthEventsEnabled;
  v6 = StorMiniportOperationalEventsEnabled;
  return v2 && *(_QWORD *)(v2 + 176) && ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2
      || (unsigned int)RaidIsAdapterControlSupported(a1, 20) && ((*(_BYTE *)(a1 + 110) & 8) != 0) != v6
      || (unsigned int)RaidIsAdapterControlSupported(a1, 20) && ((*(_BYTE *)(a1 + 110) & 0x10) != 0) != v5
      || (unsigned int)RaidIsAdapterControlSupported(a1, 20) && ((*(_BYTE *)(a1 + 110) & 0x20) != 0) != v4;
}
