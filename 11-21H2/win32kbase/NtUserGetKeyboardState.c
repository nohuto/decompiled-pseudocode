/*
 * XREFs of NtUserGetKeyboardState @ 0x1C0030120
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     IsKeyStateCached @ 0x1C002CFA0 (IsKeyStateCached.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C003D084 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0097FB4 (ApiSetEditionIsGetKeyStateBlocked.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  struct tagTHREADINFO *ThreadWin32Thread; // rdi
  bool v2; // r14
  _BYTE *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int8 v9; // si
  int v10; // r15d
  _BYTE *v11; // rdi
  int v12; // r11d
  unsigned __int8 v13; // r10

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v2 = (unsigned int)ApiSetEditionIsGetKeyStateBlocked() == 0;
  if ( v2 && !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, 3);
    v2 = 0;
  }
  v3 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_BYTE *)MmUserProbeAddress;
  *v3 = *v3;
  v3[255] = v3[255];
  v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  v9 = 0;
  v10 = 0;
  v11 = (_BYTE *)a1;
  while ( v10 < 256 )
  {
    *v11 = 0;
    if ( v2 || IsKeyStateCached(v9) )
    {
      v12 = v9 & 3;
      v7 = (unsigned __int64)v9 >> 2;
      v13 = *(_BYTE *)(v7 + v8 + 228);
      v6 = 0LL;
      if ( ((unsigned __int8)(1 << (2 * v12)) & v13) != 0 )
      {
        *v11 = 0x80;
        v6 = 128LL;
        v13 = *(_BYTE *)(v7 + v8 + 228);
      }
      v5 = (unsigned int)(2 * v12 + 1);
      v4 = (unsigned int)(1 << (2 * v12 + 1));
      if ( ((unsigned __int8)v4 & v13) != 0 )
      {
        LOBYTE(v6) = v6 | 1;
        *v11 = v6;
      }
    }
    v9 = v10 + 1;
    ++v11;
    ++v10;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return 1LL;
}
