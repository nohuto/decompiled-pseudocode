/*
 * XREFs of WmipAlign @ 0x14022AF40
 * Callers:
 *     WmipQueryAllData @ 0x1406C7AAC (WmipQueryAllData.c)
 *     WmipInsertStaticNames @ 0x1406C8084 (WmipInsertStaticNames.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DF6C4 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x1409E0780 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
