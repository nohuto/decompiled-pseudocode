/*
 * XREFs of BiCloseKey @ 0x14080525C
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140373CC8 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x140373E98 (BiOpenStoreKeyFromObject.c)
 *     BiSetObjectDescription @ 0x1408024C4 (BiSetObjectDescription.c)
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140802668 (BiAddStoreFromFile.c)
 *     BiCreateObject @ 0x140803298 (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x140804668 (BiBuildIdentifierList.c)
 *     BiGetObjectDescription @ 0x140804BEC (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BiCleanupLoadedStores @ 0x140807BE4 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A5C430 (BcdEnumerateObjects.c)
 *     BiUnloadHiveByHandle @ 0x140A5D504 (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D6AC (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x140373DE0 (BiZwSetSecurityObject.c)
 *     CmSiCloseSection @ 0x140373DFC (CmSiCloseSection.c)
 *     BiCreateKeySecurityDescriptor @ 0x1408052B0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
