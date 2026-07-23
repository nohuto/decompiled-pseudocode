/*
 * XREFs of _invalid_parameter @ 0x18008E6B8
 * Callers:
 *     _lfind @ 0x18008F940 (_lfind.c)
 *     _snprintf @ 0x18008FAE0 (_snprintf.c)
 *     _snwprintf @ 0x18008FB90 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008FD00 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180090010 (_strlwr_s.c)
 *     _strupr @ 0x1800900F0 (_strupr.c)
 *     _strupr_s @ 0x180090140 (_strupr_s.c)
 *     swprintf @ 0x1800901B0 (swprintf.c)
 *     _vscprintf_helper @ 0x18009028C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x1800902EC (_vsprintf_l.c)
 *     _vscwprintf_helper @ 0x1800903AC (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x180090424 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800904EC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800905BC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180090710 (_wcslwr.c)
 *     _wcslwr_s @ 0x180090770 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180090860 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180090900 (_wcsset_s.c)
 *     wcstoxq @ 0x1800909D4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180090C70 (_wcsupr_s.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 *     bsearch_s @ 0x180091830 (bsearch_s.c)
 *     qsort @ 0x180092BF0 (qsort.c)
 *     qsort_s @ 0x180092F90 (qsort_s.c)
 *     sprintf @ 0x180093360 (sprintf.c)
 *     vscan_fn @ 0x18009353C (vscan_fn.c)
 *     strtoxlX @ 0x180094088 (strtoxlX.c)
 *     wcstoxlX @ 0x180094CA0 (wcstoxlX.c)
 *     strtoxq @ 0x1800951A0 (strtoxq.c)
 *     _output_l @ 0x180095420 (_output_l.c)
 *     _woutput_l @ 0x180095DC0 (_woutput_l.c)
 *     _input_l @ 0x1800983D0 (_input_l.c)
 *     _wctomb_s_l @ 0x180098CB8 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180098D84 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180098E74 (_ungetc_nolock.c)
 *     x64toa_s @ 0x180098FEC (x64toa_s.c)
 *     xtoa_s @ 0x18009912C (xtoa_s.c)
 *     x64tow_s @ 0x18009930C (x64tow_s.c)
 *     xtow_s @ 0x18009945C (xtow_s.c)
 *     _makepath_s @ 0x1800995B0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180099740 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x1800997E0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180099850 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180099900 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180099940 (_splitpath_s.c)
 *     _strnset_s @ 0x180099BE0 (_strnset_s.c)
 *     _strset_s @ 0x180099C70 (_strset_s.c)
 *     _wmakepath_s @ 0x180099CD0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180099E60 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009A120 (memcpy_s.c)
 *     memmove_s @ 0x18009A1C0 (memmove_s.c)
 *     vsprintf_s @ 0x18009A250 (vsprintf_s.c)
 *     sscanf_s @ 0x18009A2A0 (sscanf_s.c)
 *     strcat_s @ 0x18009A300 (strcat_s.c)
 *     strcpy_s @ 0x18009A390 (strcpy_s.c)
 *     strncat_s @ 0x18009A420 (strncat_s.c)
 *     strncpy_s @ 0x18009A520 (strncpy_s.c)
 *     strtok_s @ 0x18009A620 (strtok_s.c)
 *     vswprintf_s @ 0x18009A7C0 (vswprintf_s.c)
 *     swscanf_s @ 0x18009A820 (swscanf_s.c)
 *     wcscat_s @ 0x18009A880 (wcscat_s.c)
 *     wcscpy_s @ 0x18009A920 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009A9B0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009AAC0 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009ABD0 (wcstok_s.c)
 *     _output_s @ 0x18009ACD4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009B598 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009B674 (_soutput_s.c)
 *     _input_s @ 0x18009BBD4 (_input_s.c)
 *     _sinput_s @ 0x18009C494 (_sinput_s.c)
 *     _swoutput_s @ 0x18009C50C (_swoutput_s.c)
 *     _woutput_s @ 0x18009C640 (_woutput_s.c)
 *     _swinput_s @ 0x18009D40C (_swinput_s.c)
 *     _winput_s @ 0x18009D4E0 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009DEC4 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009DF10 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180020E20 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A3110 (RtlCaptureContext.c)
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
