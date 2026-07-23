/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x1800818D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A5E30 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64IsWowGuestMachineSupported(USHORT NativeMachine, PBOOLEAN IsWowGuestMachineSupported)
{
  BOOLEAN v2; // bl
  int v3; // r14d
  NTSTATUS v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  ULONG v11; // eax
  int v12; // r8d
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v3 = NativeMachine;
  InputBuffer = 0LL;
  v5 = NtQuerySystemInformationEx(SystemSupportedProcessorArchitectures2, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = SystemInformation[0] + 15LL;
    if ( v7 <= SystemInformation[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v6 >= 0 )
    {
      v11 = SystemInformation[0];
      v12 = 0;
      while ( (_WORD)v11 )
      {
        if ( (unsigned __int16)v11 == v3 && (v11 & 0x160000) == 0x120000 )
        {
          v2 = 1;
          break;
        }
        v11 = SystemInformation[++v12];
      }
      *IsWowGuestMachineSupported = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return -1073741823;
  }
  return v6;
}
