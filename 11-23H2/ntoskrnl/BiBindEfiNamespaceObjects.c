/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x140802A8C
 * Callers:
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 * Callees:
 *     BiFreeIdentifierList @ 0x140802144 (BiFreeIdentifierList.c)
 *     BiBindEfiBootManager @ 0x140802DDC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v4[1] = v4;
  v4[0] = v4;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0 || (v2 = BiBindEfiEntries(BcdStoreHandle), v2 < 0) || (v2 = BiBindEfiBootManager(BcdStoreHandle), v2 < 0) )
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v2);
  BiFreeIdentifierList(v4);
  return (unsigned int)v2;
}
