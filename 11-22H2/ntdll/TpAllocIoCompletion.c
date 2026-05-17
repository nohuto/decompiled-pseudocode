/*
 * XREFs of TpAllocIoCompletion @ 0x18004BE60
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x1800333E4 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x18004BDD4 (TpBindFileToDirect.c)
 *     TppCleanupGroupAddMember @ 0x18005B8D0 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocIoCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _PEB_LDR_DATA *v8; // r12
  unsigned int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r14
  _BYTE *v16; // r15
  __int64 v17; // rdx
  volatile signed __int32 *v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v23; // [rsp+70h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( Ldr && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    *(_QWORD *)&v8->Length = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8u, 288LL);
    v11 = Heap;
    v23 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      v21 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v14 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v15 = (_DWORD *)(v11 + 264);
        v16 = (_BYTE *)(v11 + 268);
        if ( v14 )
        {
          TppGetCurrentThreadNumaNode(v14, (int *)(v11 + 264), (_BYTE *)(v11 + 268), 0LL);
        }
        else
        {
          *v15 = 0;
          *v16 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v15;
        *(_BYTE *)(v11 + 212) = *v16;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_PEB_LDR_DATA **)(v11 + 144), v13);
        v21 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v21 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11, v17, v18, v19);
      }
    }
    else
    {
      v12 = -1073741801;
      v21 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, v23);
      v11 = 0LL;
      v12 = v21;
    }
    if ( v12 >= 0 )
LABEL_22:
      *(_QWORD *)&v8->Length = v11;
    return (unsigned int)v12;
  }
  else
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
}
