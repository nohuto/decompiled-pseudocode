/*
 * XREFs of IopProcessWorkItem @ 0x14031E940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PspRevertContainerImpersonation @ 0x14025A0CC (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x1405FDC60 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  int v1; // ebp
  _WORD *v2; // rsi
  void (__fastcall *v4)(_WORD *, __int64, __int64); // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_WORD **)(a1 + 40);
  v4 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v10 = 0LL;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(a1 + 68) )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v1 = 1;
    v10 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v10;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    PsImpersonateContainerOfThread(v6);
    v7 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1344LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v4(v2, v8, a1);
  }
  else if ( *v2 == 3 )
  {
    ((void (__fastcall *)(_WORD *, __int64))v4)(v2, v8);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, __int64))v4)(0LL, v8);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1345LL);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v1 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v7 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v4, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
