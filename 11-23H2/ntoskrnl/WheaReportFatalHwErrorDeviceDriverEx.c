/*
 * XREFs of WheaReportFatalHwErrorDeviceDriverEx @ 0x140611500
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x1403C342C (RtlStringCchCopyA.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611100 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaCreateHwErrorReportDeviceDriver @ 0x140611210 (WheaCreateHwErrorReportDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140611240 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x140611270 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x1406112F0 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406113E0 (WheaHwErrorReportSubmitDeviceDriver.c)
 */

__int64 __fastcall WheaReportFatalHwErrorDeviceDriverEx(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        void *Src,
        unsigned int Size,
        _OWORD *a7,
        __int64 a8,
        const char *pszSrc,
        __int64 a10,
        __int64 a11)
{
  size_t v11; // rsi
  __int64 HwErrorReportDeviceDriver; // rax
  char *v14; // rdi
  int v15; // ebx
  void *v17[2]; // [rsp+28h] [rbp-30h] BYREF
  NTSTRSAFE_PSTR pszDest[2]; // [rsp+38h] [rbp-20h]
  _BYTE *v19; // [rsp+48h] [rbp-10h]

  v11 = a4;
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v19 = 0LL;
  HwErrorReportDeviceDriver = WheaCreateHwErrorReportDeviceDriver(a1);
  v14 = (char *)HwErrorReportDeviceDriver;
  if ( HwErrorReportDeviceDriver )
  {
    WheaHwErrorReportSetFatalSeverityDeviceDriver(HwErrorReportDeviceDriver, a11);
    WheaHwErrorReportGetLogDataBufferDeviceDriver();
    memmove(0LL, Src, Size);
    v15 = WheaAddHwErrorReportSectionDeviceDriver((__int64)v14, v11, (__int64)v17);
    if ( v15 >= 0 )
    {
      memmove(*(void **)((char *)v17 + 4), a3, v11);
      *(_OWORD *)pszDest[0] = *a7;
      *v19 = 1;
      if ( pszSrc )
        RtlStringCchCopyA(pszDest[1], 0x14uLL, pszSrc);
      return (unsigned int)WheaHwErrorReportSubmitDeviceDriver(v14);
    }
    else
    {
      WheaHwErrorReportAbandonDeviceDriver();
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
