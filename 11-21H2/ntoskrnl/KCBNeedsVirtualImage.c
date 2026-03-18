/*
 * XREFs of KCBNeedsVirtualImage @ 0x14023BD7C
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B656C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x14023BDB4 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 */

bool KCBNeedsVirtualImage()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( !(unsigned __int8)KCBIsVirtualizable() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1, v0, v2) == 0;
}
