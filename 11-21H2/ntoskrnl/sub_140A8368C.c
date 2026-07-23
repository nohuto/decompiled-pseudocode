/*
 * XREFs of sub_140A8368C @ 0x140A8368C
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405FE1E0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405FE220 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405FE260 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1405FE2A0 (VfQueryThreadContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A8368C(int a1, int a2)
{
  char result; // al
  int v3; // ecx
  int v4; // ecx
  bool v5; // sf
  bool v6; // of

  result = 0;
  if ( a1 && (v3 = a1 - 1) != 0 && (v4 = v3 - 1) != 0 )
  {
    if ( v4 != 1 )
      return result;
    v6 = __OFSUB__(a2, 2);
    v5 = a2 - 2 < 0;
  }
  else
  {
    v6 = __OFSUB__(a2, 1);
    v5 = a2 - 1 < 0;
  }
  return v5 ^ v6;
}
