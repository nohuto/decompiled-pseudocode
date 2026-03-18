/*
 * XREFs of WmipAlign @ 0x14022AE30
 * Callers:
 *     WmipQueryAllData @ 0x1406C7A7C (WmipQueryAllData.c)
 *     WmipInsertStaticNames @ 0x1406C8054 (WmipInsertStaticNames.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DF4C4 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x1409E0580 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0984 (WmipIncludeStaticNames.c)
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
