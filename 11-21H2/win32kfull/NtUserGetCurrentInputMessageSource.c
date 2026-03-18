/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C00F3810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F38F4 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  int CurrentInputMessageSource; // edi
  int v8; // edx
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v12 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v12);
    if ( CurrentInputMessageSource )
    {
      v8 = v12;
      v9 = (unsigned int)(v12 - 18);
      if ( (v9 & 0xFFFFFFEF) == 0 )
        v8 = 2;
      LODWORD(v12) = v8;
      if ( PsGetCurrentProcessWow64Process(v9) )
      {
        v13 = 1LL;
      }
      else
      {
        v13 = 4LL;
        v4 = 3LL;
      }
      if ( (v4 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = MmUserProbeAddress;
      v10 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v10 = (_BYTE *)MmUserProbeAddress;
      *v10 = *v10;
      v10[7] = v10[7];
      *(_QWORD *)a1 = v12;
    }
  }
  else
  {
    UserSetLastError(87LL, v5);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return CurrentInputMessageSource;
}
