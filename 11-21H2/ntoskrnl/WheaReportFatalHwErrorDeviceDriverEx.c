/*
 * XREFs of WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140644110 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaCreateHwErrorReportDeviceDriver @ 0x140644220 (WheaCreateHwErrorReportDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140644250 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x140644280 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x140644300 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
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
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  size_t v11; // rsi
  __int64 HwErrorReportDeviceDriver; // rax
  ULONG_PTR v14; // rdi
  int v15; // ebx
  void *v17[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h]
  _BYTE *v19; // [rsp+48h] [rbp-10h]

  v11 = a4;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  HwErrorReportDeviceDriver = WheaCreateHwErrorReportDeviceDriver(a1);
  v14 = HwErrorReportDeviceDriver;
  if ( HwErrorReportDeviceDriver )
  {
    WheaHwErrorReportSetFatalSeverityDeviceDriver(HwErrorReportDeviceDriver, a11);
    WheaHwErrorReportGetLogDataBufferDeviceDriver();
    memmove(0LL, Src, Size);
    v15 = WheaAddHwErrorReportSectionDeviceDriver(v14, v11, (__int64)v17);
    if ( v15 >= 0 )
    {
      memmove(*(void **)((char *)v17 + 4), a3, v11);
      *(_OWORD *)v18 = *a7;
      *v19 = 1;
      if ( a9 )
        sub_14024F6E4(*((_BYTE **)&v18 + 1), 20LL, a9);
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
