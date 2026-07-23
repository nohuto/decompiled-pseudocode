/*
 * XREFs of sub_1405C4F88 @ 0x1405C4F88
 * Callers:
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1405C4F88(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1376LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
