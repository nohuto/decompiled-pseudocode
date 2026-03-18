/*
 * XREFs of BiCloseKey @ 0x1408132F0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x14064CC20 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x14064CD04 (BiSetFirmwareModifiedFromObject.c)
 *     BiGetObjectDescription @ 0x140800ADC (BiGetObjectDescription.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiUnloadHiveByHandle @ 0x140807354 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x140811EB0 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x140811F10 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x14081210C (BiAddStoreFromFile.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140A1CF34 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x140A1D308 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A1D808 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140A1E890 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140250FF0 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x1403A7848 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
