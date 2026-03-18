/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01FC760
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     _SetCalibrationData @ 0x1C01D1854 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v20; // rax
  __int64 v21; // rcx
  _DWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v24[2]; // [rsp+28h] [rbp-30h] BYREF
  void *v25; // [rsp+30h] [rbp-28h]
  char v26; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  v25 = 0LL;
  v24[0] = 0x2000;
  v24[1] = -1;
  v23[0] = 12288;
  v23[1] = -1;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_28;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_28;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_28;
  }
  if ( a4 == 3 )
  {
    if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v24) )
      goto LABEL_10;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v23) )
  {
LABEL_10:
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 11LL);
    v10 = 5LL;
LABEL_29:
    v14 = 0;
    UserSetLastError(v10, v9);
    goto LABEL_30;
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_28:
    v10 = 87LL;
    goto LABEL_29;
  }
  v11 = HMValidateHandle(a1, 0x13u);
  v13 = v11;
  if ( !v11 )
  {
LABEL_24:
    UserSetLastError(6LL, v12);
    v14 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x2000) == 0 )
  {
    v18 = *(_QWORD *)(v11 + 472);
    if ( (*(_DWORD *)(v11 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v18 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v20 = (void *)Win32AllocPoolWithQuotaZInit(v6, 1633907541LL);
        v8 = v20;
        v25 = v20;
        if ( !v20 )
          ExRaiseStatus(-1073741801);
        memmove(v20, (const void *)a3, v6);
      }
      v14 = SetCalibrationData(v13, v6, v8, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6LL, v12);
  v14 = 0;
  UserSetLastError(0LL, v15);
LABEL_25:
  if ( v8 && !v14 )
    Win32FreePool(v8);
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26, v16, v17);
  UserSessionSwitchLeaveCrit(v21);
  return v14;
}
