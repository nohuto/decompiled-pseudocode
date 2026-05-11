/*
 * XREFs of USBHwGetCaptureRequestSize @ 0x1C002A008
 * Callers:
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     RegistryReadPnPKeyValue @ 0x1C002A07C (RegistryReadPnPKeyValue.c)
 */

__int64 __fastcall USBHwGetCaptureRequestSize(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned int v4; // ebx
  PVOID v5; // rcx
  unsigned int v6; // eax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  *a2 = 0;
  v4 = 10;
  if ( (int)RegistryReadPnPKeyValue(*(_QWORD *)(a1 + 32), L"CapturePacketsPerUrb", a3, &P) >= 0 )
  {
    v5 = P;
    v6 = *(_DWORD *)P;
    if ( *(_DWORD *)P >= 3u )
    {
      if ( v6 > 0xA )
        v6 = 10;
      v4 = v6;
    }
    else
    {
      v4 = 3;
    }
    *a2 = 1;
    ExFreePool(v5);
  }
  return v4;
}
