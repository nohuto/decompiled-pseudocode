/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0116700
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SetGestureConfigSettings @ 0x1C0116A34 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  struct tagWND *v9; // rsi
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v22; // rcx
  _BYTE v23[24]; // [rsp+30h] [rbp-58h] BYREF
  void *v24; // [rsp+48h] [rbp-40h]
  __int128 v25; // [rsp+58h] [rbp-30h] BYREF
  __int64 v26; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  v11 = 0;
  if ( v9 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v9;
    HMLockObject(v9);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v13 = *((_QWORD *)v9 + 5);
      if ( *(char *)(v13 + 20) >= 0
        && *(char *)(v13 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) )
      {
        v15 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)(12 * v6), 1667724117LL);
        v24 = v15;
        if ( v15 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v15, (const void *)a4, (unsigned int)(12 * v6));
          v11 = SetGestureConfigSettings(v9);
          Win32FreePool(v15);
LABEL_10:
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_11;
        }
        v22 = 8LL;
      }
      else
      {
        v22 = 1400LL;
      }
    }
    else
    {
      v22 = 87LL;
    }
    UserSetLastError(v22, v12);
    goto LABEL_10;
  }
LABEL_11:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23, v8, v10);
  UserSessionSwitchLeaveCrit(v20);
  return v11;
}
