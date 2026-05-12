/*
 * XREFs of PmIoctlPerformance @ 0x1C001DCC4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmWmiCounterQuery @ 0x1C001D860 (PmWmiCounterQuery.c)
 *     PmWmiCounterEnable @ 0x1C00223F0 (PmWmiCounterEnable.c)
 */

__int64 __fastcall PmIoctlPerformance(__int64 a1, _QWORD *a2)
{
  int RegistryValues; // ebx
  __int64 v4; // rdi
  char *v5; // rbp
  _QWORD v7[17]; // [rsp+30h] [rbp-88h] BYREF
  int v8; // [rsp+C0h] [rbp+8h] BYREF

  v8 = 0;
  RegistryValues = 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) < 0x58u )
    return (unsigned int)-1073741789;
  v5 = (char *)a2[3];
  if ( !*(_BYTE *)(v4 + 704) )
  {
    memset(v7, 0, 0x70uLL);
    v7[2] = L"EnableCounterForIoctl";
    LODWORD(v7[1]) = 288;
    v7[3] = &v8;
    LODWORD(v7[4]) = 0x4000000;
    RegistryValues = RtlQueryRegistryValuesEx(1LL, off_1C0017088, v7);
    if ( RegistryValues < 0 )
      return (unsigned int)RegistryValues;
    if ( v8 != 1 )
      return (unsigned int)-1073741808;
    RegistryValues = PmWmiCounterEnable(v4 + 720);
    *(_BYTE *)(v4 + 704) = RegistryValues >= 0;
    if ( RegistryValues < 0 )
      return (unsigned int)RegistryValues;
  }
  PmWmiCounterQuery(*(PRKMUTEX *)(v4 + 720), v5, L"Partmgr ", *(_DWORD *)(v4 + 168));
  a2[7] = 88LL;
  return (unsigned int)RegistryValues;
}
