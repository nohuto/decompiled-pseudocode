/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800E3580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x18000B7E8 (-SetWindowId@CAudioStream@@QEAAXI@Z.c)
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CAudioStream **v5; // rbp
  CAudioStream **i; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  *((_DWORD *)this + 52) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v5 = (CAudioStream **)*((_QWORD *)this + 15);
  for ( i = (CAudioStream **)*((_QWORD *)this + 14); i != v5; ++i )
    CAudioStream::SetWindowId(*i, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
