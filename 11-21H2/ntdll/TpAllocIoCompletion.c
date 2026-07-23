/*
 * XREFs of TpAllocIoCompletion @ 0x18007D500
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x18007D6F8 (TpBindFileToDirect.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r12
  unsigned int Flags; // edi
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+8h]

  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22] = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        v11[10] = Callback;
        v11[34] = File;
        *((_DWORD *)v11 + 70) = 0;
        v13 = v11[18];
        v11[32] = TppIopExecuteCallback;
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (_DWORD *)v11 + 66, (_BYTE *)v11 + 268);
          v14 = *((_DWORD *)v11 + 66);
          v15 = *((_BYTE *)v11 + 268);
        }
        else
        {
          *((_DWORD *)v11 + 66) = 0;
          *((_BYTE *)v11 + 268) = 0;
          v14 = 0;
          v15 = 0;
        }
        v11[29] = 0LL;
        v11[31] = v11 + 30;
        v11[30] = v11 + 30;
        v11[25] = TppDirectTaskVFuncs;
        *((_DWORD *)v11 + 52) = v14;
        *((_BYTE *)v11 + 212) = v15;
        v12 = TpBindFileToDirect(File, v11 + 25, v11[18]);
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            v11[4] = CallbackEnviron->FinalizationCallback;
          if ( v11[2] )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn, File, Callback);
    return -1073741811;
  }
}
