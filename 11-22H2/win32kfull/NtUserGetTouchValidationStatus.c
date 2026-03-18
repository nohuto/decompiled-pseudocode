/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01D40C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01B2914 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  TouchValidationStatus = 0;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( !a1 || (v5 = HMValidateHandle(a1, 0x13u)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v5);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return TouchValidationStatus;
}
