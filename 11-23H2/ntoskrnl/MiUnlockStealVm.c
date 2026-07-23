/*
 * XREFs of MiUnlockStealVm @ 0x1403BDC60
 * Callers:
 *     MiLockStealSystemVm @ 0x140398C2C (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 * Callees:
 *     MiAttachThreadDone @ 0x140217924 (MiAttachThreadDone.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUnlockSystemVa @ 0x1402EEFF0 (MiUnlockSystemVa.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1, __int64 a2)
{
  void *v3; // rdi

  MiUnlockSystemVa(a1, a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 72));
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), ($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 72));
      ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
    }
  }
}
