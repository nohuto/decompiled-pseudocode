/*
 * XREFs of TpAllocIoCompletion @ 0x18004BD00
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     TppCleanupGroupAddMember @ 0x1800610A0 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
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
  char *Heap; // rax
  char *v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // r14
  char *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char *BaseAddress; // [rsp+70h] [rbp+8h]

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
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *((_QWORD *)v11 + 10) = Callback;
        *((_QWORD *)v11 + 34) = File;
        *((_DWORD *)v11 + 70) = 0;
        v13 = *((_QWORD *)v11 + 18);
        *((_QWORD *)v11 + 32) = TppIopExecuteCallback;
        v14 = v11 + 264;
        v15 = v11 + 268;
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (int *)v11 + 66, v11 + 268, 0LL);
        }
        else
        {
          *v14 = 0;
          *v15 = 0;
        }
        *((_QWORD *)v11 + 29) = 0LL;
        *((_QWORD *)v11 + 31) = v11 + 240;
        *((_QWORD *)v11 + 30) = v11 + 240;
        *((_QWORD *)v11 + 25) = TppDirectTaskVFuncs;
        *((_DWORD *)v11 + 52) = *v14;
        v11[212] = *v15;
        v12 = TpBindFileToDirect(File, (__int64)(v11 + 200), *((_PEB_LDR_DATA **)v11 + 18));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *((_QWORD *)v11 + 4) = CallbackEnviron->FinalizationCallback;
          if ( *((_QWORD *)v11 + 2) )
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
