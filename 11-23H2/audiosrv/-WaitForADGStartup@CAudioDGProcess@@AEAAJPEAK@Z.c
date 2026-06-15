/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180047E74
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180047DB8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E4C0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x1800CE810 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

unsigned int __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this, unsigned int *a2)
{
  void *v4; // rcx
  void *v5; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const char *v9; // r9
  const char *v10; // r9
  unsigned int v11; // [rsp+20h] [rbp-28h]
  HANDLE v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 11);
  if ( (((unsigned __int64)v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2004287472;
    v8 = 181LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)v7);
    return v7;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  v12[1] = v4;
  v12[0] = v5;
  if ( WaitForMultipleObjectsEx(2u, v12, 0, 0xFFFFFFFF, 0) != 1 )
    return 0;
  if ( !GetExitCodeProcess(*((HANDLE *)this + 11), a2) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC1,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
             v9);
  v10 = (const char *)*a2;
  if ( (_DWORD)v10 == -1073740760 )
  {
    v7 = -2147024319;
    v8 = 195LL;
    goto LABEL_6;
  }
  if ( !(_DWORD)v10 )
    return 0;
  return wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0xC7,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
           v10,
           v11);
}
