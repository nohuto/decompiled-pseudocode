/*
 * XREFs of NtUserUpdateInstance @ 0x1C0200160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C010D918 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  _DWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v6 = 0;
  v7 = 0;
  EnterCrit(0LL, 0LL);
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v9 = HMValidateHandleNoRip(a1, 9);
  if ( v9 )
  {
    xxxChangeMonitorFlags(v9, a3);
    v7 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
  }
  *a2 = v7;
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
