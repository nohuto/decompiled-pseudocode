/*
 * XREFs of sub_140826B04 @ 0x140826B04
 * Callers:
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_140826B04(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_140C2A1BC);
  }
  return result;
}
