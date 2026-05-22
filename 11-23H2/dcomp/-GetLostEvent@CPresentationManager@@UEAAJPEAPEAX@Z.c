/*
 * XREFs of ?GetLostEvent@CPresentationManager@@UEAAJPEAPEAX@Z @ 0x1801AD750
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

__int64 __fastcall CPresentationManager::GetLostEvent(CPresentationManager *this, void **a2)
{
  signed int v4; // ebp
  HANDLE CurrentProcess; // rax
  void *v6; // rdi
  void *v7; // rbx
  HANDLE v8; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v4 = 0;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v6 = (void *)*((_QWORD *)this + 14);
  v7 = CurrentProcess;
  v8 = GetCurrentProcess();
  if ( !DuplicateHandle(v8, v6, v7, a2, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    DoStackCaptureDirect(v4, 0x1B7u);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
