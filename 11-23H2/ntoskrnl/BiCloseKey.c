/*
 * XREFs of BiCloseKey @ 0x14080552C
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140373E68 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x140374038 (BiOpenStoreKeyFromObject.c)
 *     BiSetObjectDescription @ 0x140802794 (BiSetObjectDescription.c)
 *     BiCloseStore @ 0x1408028D8 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140802938 (BiAddStoreFromFile.c)
 *     BiCreateObject @ 0x140803568 (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140803CEC (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 *     BiGetObjectDescription @ 0x140804EBC (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiCleanupLoadedStores @ 0x140807EB4 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 *     BiUnloadHiveByHandle @ 0x140A5D7B4 (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D95C (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x140373F80 (BiZwSetSecurityObject.c)
 *     CmSiCloseSection @ 0x140373F9C (CmSiCloseSection.c)
 *     BiCreateKeySecurityDescriptor @ 0x140805580 (BiCreateKeySecurityDescriptor.c)
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
