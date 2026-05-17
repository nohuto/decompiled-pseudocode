/*
 * XREFs of TppAllocAlpcCompletion @ 0x180081594
 * Callers:
 *     TpAllocAlpcCompletion @ 0x180081460 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x180081570 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x1800A5200 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(
        _PEB_LDR_DATA *Ldr,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  _PEB_LDR_DATA *v8; // r13
  unsigned int v9; // ebx
  __int64 Heap; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _PEB_LDR_DATA *v18; // rcx
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  volatile signed __int32 *v21; // r8
  unsigned __int64 v22; // r9
  int v24; // [rsp+30h] [rbp-48h]
  _QWORD v25[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 296LL);
  v11 = Heap;
  v27 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v24 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) &= ~1u;
      *(_DWORD *)(v11 + 288) |= a6 != 0;
      *(_QWORD *)(v11 + 272) = a2;
      v17 = *(_QWORD *)(v11 + 216);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      if ( v17 )
      {
        TppGetCurrentThreadNumaNode(v17, (_DWORD *)(v11 + 64), (_BYTE *)(v11 + 68));
        v18 = (_PEB_LDR_DATA *)*(unsigned int *)(v11 + 64);
        LOBYTE(v13) = *(_BYTE *)(v11 + 68);
      }
      else
      {
        *(_DWORD *)(v11 + 64) = 0;
        *(_BYTE *)(v11 + 68) = 0;
        v18 = 0LL;
        LOBYTE(v13) = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = (_DWORD)v18;
      *(_BYTE *)(v11 + 12) = v13;
      v19 = *(_QWORD *)(v11 + 216);
      if ( v19 )
      {
        v18 = NtCurrentPeb()->Ldr;
        if ( !v18->ShutdownInProgress )
        {
          v25[1] = *(_QWORD *)(v19 + 64);
          v11 = v27;
          v25[0] = v27;
          v14 = NtAlpcSetInformation(a2, 2LL, v25);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v27;
      }
      TppRaiseInvalidParameter(v18, v13, v15, v16);
      v14 = -1073741811;
LABEL_16:
      v24 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v24 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12, v20, (unsigned __int64)v21, v22);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12, v20, v21, v22);
    }
  }
  else
  {
    v14 = -1073741801;
    v24 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v27);
    v11 = 0LL;
    v14 = v24;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
