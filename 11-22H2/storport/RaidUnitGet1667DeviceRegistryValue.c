/*
 * XREFs of RaidUnitGet1667DeviceRegistryValue @ 0x1C001D3C4
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001F9F8 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1C00A0728 (PortRegistryReadDeviceKey.c)
 */

char __fastcall RaidUnitGet1667DeviceRegistryValue(__int64 a1)
{
  _BYTE *v1; // rax
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v6; // [rsp+60h] [rbp+10h] BYREF
  int v7; // [rsp+68h] [rbp+18h] BYREF
  int *v8; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(_BYTE **)(a1 + 104);
  if ( v1 )
  {
    LOBYTE(v1) = *v1 & 0x1F;
    if ( !(_BYTE)v1 || (_BYTE)v1 == 20 )
    {
      v6 = -1;
      v8 = &v6;
      v7 = 4;
      DestinationString = 0LL;
      v4 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Storport");
      RtlInitUnicodeString(&v4, L"Is1667Device");
      LODWORD(v1) = PortRegistryReadDeviceKey(
                      *(_QWORD *)(a1 + 8),
                      (unsigned int)&DestinationString,
                      (unsigned int)&v4,
                      4,
                      (__int64)&v8,
                      (__int64)&v7);
      if ( (int)v1 >= 0 )
      {
        LOBYTE(v1) = v6;
        if ( v6 )
        {
          if ( v6 != -1 )
            *(_WORD *)(a1 + 128) |= 1u;
        }
        else
        {
          LOBYTE(v1) = -2;
          *(_WORD *)(a1 + 128) &= ~1u;
        }
      }
    }
  }
  return (char)v1;
}
