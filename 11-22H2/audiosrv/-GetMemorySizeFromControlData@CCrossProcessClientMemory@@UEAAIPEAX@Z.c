/*
 * XREFs of ?GetMemorySizeFromControlData@CCrossProcessClientMemory@@UEAAIPEAX@Z @ 0x1801634C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientMemory::GetMemorySizeFromControlData(CCrossProcessClientMemory *this, _DWORD *a2)
{
  if ( a2[45] == -1 )
    return (unsigned int)a2[92];
  else
    return (unsigned int)a2[94];
}
