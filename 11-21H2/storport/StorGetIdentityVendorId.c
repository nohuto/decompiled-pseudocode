/*
 * XREFs of StorGetIdentityVendorId @ 0x1C001FF74
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001FD38 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00879FC (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0087B64 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (a1[3] & 4) != 0 )
    v2 = a1[6];
  else
    v2 = *a1;
  if ( !v2 )
    return 3221225485LL;
  RaCopyPaddedString(a2, 9LL, v2 + 8, 8LL);
  return 0LL;
}
