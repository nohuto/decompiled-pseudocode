/*
 * XREFs of IvtSetDeviceSvmCapabilities @ 0x14052D6E0
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateContextTable @ 0x14052B220 (IvtAllocateContextTable.c)
 */

__int64 __fastcall IvtSetDeviceSvmCapabilities(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( a3 )
    return IvtAllocateContextTable(a1, a2);
  else
    return 0LL;
}
