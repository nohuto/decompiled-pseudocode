/*
 * XREFs of NtUserGetWindowDC @ 0x1C00B04A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetWindowDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterSharedCrit(a1, a2, a3);
  DCEx = 0LL;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    DCEx = _GetDCEx(v5, 0LL, 65537LL);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return DCEx;
}
