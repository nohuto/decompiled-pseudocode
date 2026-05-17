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

__int64 __fastcall TpAllocIoCompletion(
        _PEB_LDR_DATA *Ldr,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _PEB_LDR_DATA *v8; // r12
  unsigned int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  unsigned __int64 v16; // rdx
  volatile signed __int32 *v17; // r8
  unsigned __int64 v18; // r9
  int v20; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h]

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
    v22 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      v20 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (_DWORD *)(v11 + 264), (_BYTE *)(v11 + 268));
          v14 = *(_DWORD *)(v11 + 264);
          v15 = *(_BYTE *)(v11 + 268);
        }
        else
        {
          *(_DWORD *)(v11 + 264) = 0;
          *(_BYTE *)(v11 + 268) = 0;
          v14 = 0;
          v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = v14;
        *(_BYTE *)(v11 + 212) = v15;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        v20 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v20 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11, v16, v17, v18);
      }
    }
    else
    {
      v12 = -1073741801;
      v20 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, v22);
      v11 = 0LL;
      v12 = v20;
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
