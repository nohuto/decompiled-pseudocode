/*
 * XREFs of ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000912C
 * Callers:
 *     ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x180008EE8 (-Reset@CKstBase@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x180003FFC (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005DE8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetThreadDescriptionHelper@@YAJPEAXPEBG@Z @ 0x180005E0C (-SetThreadDescriptionHelper@@YAJPEAXPEBG@Z.c)
 */

__int64 __fastcall CKstBase::Start(CKstBase *this, const unsigned __int16 *a2)
{
  HANDLE *v2; // rsi
  char *Thread; // rbx
  DWORD LastError; // eax
  DWORD v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *ThreadId; // [rsp+58h] [rbp+10h] BYREF
  BOOL (__stdcall *v10)(HANDLE); // [rsp+60h] [rbp+18h] BYREF

  ThreadId = a2;
  v2 = (HANDLE *)((char *)this + 16);
  Thread = (char *)CreateThread(
                     0LL,
                     0LL,
                     (LPTHREAD_START_ROUTINE)CKstBase::RunKernelThreadStatic,
                     this,
                     4u,
                     (LPDWORD)&ThreadId);
  if ( v2 == (HANDLE *)&v8 )
  {
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v10 = CloseHandle;
      v8 = Thread;
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v10, &v8);
    }
  }
  else
  {
    if ( (char *)*v2 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v8 = (char *)*v2;
      LastError = GetLastError();
      v10 = CloseHandle;
      v5 = LastError;
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v10, &v8);
      SetLastError(v5);
    }
    *v2 = Thread;
  }
  if ( *v2 )
  {
    SetThreadDescriptionHelper(*v2, L"WinLogon Kernel Sensor Thread");
    SetThreadPriority(*v2, 16);
    ResumeThread(*v2);
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
