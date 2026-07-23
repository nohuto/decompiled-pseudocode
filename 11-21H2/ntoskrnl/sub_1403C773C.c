/*
 * XREFs of sub_1403C773C @ 0x1403C773C
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140832440 (PsSetCreateThreadNotifyRoutineEx.c)
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     sub_14096C8B0 @ 0x14096C8B0 (sub_14096C8B0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 */

__int64 __fastcall sub_1403C773C(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax

  if ( (unsigned int)sub_14027B080(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = sub_1402FDA80(a1, 0);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)CurrentThread);
  return v5;
}
