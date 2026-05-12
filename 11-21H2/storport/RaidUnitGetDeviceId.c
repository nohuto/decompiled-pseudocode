/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C001FD38
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0087BAC (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1C001FED0 (RtlStringCchPrintfW.c)
 *     StorGetIdentityVendorId @ 0x1C001FF74 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001FFBC (StorGetIdentityProductId.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaFixupIds @ 0x1C008793C (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C00879D8 (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // esi
  wchar_t *Pool; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *DeviceType; // rax
  char v10; // cl
  char v11; // al
  __int128 v12; // xmm0
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  char v16; // [rsp+50h] [rbp-28h]

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    if ( (*(_DWORD *)(a1 + 1824) & 0x20) != 0 )
    {
      v10 = *(_BYTE *)(a1 + 168);
      v11 = *(_BYTE *)(a1 + 185);
      v13 = *(_QWORD *)(a1 + 160);
      v12 = *(_OWORD *)(a1 + 169);
      v14 = v10;
      v16 = v11;
      v15 = v12;
      RtlStringCchPrintfW(Pool, 0x40uLL, L"NVME\\%hs&Prod_%hs", "ZNSDisk", &v15);
    }
    else
    {
      StorGetIdentityVendorId(a1 + 104, &v13);
      StorGetIdentityProductId(a1 + 104, &v15);
      if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
      {
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", &v13, &v15);
      }
      else
      {
        DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v6, v7);
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, &v13, &v15);
      }
    }
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
