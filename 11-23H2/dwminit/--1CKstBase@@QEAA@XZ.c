/*
 * XREFs of ??1CKstBase@@QEAA@XZ @ 0x18000EB5C
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x18000C750 (DwmpShutdownWinlogonMouseThread.c)
 *     DwmpStartWinlogonMouseThread @ 0x18000C860 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009A20 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x18000F600 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CKstBase::~CKstBase(CKstBase *this)
{
  void *v2; // rcx
  const char *v3; // r9
  char *v4; // rcx
  void *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CKstBase::`vftable';
  CKstBase::Stop(this);
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 && !CloseHandle(v2) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x937,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  v4 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    if ( !CloseHandle(v5) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x937,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v6);
  }
}
