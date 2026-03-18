/*
 * XREFs of MiInitializeTbFlushStamps @ 0x1402CCC80
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiInitializeTbFlushStamps(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  int v5; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)a1;
  if ( (unsigned int)MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v8 = v1 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v1;
      v1 = v8;
      if ( (v7 & 0x42) != 0 )
        v1 = v8 | 0x42;
    }
  }
  _InterlockedOr(v10, 0);
  if ( v1 && qword_140C50780 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_140C50780 & v1;
  }
  CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v1);
  v4 = (__int64)CurrentThread;
  if ( !v5 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *(_QWORD *)a1 = v4;
    return (char)CurrentThread;
  }
  if ( !HIBYTE(word_140C51864) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  LOBYTE(CurrentThread) = MiWritePteShadow(a1, v4);
  return (char)CurrentThread;
}
