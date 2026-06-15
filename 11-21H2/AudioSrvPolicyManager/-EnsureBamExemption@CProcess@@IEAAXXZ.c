/*
 * XREFs of ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180016A40
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180015D88 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 */

void __fastcall CProcess::EnsureBamExemption(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rsi
  char *v4; // rbp
  __int64 v5; // r14
  DWORD LastError; // ebx

  CProcess::CancelDeferredBamExemptionRelease(this);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 536);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  v3 = (_QWORD *)((char *)this + 576);
  v4 = (char *)*((_QWORD *)this + 72);
  if ( ((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = *((_QWORD *)this + 19);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v4);
      SetLastError(LastError);
    }
    *v3 = 0LL;
    NtAcquireProcessActivityReference(v3, v5, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
