/*
 * XREFs of CrmStateMonitorSebCallback @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorSebCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int128 v8; // [rsp+30h] [rbp-18h]

  v6[1] = 0;
  v6[0] = 1;
  v7 = *a5;
  v8 = 0LL;
  ((void (__fastcall *)(__int64, _DWORD *, __int64, _QWORD))CrmStateMonitorStateSet)(a4, v6, 32LL, 0LL);
  return 0LL;
}
