/*
 * XREFs of LdrpHandleTlsData @ 0x180004568
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 * Callees:
 *     LdrpAllocateTlsEntry @ 0x180004A84 (LdrpAllocateTlsEntry.c)
 *     LdrpGetNewTlsVector @ 0x1800050B4 (LdrpGetNewTlsVector.c)
 *     LdrpQueueDeferredTlsData @ 0x180005120 (LdrpQueueDeferredTlsData.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpReleaseTlsEntry @ 0x1800800CC (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A1230 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // ebx
  int v3; // eax
  PVOID v4; // r15
  _DWORD *Heap; // rdi
  int TlsEntry; // esi
  int *v8; // r8
  unsigned int v9; // r9d
  int v10; // ecx
  size_t v11; // r10
  char v12; // al
  int v13; // r9d
  unsigned int v14; // r9d
  __int64 v15; // r15
  int v16; // eax
  PVOID v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // rcx
  _DWORD *v20; // rax
  int v21; // r14d
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 NewTlsVector; // rcx
  unsigned __int64 v25; // rcx
  signed int v26; // esi
  SIZE_T v27; // r8
  void *v28; // r8
  __int64 v29; // rcx
  _DWORD *v30; // rax
  char v31; // [rsp+30h] [rbp-E8h]
  char v32; // [rsp+31h] [rbp-E7h] BYREF
  NTSTATUS v33; // [rsp+34h] [rbp-E4h]
  unsigned int v34; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int SizeOfBitMap; // [rsp+3Ch] [rbp-DCh]
  unsigned int v36; // [rsp+40h] [rbp-D8h]
  unsigned int v37; // [rsp+44h] [rbp-D4h]
  int v38; // [rsp+48h] [rbp-D0h]
  unsigned int v39; // [rsp+4Ch] [rbp-CCh]
  int v40; // [rsp+50h] [rbp-C8h]
  PVOID v41; // [rsp+58h] [rbp-C0h] BYREF
  int v42; // [rsp+60h] [rbp-B8h]
  _BYTE *v43; // [rsp+68h] [rbp-B0h]
  size_t Size; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+78h] [rbp-A0h]
  _DWORD *v46; // [rsp+80h] [rbp-98h]
  __int64 v47; // [rsp+88h] [rbp-90h] BYREF
  __int64 v48; // [rsp+90h] [rbp-88h]
  PVOID BaseAddress; // [rsp+98h] [rbp-80h]
  _DWORD *v50; // [rsp+A0h] [rbp-78h]
  int *v51; // [rsp+A8h] [rbp-70h]
  __int64 v52; // [rsp+B0h] [rbp-68h]
  size_t v53; // [rsp+B8h] [rbp-60h]
  __int64 v54; // [rsp+C0h] [rbp-58h]
  _DWORD *v55; // [rsp+C8h] [rbp-50h]
  _BYTE ProcessInformation[40]; // [rsp+D0h] [rbp-48h] BYREF

  v1 = a1;
  v52 = a1;
  v54 = a1;
  v2 = 0;
  if ( !LdrpActiveThreadCount || *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  v3 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(a1 + 48), (__int64)&v41);
  v4 = v41;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( !v4 )
    return 0LL;
  v40 = 0;
  v41 = 0LL;
  Heap = 0LL;
  v43 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = ProcessInformation;
    v43 = ProcessInformation;
  }
  else
  {
    v25 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v26 = 0;
    }
    else
    {
      v25 = -1LL;
      v26 = -1073741675;
    }
    if ( v26 >= 0 )
    {
      v27 = -1LL;
      if ( v25 + 16 >= v25 )
        v27 = v25 + 16;
      v26 = v25 + 16 < v25 ? 0xC0000095 : 0;
      if ( v25 + 16 >= v25 )
      {
        Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v27);
        v43 = Heap;
        if ( !Heap )
          v26 = -1073741801;
      }
    }
    if ( v26 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v26;
    }
  }
  v50 = Heap;
  v46 = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry((_DWORD)v4, v1, (unsigned int)&v34, (unsigned int)&v32, (__int64)&v47);
  v33 = TlsEntry;
  if ( TlsEntry < 0 )
    goto LABEL_31;
  v8 = Heap + 2;
  v51 = Heap + 2;
  v55 = Heap + 2;
  Heap[2] = LdrpActiveThreadCount;
  v31 = v32;
  v9 = v34;
  v36 = v34;
  if ( v32 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v9;
  }
  v48 = v47;
  v10 = (*(_DWORD *)(v47 + 52) >> 20) & 0xF;
  v11 = *(_QWORD *)(v47 + 24) - *(_QWORD *)(v47 + 16);
  Size = v11;
  v12 = v10 - 1;
  if ( (*(_DWORD *)(v47 + 52) & 0xF00000) == 0 )
    v12 = v10;
  v13 = 1 << v12;
  if ( (unsigned int)(1 << v12) < 0x10 )
    v13 = 16;
  v37 = v13;
  v42 = v13;
  v14 = v13 - 1;
  v39 = v14;
  v53 = v11;
  LODWORD(v15) = 0;
  while ( 1 )
  {
    v38 = v15;
    v16 = *v8;
    if ( (unsigned int)v15 >= *v8 )
    {
      *Heap = 0;
      v33 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v16 + 16);
      goto LABEL_22;
    }
    v45 = v14;
    v17 = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v14 + v11 + 1);
    BaseAddress = v17;
    if ( !v17 )
    {
      v33 = -1073741801;
      goto LABEL_22;
    }
    v18 = (_QWORD *)(~v45 & ((unsigned __int64)v17 + v37));
    v45 = (unsigned __int64)v18;
    *(v18 - 1) = v17;
    memmove(v18, *(const void **)(v48 + 16), Size);
    if ( v31 )
      break;
LABEL_20:
    v19 = 3LL * (unsigned int)v15;
    v20 = v50;
    *(_QWORD *)&v50[2 * v19 + 6] = v18;
    v20[2 * v19 + 4] = 0;
    LODWORD(v15) = v15 + 1;
    v8 = v51;
    v14 = v39;
    v11 = Size;
  }
  NewTlsVector = LdrpGetNewTlsVector(SizeOfBitMap);
  if ( NewTlsVector )
  {
    *(_QWORD *)(NewTlsVector + 8LL * v36) = v18;
    v18 = (_QWORD *)NewTlsVector;
    goto LABEL_20;
  }
  RtlFreeHeap(LdrpTlsHeap, 0, BaseAddress);
  v33 = -1073741801;
LABEL_22:
  v21 = v40;
  v22 = v36;
  while ( (_DWORD)v15 )
  {
    v15 = (unsigned int)(v15 - 1);
    if ( (Heap[6 * v15 + 4] & 2) != 0 )
    {
      v23 = *(_QWORD *)&Heap[6 * v15 + 6];
      if ( !v23 )
        continue;
      if ( v31 )
      {
        LdrpQueueDeferredTlsData(v23, *(_QWORD *)&Heap[6 * v15 + 8]);
        continue;
      }
      v28 = *(void **)(v23 - 8);
      goto LABEL_53;
    }
    if ( (Heap[6 * v15 + 4] & 1) == 0 )
    {
      ++v21;
      v29 = *(_QWORD *)&Heap[6 * v15 + 6];
      if ( v31 )
      {
        v46 = *(_DWORD **)(v29 + 8 * v22);
        RtlFreeHeap(LdrpTlsHeap, 0, (PVOID)(v29 - 16));
        v30 = v46;
      }
      else
      {
        v30 = *(_DWORD **)&Heap[6 * v15 + 6];
      }
      v28 = (void *)*((_QWORD *)v30 - 1);
LABEL_53:
      RtlFreeHeap(LdrpTlsHeap, 0, v28);
      continue;
    }
    ++LdrpPotentialTlsLeaks;
  }
  TlsEntry = v33;
  v1 = v52;
  if ( v33 < 0 )
  {
    LdrpReleaseTlsEntry(v52, &v41);
    if ( v31 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else if ( v21 )
  {
    LdrpActiveThreadCount -= v21;
  }
LABEL_31:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v1 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)ProcessInformation )
    RtlFreeHeap(LdrpTlsHeap, 0, Heap);
  if ( v41 )
    RtlFreeHeap(LdrpTlsHeap, 0, v41);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v2;
}
