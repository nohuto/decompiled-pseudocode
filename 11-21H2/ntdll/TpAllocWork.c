/*
 * XREFs of TpAllocWork @ 0x18001F6F0
 * Callers:
 *     RtlpFcAllocateChangeRegistration @ 0x18005997C (RtlpFcAllocateChangeRegistration.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     RtlpCtContextInit @ 0x18010EE94 (RtlpCtContextInit.c)
 * Callees:
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_WORK *v7; // r14
  unsigned int Flags; // edi
  _TP_WORK *Heap; // rax
  _TP_WORK *v10; // rbx
  NTSTATUS v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  _TP_WORK *BaseAddress; // [rsp+88h] [rbp+20h]

  v7 = WorkReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn
    || !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (WorkReturn = (PTP_WORK *)NtCurrentPeb()->Ldr, *((_BYTE *)WorkReturn + 72)) )
  {
    TppRaiseInvalidParameter(WorkReturn, Callback, Context);
    return -1073741811;
  }
  else
  {
    *v7 = 0LL;
    Heap = (_TP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v11 = TppWorkInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppWorkpCleanupGroupMemberVFuncs,
              (__int64)&TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)v10 + 10) = Callback;
        v11 = 0;
        v13 = 0;
        if ( CallbackEnviron )
          *((_QWORD *)v10 + 4) = CallbackEnviron->FinalizationCallback;
        if ( *((_QWORD *)v10 + 2) )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *v7 = v10;
    return v11;
  }
}
