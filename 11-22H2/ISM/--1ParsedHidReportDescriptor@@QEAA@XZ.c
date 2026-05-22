/*
 * XREFs of ??1ParsedHidReportDescriptor@@QEAA@XZ @ 0x1800FF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x1800574E4 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180057680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall ParsedHidReportDescriptor::~ParsedHidReportDescriptor(ParsedHidReportDescriptor *this)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = v1 - 8;
    `eh vector destructor iterator'(
      v1,
      72LL,
      *((_QWORD *)v1 - 1),
      (void (*)(void *))std::_Ref_count_base::~_Ref_count_base);
    operator delete[](v2);
  }
}
