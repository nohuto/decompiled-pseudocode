/*
 * XREFs of BiOpenKey @ 0x140807650
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1403744EC (BiOpenStoreKeyFromObject.c)
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     BiGetObjectDescription @ 0x14080716C (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D71C (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14036937C (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14037440C (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x140374434 (BiZwSetSecurityObject.c)
 *     CmSiCloseSection @ 0x140374450 (CmSiCloseSection.c)
 *     BiCreateKeySecurityDescriptor @ 0x140807830 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
