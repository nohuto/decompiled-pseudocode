/*
 * XREFs of NtUserSetThreadDesktop @ 0x1C00AD6E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(_BOOL8 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONG v8; // eax
  __int64 v9; // rdx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 1;
  v5 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v5 < 0 )
  {
    if ( a1 || PsGetCurrentProcess(v4, v3) != gpepCSRSS )
    {
      a1 = 0LL;
      goto LABEL_5;
    }
    v5 = xxxSetThreadDesktop(0LL, 0LL);
    LOBYTE(a1) = v5 >= 0;
  }
  else
  {
    v5 = xxxSetThreadDesktop((void *)a1, (__int64)Object);
    a1 = v5 >= 0;
    ObfDereferenceObject(Object);
  }
  if ( v5 < 0 )
  {
LABEL_5:
    v8 = RtlNtStatusToDosError(v5);
    UserSetLastError(v8, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return a1;
}
