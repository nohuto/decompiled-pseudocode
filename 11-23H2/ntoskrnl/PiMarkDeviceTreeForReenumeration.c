/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1407CD378
 * Callers:
 *     PiCollapseEnumRequests @ 0x140359024 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x1407CD2C4 (PiProcessReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD3C8 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 778 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
