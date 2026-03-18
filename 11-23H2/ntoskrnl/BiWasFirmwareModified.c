/*
 * XREFs of BiWasFirmwareModified @ 0x140373C54
 * Callers:
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140805444 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
