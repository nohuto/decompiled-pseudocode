/*
 * XREFs of BiUnloadHiveByHandle @ 0x140A5D504
 * Callers:
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x140807BE4 (BiCleanupLoadedStores.c)
 *     BcdForciblyUnloadStore @ 0x140A5C290 (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140805444 (BiGetRegistryValue.c)
 *     BiUnloadHiveByName @ 0x140A5D59C (BiUnloadHiveByName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(void *a1, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue((__int64)a1, L"KeyName", L"Description", 1u, &P, &v8);
  BiCloseKey(a1);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v7 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v7;
}
