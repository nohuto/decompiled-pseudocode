/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1800883B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180008E10 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  int RegistryValues; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+38h] [rbp-70h]
  const WCHAR *v7; // [rsp+40h] [rbp-68h]
  int *v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset_thunk_772440563353939046(v5, 0, 0x70uLL);
  v7 = L"PortableOperatingSystem";
  v6 = 292;
  v8 = &v10;
  v9 = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, (__int64)v5, 0LL, 0LL, 1);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *IsPortable = v10 != 0;
    return v1;
  }
  return -1073741275;
}
