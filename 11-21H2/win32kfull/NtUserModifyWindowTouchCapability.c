/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1C01FA640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _SetTouchWindowFlags @ 0x1C01D73AC (_SetTouchWindowFlags.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // edx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v10 = 1004LL;
LABEL_4:
      UserSetLastError(v10, v7);
      goto LABEL_11;
    }
    if ( gptiCurrent != *(_QWORD *)(v6 + 16) )
    {
      v10 = 5LL;
      goto LABEL_4;
    }
    if ( a3 )
      v11 = a2 | 0x10000;
    else
      v11 = 0;
    v9 = SetTouchWindowFlags(v6, v11);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
