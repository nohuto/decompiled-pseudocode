/*
 * XREFs of ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C01530F0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DispConfigTypes::GetSetterTypeSize(int a1)
{
  if ( a1 <= -6 )
  {
    if ( a1 == -6 )
      return 28LL;
    if ( a1 != -28 && a1 != -27 )
    {
      if ( a1 == -23 )
        return 48LL;
      if ( a1 != -19 )
      {
        if ( a1 != -18 )
        {
          if ( a1 == -16 )
            return 68LL;
          return 0LL;
        }
        return 28LL;
      }
    }
    return 24LL;
  }
  if ( a1 == -4 || a1 == 5 || a1 == 8 || a1 == 10 )
    return 24LL;
  if ( a1 != 13 )
    return 0LL;
  return 312LL;
}
