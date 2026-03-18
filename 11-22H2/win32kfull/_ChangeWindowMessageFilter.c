/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C004F62C
 * Callers:
 *     NtUserChangeWindowMessageFilter @ 0x1C004F5E0 (NtUserChangeWindowMessageFilter.c)
 * Callees:
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C004F9EC (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C004FAD4 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0050B34 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !(unsigned __int8)Enforced() )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)v6, v4) )
    return 0LL;
  if ( a2 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(v6 + 864), v4, 0LL);
  }
  else if ( a2 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(v6 + 864), v4, &v8);
    if ( v2 )
    {
      if ( v8 )
      {
        UserSetLastError(87LL);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v2;
}
