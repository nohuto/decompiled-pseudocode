/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01194DC
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x1C0118F08 (ndisIfReadHiddenFlag.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C01191A0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C011945C (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C0119578 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0119624 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01196F8 (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C012BCA8 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01359F0 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C013A7A0 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, unsigned int *a3)
{
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]

  m_ptr = this->m_ptr;
  ResultLength = 0;
  v8 = 0;
  KeyValueInformation = 0LL;
  result = ZwQueryValueKey(m_ptr, a2, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      if ( DWORD2(KeyValueInformation) == 4 )
      {
        *a3 = HIDWORD(KeyValueInformation);
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
