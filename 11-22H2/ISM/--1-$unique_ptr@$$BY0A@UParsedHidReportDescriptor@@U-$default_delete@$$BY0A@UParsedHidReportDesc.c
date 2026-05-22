/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800FF1F0
 * Callers:
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$2 @ 0x180100043 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x1800574E4 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180057680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(char **a1)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = *a1;
  if ( v1 )
  {
    v2 = v1 - 8;
    `eh vector destructor iterator'(
      v1,
      24LL,
      *((_QWORD *)v1 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[](v2);
  }
}
