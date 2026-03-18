/*
 * XREFs of IopDoesCompletionNeedsApc @ 0x140417964
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1403117B0 (IopCompleteIrpInFileObjectList.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 */

bool __fastcall IopDoesCompletionNeedsApc(__int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 16) & 0x50) == 0x50 )
  {
    v1 = *(_DWORD *)(a1 + 48);
    if ( v1 != -2147483626
      && (v1 & 0xC0000000) != 0xC0000000
      && IoGetRequestorProcess((PIRP)a1) != KeGetCurrentThread()->ApcState.Process )
    {
      return 1;
    }
  }
  return result;
}
