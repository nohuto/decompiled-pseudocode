/*
 * XREFs of IaLpssWriteCmdStatus @ 0x14067CBE8
 * Callers:
 *     IaLpssPciSetPower @ 0x14067C818 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(IaLpssCmdStatus, *a1);
  return 0LL;
}
