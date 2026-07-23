/*
 * XREFs of _CmBuildDevicePanelId @ 0x140862F68
 * Callers:
 *     _CmUpdateDevicePanel @ 0x140798EEC (_CmUpdateDevicePanel.c)
 *     _CmUpdateDevicePanelInterface @ 0x140885EF0 (_CmUpdateDevicePanelInterface.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x140788044 (_PnpStringFromGuid.c)
 */

int __fastcall CmBuildDevicePanelId(int *a1, int a2, int a3, wchar_t *a4)
{
  int result; // eax
  int v8; // [rsp+38h] [rbp-90h]
  int v9; // [rsp+40h] [rbp-88h]
  wchar_t v10[40]; // [rsp+50h] [rbp-78h] BYREF

  result = PnpStringFromGuid(a1, v10);
  if ( result >= 0 )
  {
    v9 = a3;
    v8 = a2;
    return RtlStringCchPrintfExW(a4, 0x39uLL, 0LL, 0LL, 0x800u, L"%ws\\%04X\\%u", v10, v8, v9);
  }
  return result;
}
