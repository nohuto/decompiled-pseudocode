/*
 * XREFs of ??1CAudioDGProcess@@QEAA@XZ @ 0x1800EEE28
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0510 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CAudioDGProcess::~CAudioDGProcess(CAudioDGProcess *this, void *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  char *v5; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 15);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 14);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
