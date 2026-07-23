/*
 * XREFs of ViIsContextIdValid @ 0x140AC40BC
 * Callers:
 *     VfInsertContext @ 0x1405CE9B0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405CEA80 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405CEAC0 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405CEB00 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x1405CEB40 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViIsContextIdValid(int a1, int a2)
{
  bool result; // al

  result = 0;
  if ( !a1 || (unsigned int)(a1 - 1) <= 1 )
    return a2 < 1;
  return result;
}
