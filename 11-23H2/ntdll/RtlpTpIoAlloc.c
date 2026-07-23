/*
 * XREFs of RtlpTpIoAlloc @ 0x180127F2C
 * Callers:
 *     RtlpTpIoLookup @ 0x1801281DC (RtlpTpIoLookup.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x1800500FC (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  _DWORD *v11; // rsi
  char *v12; // r14
  _PEB_LDR_DATA *v13; // rcx
  unsigned __int32 v15; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
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
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v11 = Heap + 72;
    v12 = Heap + 76;
    if ( v16 )
    {
      TppGetCurrentThreadNumaNode((__int64)v16, (int *)Heap + 18, Heap + 76, 0LL);
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v11;
    Heap[20] = *v12;
    v13 = v16;
    *((_QWORD *)Heap + 10) = v16;
    v10 = TpBindFileToDirect(a3, (__int64)(Heap + 8), v13);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v10 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v10 < 0 )
  {
    if ( v16 )
      TpDereferenceGlobalPool(v16, v6, v8);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
