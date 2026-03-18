/*
 * XREFs of _ImpersonateDdeClientWindow @ 0x1C01FB098
 * Callers:
 *     NtUserImpersonateDdeClientWindow @ 0x1C01D4F40 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F997C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImpersonateDdeClientWindow(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  struct tagDDECONV *DdeConv; // rax
  __int64 v5; // rcx
  int v6; // eax
  ULONG v7; // eax

  DdeConv = FindDdeConv(a1, a2, a3, a4);
  if ( !DdeConv )
    return 0LL;
  v5 = *((_QWORD *)DdeConv + 11);
  if ( !v5 )
    return 0LL;
  v6 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(v5 + 16), KeGetCurrentThread());
  if ( v6 < 0 )
  {
    v7 = RtlNtStatusToDosError(v6);
    UserSetLastError(v7);
    return 0LL;
  }
  return 1LL;
}
