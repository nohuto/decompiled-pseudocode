/*
 * XREFs of sub_140417964 @ 0x140417964
 * Callers:
 *     sub_1403117B0 @ 0x1403117B0 (sub_1403117B0.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 */

bool __fastcall sub_140417964(__int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 16) & 0x50) == 0x50 )
  {
    v1 = *(_DWORD *)(a1 + 48);
    if ( v1 != -2147483626
      && (v1 & 0xC0000000) != 0xC0000000
      && IoGetRequestorProcess((PIRP)a1) != *((PEPROCESS *)KeGetCurrentThread() + 23) )
    {
      return 1;
    }
  }
  return result;
}
