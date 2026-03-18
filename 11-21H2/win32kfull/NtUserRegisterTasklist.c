/*
 * XREFs of NtUserRegisterTasklist @ 0x1C01FBC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterTasklist(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (_QWORD *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v3 = v2[2];
    v4 = 1LL;
    gptiTasklist = v3;
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = *v2;
    *(_DWORD *)(v2[2] + 488LL) |= 0x40u;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
