/*
 * XREFs of VfIoDetachDevice @ 0x140AD23B8
 * Callers:
 *     IovDetachDevice @ 0x140AC169C (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140384748 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE844 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x140AD29EC (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x140AD36F0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3744 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
