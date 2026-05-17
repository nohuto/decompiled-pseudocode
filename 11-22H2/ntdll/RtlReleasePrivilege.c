/*
 * XREFs of RtlReleasePrivilege @ 0x180081B20
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002C6F4 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x18012B6DC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012B838 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x18009F610 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  __int64 v2; // r8
  HANDLE v4; // rcx

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2]);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1);
    v4 = a1[1];
    if ( v4 )
      NtClose(v4);
  }
  v2 = (__int64)a1[2];
  if ( (HANDLE *)v2 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
