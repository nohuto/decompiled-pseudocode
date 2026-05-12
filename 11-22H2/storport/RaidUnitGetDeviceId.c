/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C001F798
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C001F89C (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001F8E4 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C001F9BC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C00A1420 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C00A25C4 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // esi
  wchar_t *Pool; // rbx
  _QWORD *DeviceType; // rax
  char v8; // cl
  char v9; // al
  __int128 v10; // xmm0
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+50h] [rbp-28h]

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
    {
      v8 = *(_BYTE *)(a1 + 168);
      v9 = *(_BYTE *)(a1 + 185);
      v11 = *(_QWORD *)(a1 + 160);
      v10 = *(_OWORD *)(a1 + 169);
      v12 = v8;
      v14 = v9;
      v13 = v10;
      RtlStringCchPrintfW(Pool, 0x40uLL, L"NVME\\%hs&Prod_%hs", "ZNSDisk", &v13);
    }
    else
    {
      StorGetIdentityVendorId(a1 + 104, &v11);
      StorGetIdentityProductId(a1 + 104, &v13);
      if ( (*(_DWORD *)(a1 + 1872) & 1) != 0 )
      {
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", &v11, &v13);
      }
      else
      {
        DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, &v11, &v13);
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
