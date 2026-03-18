/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0004F70
 * Callers:
 *     NtUserGetProcessDefaultLayout @ 0x1C0004F30 (NtUserGetProcessDefaultLayout.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rdx

  v2 = 0;
  if ( PsGetCurrentProcess() == gpepCSRSS )
  {
    UserSetLastError(12LL);
  }
  else
  {
    v3 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = *v3;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 824);
    return 1;
  }
  return v2;
}
