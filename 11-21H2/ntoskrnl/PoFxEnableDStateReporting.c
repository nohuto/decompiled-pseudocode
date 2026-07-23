/*
 * XREFs of PoFxEnableDStateReporting @ 0x14098CC20
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  int v4; // ebx
  _BYTE v6[80]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v7; // [rsp+90h] [rbp-9h] BYREF
  __int128 v8; // [rsp+A0h] [rbp+7h]
  __int128 v9; // [rsp+B0h] [rbp+17h]
  __int64 v10; // [rsp+C0h] [rbp+27h]
  __int128 v11; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+D8h] [rbp+3Fh]

  if ( DeviceObject && a2 )
  {
    memset(v6, 0, sizeof(v6));
    v10 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    HIDWORD(v8) = 1;
    v9 = (unsigned __int64)&v11;
    v7 = 0LL;
    v11 = 0LL;
    v4 = sub_1408236BC(DeviceObject, (int)v6, (int)&v7, 1, 0LL, 0LL, a2);
    if ( v4 >= 0 )
    {
      *(_DWORD *)(*a2 + 824) |= 1u;
      PoFxStartDevicePowerManagement(*a2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
