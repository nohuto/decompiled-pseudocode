/*
 * XREFs of PiiFilterCreate @ 0x18008DAB8
 * Callers:
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x18008DBF4 (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803E01B0 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18008D6E8 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     PiiFilterDelete @ 0x1800EDB2C (PiiFilterDelete.c)
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x1800EE0FC (-Free@RtlNameValueArray@@QEAAXXZ.c)
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 */

__int64 __fastcall PiiFilterCreate(RtlNameValueArray **a1)
{
  RtlNameValueArray *Heap; // rax
  RtlNameValueArray *v3; // rbx
  void *v4; // r8
  HANDLE *v5; // rdi
  void *v6; // r8
  PVOID ProcessHeap; // rcx
  int v8; // edi

  Heap = (RtlNameValueArray *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x60uLL);
  v3 = Heap;
  if ( Heap )
  {
    RtlNameValueArray::Free(Heap);
    v4 = (void *)*((_QWORD *)v3 + 5);
    if ( v4 )
      RtlFreeHeap(*(HANDLE *)v3, 0, v4);
    v5 = (HANDLE *)((char *)v3 + 48);
    *(_OWORD *)v3 = 0LL;
    *((_OWORD *)v3 + 1) = 0LL;
    *((_OWORD *)v3 + 2) = 0LL;
    *(_QWORD *)v3 = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v3 + 4) = 16LL;
    *((_QWORD *)v3 + 1) = 8LL;
    RtlNameValueArray::Free((RtlNameValueArray *)((char *)v3 + 48));
    v6 = (void *)*((_QWORD *)v3 + 11);
    if ( v6 )
      RtlFreeHeap(*v5, 0, v6);
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v3 + 4) = 0LL;
    *((_OWORD *)v3 + 5) = 0LL;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    *v5 = ProcessHeap;
    *((_QWORD *)v3 + 10) = 16LL;
    *((_QWORD *)v3 + 7) = 8LL;
    v8 = PiiFilterpAddProfiles(v3);
    if ( v8 < 0 || (v8 = PiiFilterpAddEnvironment(v3), v8 < 0) )
    {
      PiiFilterDelete(v3);
    }
    else
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
