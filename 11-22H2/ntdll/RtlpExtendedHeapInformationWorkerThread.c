/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x18003B250 (RtlpHpStackLoggingEnabled.c)
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlQueryHeapInformation @ 0x18008AD00 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18008B400 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  NTSTATUS Tags; // eax
  NTSTATUS v3; // esi
  SIZE_T CommitSize; // rcx
  _QWORD **v5; // r15
  int v6; // r14d
  void *v7; // rdx
  _WORD HeapInformation[2]; // [rsp+58h] [rbp-59h] BYREF
  int v9; // [rsp+5Ch] [rbp-55h]
  __int64 v10; // [rsp+60h] [rbp-51h]
  _DWORD v11[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v12; // [rsp+70h] [rbp-41h]
  __int64 (__fastcall *v13)(void *, size_t); // [rsp+78h] [rbp-39h]
  char *v14; // [rsp+80h] [rbp-31h]
  __int64 v15; // [rsp+88h] [rbp-29h]
  _QWORD v16[2]; // [rsp+98h] [rbp-19h] BYREF
  int v17; // [rsp+A8h] [rbp-9h]
  NTSTATUS (__fastcall *v18)(_QWORD *, __int64); // [rsp+B0h] [rbp-1h]
  char *v19; // [rsp+B8h] [rbp+7h]

  switch ( *((_DWORD *)a1 + 6) )
  {
    case 0x10000000:
      v9 = 0;
      HeapInformation[0] = 1;
      HeapInformation[1] = *((_WORD *)a1 + 40);
      v10 = -1LL;
      Tags = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x10uLL);
      v3 = Tags;
LABEL_3:
      *((_DWORD *)a1 + 7) = Tags;
      goto LABEL_22;
    case 0x40000000:
      CommitSize = *((_QWORD *)a1 + 1);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *((_DWORD *)a1 + 22) |= 1u;
      v3 = 0;
      goto LABEL_22;
    default:
      CommitSize = 0x10000LL;
      break;
  }
  v5 = (_QWORD **)(a1 + 48);
  *((_QWORD *)a1 + 7) = CommitSize;
  *((_QWORD *)a1 + 8) = 0LL;
  v3 = ZwMapViewOfSection(
         *(HANDLE *)a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         CommitSize,
         (PLARGE_INTEGER)a1 + 8,
         (PSIZE_T)a1 + 7,
         ViewUnmap,
         0,
         4u);
  if ( v3 >= 0 )
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    v6 = *((_DWORD *)a1 + 6);
    if ( v6 == 0x40000000 )
    {
      (*v5)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v5, *((_QWORD *)a1 + 7), (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v6 == 0x20000000 )
    {
      v11[1] = 0;
      v15 = 0LL;
      *((_DWORD *)a1 + 7) = 0;
      v11[0] = 2;
      v12 = -1LL;
      v13 = RtlpHpRemoteStackSerializeWriter;
      v14 = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, v11, 0x28uLL, 0LL);
      if ( v3 >= 0 )
        v3 = *((_DWORD *)a1 + 7);
      if ( (v15 & 0x100) != 0 )
        *((_DWORD *)a1 + 22) |= 1u;
    }
    else
    {
      memset_thunk_772440563353939046(v16, 0, 0x58uLL);
      v16[1] = *((_QWORD *)a1 + 2);
      v16[0] = -1LL;
      v18 = RtlpExtendedHeapInformationWorkerCallback;
      v17 = v6;
      v19 = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v16, 0x58uLL, 0LL);
      if ( v3 >= 0 && *((int *)a1 + 7) < 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_22:
  v7 = (void *)*((_QWORD *)a1 + 6);
  if ( v7 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v3;
  RtlExitUserThread(0);
}
