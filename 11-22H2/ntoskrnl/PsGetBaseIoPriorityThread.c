/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x1402A7AA0
 * Callers:
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x1402A7980 (IopSetIrpPriorityHintFromFileObject.c)
 *     ExpApplyPrewaitBoost @ 0x1402A7A00 (ExpApplyPrewaitBoost.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318C48 (KiAbSetMinimumThreadPriority.c)
 *     ExpBoostIoAfterAcquire @ 0x14031ACD0 (ExpBoostIoAfterAcquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1068);
    if ( (int)result >= v3 )
      return (unsigned int)v3;
  }
  return result;
}
