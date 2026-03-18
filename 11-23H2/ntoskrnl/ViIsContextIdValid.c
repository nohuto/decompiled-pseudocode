/*
 * XREFs of ViIsContextIdValid @ 0x140AC40CC
 * Callers:
 *     VfInsertContext @ 0x1405CE440 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405CE510 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405CE550 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405CE590 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x1405CE5D0 (VfRemoveContext.c)
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
