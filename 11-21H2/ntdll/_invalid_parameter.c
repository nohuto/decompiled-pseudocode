/*
 * XREFs of _invalid_parameter @ 0x180093768
 * Callers:
 *     _lfind @ 0x180094980 (_lfind.c)
 *     _snprintf @ 0x180094B20 (_snprintf.c)
 *     _snwprintf @ 0x180094BD0 (_snwprintf.c)
 *     _splitpath_helper @ 0x180094D40 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180095040 (_strlwr_s.c)
 *     _strupr @ 0x180095120 (_strupr.c)
 *     _strupr_s @ 0x180095170 (_strupr_s.c)
 *     swprintf @ 0x1800951E0 (swprintf.c)
 *     _vscprintf_helper @ 0x1800952BC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18009531C (_vsprintf_l.c)
 *     _vscwprintf_helper @ 0x1800953DC (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x180095454 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009551C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800955EC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180095740 (_wcslwr.c)
 *     _wcslwr_s @ 0x1800957A0 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180095890 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180095920 (_wcsset_s.c)
 *     wcstoxq @ 0x1800959F4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180095CA0 (_wcsupr_s.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 *     bsearch_s @ 0x180096840 (bsearch_s.c)
 *     qsort @ 0x180097BF0 (qsort.c)
 *     qsort_s @ 0x180097F90 (qsort_s.c)
 *     sprintf @ 0x180098360 (sprintf.c)
 *     vscan_fn @ 0x18009853C (vscan_fn.c)
 *     strtoxlX @ 0x180098FD8 (strtoxlX.c)
 *     wcstoxlX @ 0x180099BD0 (wcstoxlX.c)
 *     strtoxq @ 0x18009A0C0 (strtoxq.c)
 *     _output_l @ 0x18009A340 (_output_l.c)
 *     _woutput_l @ 0x18009ACC0 (_woutput_l.c)
 *     _input_l @ 0x18009D2A0 (_input_l.c)
 *     _wctomb_s_l @ 0x18009DB78 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18009DC44 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009DD34 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009DEAC (x64toa_s.c)
 *     xtoa_s @ 0x18009DFE0 (xtoa_s.c)
 *     x64tow_s @ 0x18009E1AC (x64tow_s.c)
 *     xtow_s @ 0x18009E2F0 (xtow_s.c)
 *     _makepath_s @ 0x18009E430 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18009E5C0 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18009E660 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18009E6D0 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18009E780 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18009E7C0 (_splitpath_s.c)
 *     _strnset_s @ 0x18009EA50 (_strnset_s.c)
 *     _strset_s @ 0x18009EAE0 (_strset_s.c)
 *     _wmakepath_s @ 0x18009EB40 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18009ECD0 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009EF80 (memcpy_s.c)
 *     memmove_s @ 0x18009F020 (memmove_s.c)
 *     vsprintf_s @ 0x18009F0B0 (vsprintf_s.c)
 *     sscanf_s @ 0x18009F100 (sscanf_s.c)
 *     strcat_s @ 0x18009F160 (strcat_s.c)
 *     strcpy_s @ 0x18009F200 (strcpy_s.c)
 *     strncat_s @ 0x18009F290 (strncat_s.c)
 *     strncpy_s @ 0x18009F3A0 (strncpy_s.c)
 *     strtok_s @ 0x18009F4A0 (strtok_s.c)
 *     vswprintf_s @ 0x18009F640 (vswprintf_s.c)
 *     swscanf_s @ 0x18009F6A0 (swscanf_s.c)
 *     wcscat_s @ 0x18009F700 (wcscat_s.c)
 *     wcscpy_s @ 0x18009F7B0 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009F840 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009F960 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009FA70 (wcstok_s.c)
 *     _output_s @ 0x18009FB74 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x1800A0408 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x1800A04E4 (_soutput_s.c)
 *     _input_s @ 0x1800A0A30 (_input_s.c)
 *     _sinput_s @ 0x1800A137C (_sinput_s.c)
 *     _swoutput_s @ 0x1800A13F4 (_swoutput_s.c)
 *     _woutput_s @ 0x1800A1520 (_woutput_s.c)
 *     _swinput_s @ 0x1800A2280 (_swinput_s.c)
 *     _winput_s @ 0x1800A2354 (_winput_s.c)
 *     _fgetwc_nolock @ 0x1800A2D40 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A2D8C (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlVirtualUnwind @ 0x180039050 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180039DA0 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A82D0 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
