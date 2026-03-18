/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C01FD470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C024FCA0 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rdi
  char v7; // r14
  int v8; // esi
  __int64 v9; // rcx
  struct InteractiveControlManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+80h] [rbp+18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = 0;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v8 = *(_DWORD *)(ThreadWin32Thread + 1508);
    v7 = 1;
    *(_DWORD *)(ThreadWin32Thread + 1508) = 0;
  }
  else
  {
    v8 = v17;
  }
  if ( !a3 || (a3 = ValidateHwnd(a3)) != 0 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = a3;
    if ( a3 )
      HMLockObject(a3);
    v10 = InteractiveControlManager::Instance();
    a3 = (int)InteractiveControlManager::SetDeviceFocus(v10, a1, a2, a3, v15, *((_QWORD *)&v15 + 1), v16) >= 0;
    ThreadUnlock1(v12, v11, v13);
  }
  if ( v7 )
    *(_DWORD *)(ThreadWin32Thread + 1508) = v8;
  UserSessionSwitchLeaveCrit(v9);
  return a3;
}
