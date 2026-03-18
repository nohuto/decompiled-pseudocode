/*
 * XREFs of ExFreeSvmAsid @ 0x140251BDC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpFreeAsid @ 0x140640EE8 (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x140641354 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *ExFreeSvmAsid()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  int Blink; // r14d
  struct _LIST_ENTRY *Flink; // r15
  _LIST_ENTRY *p_ThreadListHead; // rdi
  _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rbx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  Blink = (int)Process[2].Header.WaitListHead.Blink;
  if ( Blink )
  {
    Flink = Process[2].ProfileListHead.Flink;
    p_ThreadListHead = &Process[2].ThreadListHead;
    while ( 1 )
    {
      v5 = p_ThreadListHead->Flink;
      if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead || (v6 = v5->Flink, v5->Flink->Blink != v5) )
        __fastfail(3u);
      p_ThreadListHead->Flink = v6;
      v6->Blink = p_ThreadListHead;
      if ( v5 == p_ThreadListHead )
        break;
      v7 = v5[1].Flink;
      (*(void (__fastcall **)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))(HalIommuDispatch + 48))(Flink, v7[11].Blink);
      ExpSvmDereferenceDevice(v7);
      ExFreePoolWithTag(v5, 0);
    }
    (*(void (__fastcall **)(struct _LIST_ENTRY *))(HalIommuDispatch + 64))(Flink);
    Process[2].ProfileListHead.Flink = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid((unsigned int)(Blink - 1));
  }
  return result;
}
