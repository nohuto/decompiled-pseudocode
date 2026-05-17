/*
 * XREFs of RtlReleasePrivilege @ 0x180086900
 * Callers:
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x1800A4890 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  int v2; // ecx
  __int64 v3; // r8
  HANDLE v5; // rcx

  v2 = *((_DWORD *)a1 + 8);
  if ( (v2 & 3) != 1 )
  {
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
    v2 = *((_DWORD *)a1 + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1, 8LL);
    v5 = a1[1];
    if ( v5 )
      NtClose(v5);
  }
  v3 = (__int64)a1[2];
  if ( (HANDLE *)v3 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
