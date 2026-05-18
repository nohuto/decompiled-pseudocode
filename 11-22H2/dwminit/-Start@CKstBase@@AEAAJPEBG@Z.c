/*
 * XREFs of ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000ABCC
 * Callers:
 *     ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x18000A980 (-Reset@CKstBase@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059F0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetThreadDescriptionHelper@@YAJPEAXPEBG@Z @ 0x180007AB4 (-SetThreadDescriptionHelper@@YAJPEAXPEBG@Z.c)
 */

__int64 __fastcall CKstBase::Start(CKstBase *this, const unsigned __int16 *a2)
{
  char *v2; // rsi
  char *Thread; // rbx
  void *v4; // rbp
  DWORD LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this + 16;
  Thread = (char *)CreateThread(
                     0LL,
                     0LL,
                     (LPTHREAD_START_ROUTINE)CKstBase::RunKernelThreadStatic,
                     this,
                     4u,
                     (LPDWORD)&v9);
  if ( v2 == &v8 )
  {
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
  }
  else
  {
    v4 = *(void **)v2;
    if ( (unsigned __int64)(*(_QWORD *)v2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v4);
      SetLastError(LastError);
    }
    *(_QWORD *)v2 = Thread;
  }
  if ( *(_QWORD *)v2 )
  {
    SetThreadDescriptionHelper(*(HANDLE *)v2, L"WinLogon Kernel Sensor Thread");
    SetThreadPriority(*(HANDLE *)v2, 16);
    ResumeThread(*(HANDLE *)v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
