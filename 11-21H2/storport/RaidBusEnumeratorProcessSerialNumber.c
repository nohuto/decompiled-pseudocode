/*
 * XREFs of RaidBusEnumeratorProcessSerialNumber @ 0x1C0018560
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     StorCreateAnsiString @ 0x1C00185BC (StorCreateAnsiString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessSerialNumber(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rdx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  return StorCreateAnsiString(a3 + 40, v4 + 4, *(unsigned __int8 *)(v4 + 3));
}
