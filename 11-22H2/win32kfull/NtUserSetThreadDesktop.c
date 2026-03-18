/*
 * XREFs of NtUserSetThreadDesktop @ 0x1C006C830
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(_BOOL8 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // r8
  ULONG v13; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 1;
  v5 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v5 < 0 )
  {
    if ( a1 || PsGetCurrentProcess(v4, v3, v6) != gpepCSRSS )
    {
      a1 = 0LL;
      goto LABEL_9;
    }
    v5 = xxxSetThreadDesktop(0LL, 0LL, v12);
    LOBYTE(a1) = v5 >= 0;
  }
  else
  {
    v5 = xxxSetThreadDesktop(a1, (__int64)Object, v6);
    a1 = v5 >= 0;
    ObfDereferenceObject(Object);
  }
  if ( v5 < 0 )
  {
LABEL_9:
    v13 = RtlNtStatusToDosError(v5);
    UserSetLastError(v13);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return a1;
}
