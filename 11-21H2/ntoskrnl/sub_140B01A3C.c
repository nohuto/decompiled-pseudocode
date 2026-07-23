/*
 * XREFs of sub_140B01A3C @ 0x140B01A3C
 * Callers:
 *     sub_140B01A8C @ 0x140B01A8C (sub_140B01A8C.c)
 * Callees:
 *     sub_1403C0D08 @ 0x1403C0D08 (sub_1403C0D08.c)
 */

char sub_140B01A3C()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  byte_140C22BB0 = 0;
  v0 = sub_1403C0D08(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
         L"BatteryFeaturesGranted",
         4uLL,
         0,
         &v2);
  if ( v0 >= 0 )
  {
    LOBYTE(v0) = v2 & 1;
    byte_140C22BB0 = v2 & 1;
  }
  return v0;
}
