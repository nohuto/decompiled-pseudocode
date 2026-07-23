/*
 * XREFs of BiOpenKey @ 0x1408053A0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140374038 (BiOpenStoreKeyFromObject.c)
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
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140805714 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x140807544 (BiDeleteRegistryValue.c)
 *     BiCleanupLoadedStores @ 0x140807EB4 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D95C (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140369B6C (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x140373F58 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x140373F80 (BiZwSetSecurityObject.c)
 *     CmSiCloseSection @ 0x140373F9C (CmSiCloseSection.c)
 *     BiCreateKeySecurityDescriptor @ 0x140805580 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // esi
  void *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  __int64 v13; // rdx
  HANDLE v14; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v15; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17[2]; // [rsp+48h] [rbp-70h] BYREF
  void *v18; // [rsp+C0h] [rbp+8h]

  v15 = 0LL;
  DestinationString = 0LL;
  *(&v17[0].Length + 1) = 0;
  *(&v17[0].Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    v14 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v17[0].Length = 48;
    v17[0].RootDirectory = v18;
    v17[0].Attributes = 576;
    v17[0].ObjectName = &DestinationString;
    *(_OWORD *)&v17[0].SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = BiZwOpenKey(&v14, v10, v17);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
      v11 = BiZwSetSecurityObject(v14, v13, KeySecurityDescriptor);
      if ( v11 >= 0 )
      {
        v11 = BiZwOpenKey(&v15, a3, v17);
        if ( v11 >= 0 )
        {
          CmSiCloseSection(v14);
          v14 = v15;
LABEL_6:
          *a4 = v14;
        }
      }
    }
    if ( v11 < 0 && v14 )
      CmSiCloseSection(v14);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      a1 = (__int64)v18;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
