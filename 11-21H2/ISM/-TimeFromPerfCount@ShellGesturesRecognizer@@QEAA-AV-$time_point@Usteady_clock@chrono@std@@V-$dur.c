/*
 * XREFs of ?TimeFromPerfCount@ShellGesturesRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18014EE70
 * Callers:
 *     ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18014EEC8 (-UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007EE54 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1800B46B4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

_QWORD *__fastcall ShellGesturesRecognizer::TimeFromPerfCount(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(a1 + 184), a3, &v7) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0xCF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor"
                    "\\shellgesturesrecognizer.cpp",
      v4);
  *a2 = 1000 * v7;
  return a2;
}
