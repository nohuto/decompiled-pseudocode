/*
 * XREFs of NtUserGetDCEx @ 0x1C01016B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 DCEx; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = a3;
  EnterSharedCrit(a1, a2, a3);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (v3 & 0xFFDAF800) != 0 )
  {
    v12 = 87LL;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    v8 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL)
                    + 24LL) & 1) == 0 )
    {
      goto LABEL_6;
    }
    v11 = v8 ? *v8 : 0LL;
    if ( ValidateHwnd(v11) )
      goto LABEL_6;
    v12 = 5LL;
LABEL_23:
    DCEx = 0LL;
    UserSetLastError(v12, v6);
    goto LABEL_9;
  }
  v8 = (_QWORD *)ValidateHwnd(a1);
  if ( !v8 )
  {
    DCEx = 0LL;
    goto LABEL_9;
  }
LABEL_6:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v8, a2, v3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v7);
  return DCEx;
}
