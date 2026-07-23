/*
 * XREFs of TpSimpleTryPost @ 0x180033060
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x180033354 (TppWorkInitialize.c)
 *     TppWorkPost @ 0x180035318 (TppWorkPost.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x18005B8D0 (TppCleanupGroupAddMember.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  PTP_SIMPLE_CALLBACK v5; // r14
  unsigned int Flags; // edi
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  NTSTATUS v9; // edi
  int v11; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+18h]

  v4 = (int)Context;
  v5 = Callback;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (Callback = (PTP_SIMPLE_CALLBACK)NtCurrentPeb()->Ldr, *((_BYTE *)Callback + 72)) )
  {
    TppRaiseInvalidParameter(Callback, Context, CallbackEnviron);
    return -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22] = retaddr;
      v9 = TppWorkInitialize(
             (_DWORD)Heap,
             v4,
             (_DWORD)CallbackEnviron,
             Flags,
             (__int64)TppSimplepCleanupGroupMemberVFuncs,
             (__int64)&TppSimplepTaskVFuncs);
      v11 = v9;
      if ( v9 >= 0 )
      {
        v9 = 0;
        v11 = 0;
        v8[10] = v5;
        if ( CallbackEnviron )
          v8[4] = CallbackEnviron->FinalizationCallback;
        if ( v8[2] )
          TppCleanupGroupAddMember(v8);
      }
    }
    else
    {
      v9 = -1073741801;
      v11 = -1073741801;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v8 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v8 = 0LL;
      v9 = v11;
    }
    if ( v9 >= 0 )
LABEL_15:
      TppWorkPost(v8);
    return v9;
  }
}
