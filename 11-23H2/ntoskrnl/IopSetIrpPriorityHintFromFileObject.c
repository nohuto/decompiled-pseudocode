/*
 * XREFs of IopSetIrpPriorityHintFromFileObject @ 0x1402A7D30
 * Callers:
 *     IopCallDriverReference @ 0x1402A7BD0 (IopCallDriverReference.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x1402A7E50 (PsGetBaseIoPriorityThread.c)
 */

__int64 __fastcall IopSetIrpPriorityHintFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int BaseIoPriorityThread; // edx
  __int64 v6; // r9
  __int64 result; // rax
  int v8; // edx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 && *(_DWORD *)(v3 + 88) )
  {
    result = *(_DWORD *)(v2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(v2 + 16) = result;
    v8 = *(_DWORD *)(v3 + 88) << 17;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread, v3, v2, CurrentThread);
    if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v6 == KeGetCurrentThread() && *(_DWORD *)(v6 + 1440) )
      BaseIoPriorityThread = 2;
    result = *(_DWORD *)(v2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(v2 + 16) = result;
    v8 = (BaseIoPriorityThread << 17) + 0x20000;
  }
  *(_DWORD *)(v2 + 16) = result | v8;
  return result;
}
