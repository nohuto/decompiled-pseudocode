/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x180100200
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x18003B0F0 (RtlpHpStackLoggingEnabled.c)
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlQueryHeapInformation @ 0x18008B500 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18008BC00 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  int Tags; // eax
  int HeapInformation; // esi
  __int64 v4; // rcx
  _QWORD **v5; // r15
  unsigned __int64 v6; // r9
  int v7; // r14d
  _WORD v8[2]; // [rsp+58h] [rbp-59h] BYREF
  int v9; // [rsp+5Ch] [rbp-55h]
  __int64 v10; // [rsp+60h] [rbp-51h]
  _QWORD v11[4]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v12; // [rsp+88h] [rbp-29h]
  _QWORD v13[2]; // [rsp+98h] [rbp-19h] BYREF
  int v14; // [rsp+A8h] [rbp-9h]
  __int64 (__fastcall *v15)(_QWORD *, __int64); // [rsp+B0h] [rbp-1h]
  __int64 v16; // [rsp+B8h] [rbp+7h]

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 0x10000000:
      v9 = 0;
      v8[0] = 1;
      v8[1] = *(_WORD *)(a1 + 80);
      v10 = -1LL;
      Tags = RtlSetHeapInformation(0LL, 5, (__int64)v8, 0x10uLL);
      HeapInformation = Tags;
LABEL_3:
      *(_DWORD *)(a1 + 28) = Tags;
      goto LABEL_22;
    case 0x40000000:
      v4 = *(_QWORD *)(a1 + 8);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *(_DWORD *)(a1 + 88) |= 1u;
      HeapInformation = 0;
      goto LABEL_22;
    default:
      v4 = 0x10000LL;
      break;
  }
  v5 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 == 0x40000000 )
    {
      (*v5)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v5, *(_QWORD *)(a1 + 56), (_QWORD *)(a1 + 32), v6);
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      HIDWORD(v11[0]) = 0;
      v12 = 0LL;
      *(_DWORD *)(a1 + 28) = 0;
      LODWORD(v11[0]) = 2;
      v11[1] = -1LL;
      v11[2] = RtlpHpRemoteStackSerializeWriter;
      v11[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v11, 0x28uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
      if ( (v12 & 0x100) != 0 )
        *(_DWORD *)(a1 + 88) |= 1u;
    }
    else
    {
      memset_thunk_772440563353939046(v13, 0, 0x58uLL);
      v13[1] = *(_QWORD *)(a1 + 16);
      v13[0] = -1LL;
      v15 = RtlpExtendedHeapInformationWorkerCallback;
      v14 = v7;
      v16 = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v13, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 48) )
    NtUnmapViewOfSection();
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
