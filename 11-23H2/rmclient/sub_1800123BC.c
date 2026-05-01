/*
 * XREFs of sub_1800123BC @ 0x1800123BC
 * Callers:
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800123BC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 64) )
    return TpReleaseWork();
  return result;
}
