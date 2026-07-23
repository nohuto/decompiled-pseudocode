/*
 * XREFs of _invalid_parameter @ 0x18008EEB8
 * Callers:
 *     _lfind @ 0x180090140 (_lfind.c)
 *     _snprintf @ 0x1800902E0 (_snprintf.c)
 *     _snwprintf @ 0x180090390 (_snwprintf.c)
 *     _splitpath_helper @ 0x180090500 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180090810 (_strlwr_s.c)
 *     _strupr @ 0x1800908F0 (_strupr.c)
 *     _strupr_s @ 0x180090940 (_strupr_s.c)
 *     swprintf @ 0x1800909B0 (swprintf.c)
 *     _vscprintf_helper @ 0x180090A8C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x180090AEC (_vsprintf_l.c)
 *     _vscwprintf_helper @ 0x180090BAC (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x180090C24 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180090CEC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180090DBC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180090F10 (_wcslwr.c)
 *     _wcslwr_s @ 0x180090F70 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180091060 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180091100 (_wcsset_s.c)
 *     wcstoxq @ 0x1800911D4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180091470 (_wcsupr_s.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 *     bsearch_s @ 0x180092030 (bsearch_s.c)
 *     qsort @ 0x1800933F0 (qsort.c)
 *     qsort_s @ 0x180093790 (qsort_s.c)
 *     sprintf @ 0x180093B60 (sprintf.c)
 *     vscan_fn @ 0x180093D3C (vscan_fn.c)
 *     strtoxlX @ 0x180094888 (strtoxlX.c)
 *     wcstoxlX @ 0x1800954A0 (wcstoxlX.c)
 *     strtoxq @ 0x1800959A0 (strtoxq.c)
 *     _output_l @ 0x180095C20 (_output_l.c)
 *     _woutput_l @ 0x1800965C0 (_woutput_l.c)
 *     _input_l @ 0x180098BD0 (_input_l.c)
 *     _wctomb_s_l @ 0x1800994B8 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180099584 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180099674 (_ungetc_nolock.c)
 *     x64toa_s @ 0x1800997EC (x64toa_s.c)
 *     xtoa_s @ 0x18009992C (xtoa_s.c)
 *     x64tow_s @ 0x180099B0C (x64tow_s.c)
 *     xtow_s @ 0x180099C5C (xtow_s.c)
 *     _makepath_s @ 0x180099DB0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180099F40 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180099FE0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18009A050 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18009A100 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18009A140 (_splitpath_s.c)
 *     _strnset_s @ 0x18009A3E0 (_strnset_s.c)
 *     _strset_s @ 0x18009A470 (_strset_s.c)
 *     _wmakepath_s @ 0x18009A4D0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18009A660 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009A920 (memcpy_s.c)
 *     memmove_s @ 0x18009A9C0 (memmove_s.c)
 *     vsprintf_s @ 0x18009AA50 (vsprintf_s.c)
 *     sscanf_s @ 0x18009AAA0 (sscanf_s.c)
 *     strcat_s @ 0x18009AB00 (strcat_s.c)
 *     strcpy_s @ 0x18009AB90 (strcpy_s.c)
 *     strncat_s @ 0x18009AC20 (strncat_s.c)
 *     strncpy_s @ 0x18009AD20 (strncpy_s.c)
 *     strtok_s @ 0x18009AE20 (strtok_s.c)
 *     vswprintf_s @ 0x18009AFC0 (vswprintf_s.c)
 *     swscanf_s @ 0x18009B020 (swscanf_s.c)
 *     wcscat_s @ 0x18009B080 (wcscat_s.c)
 *     wcscpy_s @ 0x18009B120 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009B1B0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009B2C0 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009B3D0 (wcstok_s.c)
 *     _output_s @ 0x18009B4D4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009BD98 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009BE74 (_soutput_s.c)
 *     _input_s @ 0x18009C3D4 (_input_s.c)
 *     _sinput_s @ 0x18009CC94 (_sinput_s.c)
 *     _swoutput_s @ 0x18009CD0C (_swoutput_s.c)
 *     _woutput_s @ 0x18009CE40 (_woutput_s.c)
 *     _swinput_s @ 0x18009DC0C (_swinput_s.c)
 *     _winput_s @ 0x18009DCE0 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009E6C4 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009E710 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020780 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180020C40 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A51D0 (RtlCaptureContext.c)
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
