/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x18000AE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180009CE0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  int RegistryValues; // eax
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v5, 0, 0x70uLL);
  v5[2] = L"PortableOperatingSystem";
  LODWORD(v5[1]) = 292;
  v5[3] = &v6;
  LODWORD(v5[4]) = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, (__int64)v5, 0LL, 0LL, 1);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *IsPortable = v6 != 0;
    return v1;
  }
  return -1073741275;
}
