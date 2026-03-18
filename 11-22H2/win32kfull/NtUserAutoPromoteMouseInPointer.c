/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0153E60
 * Callers:
 *     <none>
 * Callees:
 *     IsMiPEnabledForThread @ 0x1C00A1F58 (IsMiPEnabledForThread.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetMiPPromotion @ 0x1C0150F40 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  struct tagTHREADINFO *v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  if ( IsMiPEnabledForThread(gptiCurrent) && (v3 = (_DWORD *)*((_QWORD *)v2 + 169)) != 0LL && (v4 = 1LL, (*v3 & 1) != 0) )
  {
    SetMiPPromotion(v2, a1);
  }
  else
  {
    UserSetLastError(5);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
