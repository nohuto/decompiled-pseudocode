/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1C0016FC0
 * Callers:
 *     <none>
 * Callees:
 *     _SetTouchWindowFlags @ 0x1C0017060 (_SetTouchWindowFlags.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r9
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v13 = 1004LL;
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 16) )
      {
        if ( a3 )
        {
          v10 = SetTouchWindowFlags(v6, a2 | 0x10000u);
        }
        else
        {
          v10 = 1;
          InternalRemoveProp(v6, (unsigned __int16)gatomTouchFlags, 1LL);
        }
        goto LABEL_6;
      }
      v13 = 5LL;
    }
    UserSetLastError(v13);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
