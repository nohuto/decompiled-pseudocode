/*
 * XREFs of sub_140B0AA3C @ 0x140B0AA3C
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 *     sub_140B0B180 @ 0x140B0B180 (sub_140B0B180.c)
 *     sub_140B0B314 @ 0x140B0B314 (sub_140B0B314.c)
 */

char __fastcall sub_140B0AA3C(__int64 a1)
{
  if ( (_DWORD)dword_140C4E560 )
  {
    if ( (_DWORD)dword_140C4E560 != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)dword_140C4E560, 0LL, 0LL);
    return sub_140AFCEF0(a1);
  }
  else
  {
    sub_140B0B314(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT",
      L"Kernel-ProductType");
    return sub_140B0B180();
  }
}
