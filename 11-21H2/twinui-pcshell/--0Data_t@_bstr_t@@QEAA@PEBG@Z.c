/*
 * XREFs of ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180316F18
 * Callers:
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1803170A4 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1805E5680 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D9E14 (-_com_issue_error@@YAXJ@Z.c)
 */

_bstr_t::Data_t *__fastcall _bstr_t::Data_t::Data_t(_bstr_t::Data_t *this, const unsigned __int16 *a2)
{
  BSTR v4; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 1;
  v4 = SysAllocString(a2);
  *(_QWORD *)this = v4;
  if ( !v4 && a2 )
    _com_issue_error((char *)0x8007000ELL);
  return this;
}
