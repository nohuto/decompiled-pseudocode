/*
 * XREFs of RtlpTpIoAlloc @ 0x180127F5C
 * Callers:
 *     RtlpTpIoLookup @ 0x18012820C (RtlpTpIoLookup.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x1800500FC (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 Heap; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ebx
  _DWORD *v11; // rsi
  _BYTE *v12; // r14
  _PEB_LDR_DATA *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
LABEL_9:
    v15 = v10;
    goto LABEL_10;
  }
  v10 = TppPoolpReferenceGlobalPool(
          (volatile signed __int32 **)&TppPoolpGlobalPool,
          (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock,
          (volatile signed __int32 **)&v16,
          v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = RtlpTpIoCallback;
    v11 = (_DWORD *)(Heap + 72);
    v12 = (_BYTE *)(Heap + 76);
    if ( v16 )
    {
      TppGetCurrentThreadNumaNode((__int64)v16, (int *)(Heap + 72), (_BYTE *)(Heap + 76), 0LL);
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = TppDirectTaskVFuncs;
    *(_DWORD *)(Heap + 16) = *v11;
    *(_BYTE *)(Heap + 20) = *v12;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = TpBindFileToDirect(a3, Heap + 8, v13, v9);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v10 < 0 )
  {
    if ( v16 )
      TpDereferenceGlobalPool((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
