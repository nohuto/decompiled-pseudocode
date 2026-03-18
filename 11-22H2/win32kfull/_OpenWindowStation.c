/*
 * XREFs of _OpenWindowStation @ 0x1C0068374
 * Callers:
 *     xxxResolveDesktop @ 0x1C0067670 (xxxResolveDesktop.c)
 *     NtUserOpenWindowStation @ 0x1C00B9C30 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BEC58 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v6);
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5);
    return 0LL;
  }
  return v6;
}
