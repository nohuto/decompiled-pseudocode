/*
 * XREFs of ExpApplyPrewaitBoost @ 0x1402A7DB0
 * Callers:
 *     ExpAcquireResourceExclusiveLite @ 0x14023B5A0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140263670 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8B30 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x1402A7E50 (PsGetBaseIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyPrewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int BaseIoPriorityThread; // eax
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r9d
  __int64 result; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx

  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), a2, 0LL, a4);
  if ( (BaseIoPriorityThread < 2 && (struct _KTHREAD *)v7 == KeGetCurrentThread() && *(_DWORD *)(v7 + 1440) != v5
     || BaseIoPriorityThread > 1)
    && (*(_BYTE *)(v6 + 26) & 4) == 0 )
  {
    v5 = 4;
  }
  v8 = *(unsigned __int16 *)(v6 + 26);
  result = (unsigned int)*(char *)(v7 + 195);
  v10 = v5 | 2;
  if ( (v8 & 2) != 0 )
    v10 = v5;
  v11 = v10 | 0xFF00;
  if ( (int)result <= (int)(v8 >> 8) )
    v11 = v10;
  if ( (_DWORD)v11 )
    return ExpApplyPriorityBoost(v6, v11, v7);
  return result;
}
