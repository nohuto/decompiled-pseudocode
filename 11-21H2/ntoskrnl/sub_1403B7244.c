/*
 * XREFs of sub_1403B7244 @ 0x1403B7244
 * Callers:
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 *     sub_140B1CB28 @ 0x140B1CB28 (sub_140B1CB28.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall sub_1403B7244(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(*a3, (EVENT_INFO_CLASS)2, &word_1400128C0, 0x16u);
    return 0;
  }
  return result;
}
