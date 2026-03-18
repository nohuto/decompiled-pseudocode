/*
 * XREFs of PopPluginComponentIdleState @ 0x14045DEFE
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x14045DD10 (PoFxCompleteIdleState.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopPepNotifyIdleState @ 0x14045E5E0 (PopPepNotifyIdleState.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 result; // rax

  if ( a4 )
    memset(a4, 0, 0x40uLL);
  result = PopPepNotifyIdleState(*(_QWORD *)(a1 + 56), a2, a3, a4);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
