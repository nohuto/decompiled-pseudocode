/*
 * XREFs of ??0CIAMGlobals@@QEAA@XZ @ 0x1801AAD08
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800F9DB4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ??0CReportWindowVisibilityChange@@QEAA@XZ @ 0x1801AADD8 (--0CReportWindowVisibilityChange@@QEAA@XZ.c)
 */

CIAMGlobals *__fastcall CIAMGlobals::CIAMGlobals(CIAMGlobals *this)
{
  __int64 v2; // rcx
  int UniqueContext; // eax
  __int64 v4; // rcx
  int v5; // eax

  *(_QWORD *)this = 0LL;
  CReportWindowVisibilityChange::CReportWindowVisibilityChange((CIAMGlobals *)((char *)this + 8));
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  *((_DWORD *)this + 23) = GetCurrentProcessId();
  *((_QWORD *)this + 12) = GetShellWindow();
  UniqueContext = SHTaskPoolGetUniqueContext(v2);
  *((_WORD *)this + 54) = 0;
  *((_DWORD *)this + 26) = UniqueContext;
  *((_QWORD *)this + 14) = 0LL;
  v5 = SHTaskPoolGetUniqueContext(v4);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 30) = v5;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_WORD *)this + 55) = GlobalAddAtomW(L"IAMWindowPropertyIndexBehaviorFlags");
  return this;
}
