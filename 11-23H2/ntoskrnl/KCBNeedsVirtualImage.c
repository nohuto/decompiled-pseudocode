/*
 * XREFs of KCBNeedsVirtualImage @ 0x14034798C
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1407BA444 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1403479C4 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1407BA4FC (CmpIsSystemEntity.c)
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
