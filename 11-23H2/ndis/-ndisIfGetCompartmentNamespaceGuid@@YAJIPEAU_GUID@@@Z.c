/*
 * XREFs of ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1C00B8D44
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B813C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

__int64 __fastcall ndisIfGetCompartmentNamespaceGuid(unsigned int a1, struct _GUID *a2)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v5; // r8
  unsigned int v6; // ebx

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v6 = 0;
  if ( CompartmentBlock )
    *a2 = *(struct _GUID *)((char *)CompartmentBlock + 1684);
  else
    v6 = -1073741275;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  return v6;
}
