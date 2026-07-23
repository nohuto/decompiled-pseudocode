/*
 * XREFs of KdpReportExceptionStateChange @ 0x140AB163C
 * Callers:
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 *     KdpReport @ 0x14030EB04 (KdpReport.c)
 * Callees:
 *     KdpSetCommonState @ 0x14033F3EC (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x140AB0BD4 (KdpSetContextState.c)
 *     KdpQuickMoveMemory @ 0x140AB1918 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[60]; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(&v10[8], a1, 152LL);
    v10[46] = a3 == 0;
    KdpSetContextState((__int64)v10, a2);
    LOWORD(v8) = 240;
    *((_QWORD *)&v8 + 1) = v10;
    LOWORD(v9) = 0;
    result = KdpSendWaitContinue(v6, (__int64)&v8, (__int64)&v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
