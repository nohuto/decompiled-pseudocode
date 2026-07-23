/*
 * XREFs of LdrpHandleTlsData @ 0x180033A94
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180034040 (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpGetNewTlsVector @ 0x180030D50 (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x1800311E4 (LdrpAllocateTlsEntry.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpQueueDeferredTlsData @ 0x1800842F4 (LdrpQueueDeferredTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  int v1; // eax
  PVOID v2; // r14
  _DWORD *Heap; // rdi
  unsigned int SizeOfBitMap; // r15d
  signed int v6; // esi
  int v7; // r8d
  int v8; // ecx
  size_t v9; // r9
  char v10; // al
  unsigned int v11; // r8d
  __int64 v12; // r14
  unsigned int v13; // r8d
  __int64 v14; // r15
  unsigned int v15; // eax
  PVOID v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rcx
  int v19; // r14d
  _DWORD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r14
  _DWORD *NewTlsVector; // rcx
  unsigned __int64 v24; // rcx
  SIZE_T v25; // r8
  void *v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rax
  char v29; // [rsp+30h] [rbp-D8h]
  char v30[3]; // [rsp+31h] [rbp-D7h] BYREF
  NTSTATUS v31; // [rsp+34h] [rbp-D4h]
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-CCh]
  unsigned int v34; // [rsp+40h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+54h] [rbp-B4h]
  unsigned int v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+5Ch] [rbp-ACh]
  PVOID OutHeaders; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-A0h]
  _BYTE *v42; // [rsp+70h] [rbp-98h]
  size_t Size; // [rsp+78h] [rbp-90h]
  _DWORD *v44; // [rsp+80h] [rbp-88h]
  unsigned __int64 v45; // [rsp+88h] [rbp-80h]
  _DWORD *v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h]
  PVOID BaseAddress; // [rsp+A8h] [rbp-60h]
  size_t v50; // [rsp+B0h] [rbp-58h]
  __int64 v51; // [rsp+B8h] [rbp-50h]
  _BYTE ProcessInformation[40]; // [rsp+C0h] [rbp-48h] BYREF

  v35 = a1;
  v51 = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v1 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(a1 + 48), (PIMAGE_NT_HEADERS)&OutHeaders);
  v2 = OutHeaders;
  if ( v1 < 0 )
    v2 = 0LL;
  if ( !v2 )
    return 0LL;
  v39 = 0;
  OutHeaders = 0LL;
  Heap = 0LL;
  v42 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = ProcessInformation;
    v42 = ProcessInformation;
  }
  else
  {
    v24 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v6 = 0;
    }
    else
    {
      v24 = -1LL;
      v6 = -1073741675;
    }
    if ( v6 >= 0 )
    {
      v25 = -1LL;
      if ( v24 + 16 >= v24 )
        v25 = v24 + 16;
      v6 = v24 + 16 < v24 ? 0xC0000095 : 0;
      if ( v24 + 16 >= v24 )
      {
        Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v25);
        v42 = Heap;
        if ( !Heap )
          v6 = -1073741801;
      }
    }
    if ( v6 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v6;
    }
  }
  v44 = Heap;
  v46 = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v34 = LdrpTlsBitmap.SizeOfBitMap;
  v6 = LdrpAllocateTlsEntry((__int64)v2, v35, (int *)&v32, (__int64)v30, &v47);
  v31 = v6;
  if ( v6 < 0 )
    goto LABEL_30;
  Heap[2] = LdrpActiveThreadCount;
  v29 = v30[0];
  v7 = v32;
  v33 = v32;
  if ( v30[0] )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v34 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v7;
  }
  v48 = v47;
  v8 = (*(_DWORD *)(v47 + 52) >> 20) & 0xF;
  v9 = *(_QWORD *)(v47 + 24) - *(_QWORD *)(v47 + 16);
  Size = v9;
  v10 = v8 - 1;
  if ( (*(_DWORD *)(v47 + 52) & 0xF00000) == 0 )
    v10 = v8;
  v11 = 1 << v10;
  if ( (unsigned int)(1 << v10) < 0x10 )
    v11 = 16;
  v12 = v11;
  v38 = v11;
  v41 = v11;
  v13 = v11 - 1;
  v37 = v13;
  v50 = v9;
  LODWORD(v14) = 0;
  while ( 1 )
  {
    v36 = v14;
    v15 = Heap[2];
    if ( (unsigned int)v14 >= v15 )
    {
      *Heap = 0;
      v31 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v15 + 16);
      goto LABEL_21;
    }
    v45 = v13;
    v16 = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v13 + v9 + 1);
    BaseAddress = v16;
    if ( !v16 )
      break;
    v17 = (_QWORD *)(~v45 & ((unsigned __int64)v16 + v12));
    v45 = (unsigned __int64)v17;
    *(v17 - 1) = v16;
    memmove(v17, *(const void **)(v48 + 16), Size);
    if ( v29 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v34);
      if ( !NewTlsVector )
      {
        RtlFreeHeap(LdrpTlsHeap, 0, BaseAddress);
        break;
      }
      *(_QWORD *)&NewTlsVector[2 * v33] = v17;
      v17 = NewTlsVector;
    }
    v18 = 3LL * (unsigned int)v14;
    *(_QWORD *)&v44[2 * v18 + 6] = v17;
    Heap[2 * v18 + 4] = 0;
    LODWORD(v14) = v14 + 1;
    v13 = v37;
    v9 = Size;
    v12 = v38;
  }
  v31 = -1073741801;
LABEL_21:
  v19 = v39;
  v20 = v44;
  while ( (_DWORD)v14 )
  {
    v14 = (unsigned int)(v14 - 1);
    if ( (Heap[6 * v14 + 4] & 2) != 0 )
    {
      v21 = *(_QWORD *)&v20[6 * v14 + 6];
      if ( v21 )
      {
        if ( !v29 )
        {
          v26 = *(void **)(v21 - 8);
          goto LABEL_52;
        }
        LdrpQueueDeferredTlsData(v21, *(_QWORD *)&v20[6 * v14 + 8]);
      }
    }
    else if ( (Heap[6 * v14 + 4] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v19;
      v27 = *(_QWORD *)&v20[6 * v14 + 6];
      if ( v29 )
      {
        v46 = *(_DWORD **)(v27 + 8LL * v33);
        RtlFreeHeap(LdrpTlsHeap, 0, (PVOID)(v27 - 16));
        v28 = v46;
      }
      else
      {
        v28 = *(_DWORD **)&v20[6 * v14 + 6];
      }
      v26 = (void *)*((_QWORD *)v28 - 1);
LABEL_52:
      RtlFreeHeap(LdrpTlsHeap, 0, v26);
    }
  }
  v6 = v31;
  if ( v31 < 0 )
  {
    v22 = v35;
    LdrpReleaseTlsEntry(v35, &OutHeaders);
    if ( v29 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else
  {
    if ( v19 )
      LdrpActiveThreadCount -= v19;
LABEL_30:
    v22 = v35;
  }
  if ( v6 >= 0 )
    *(_WORD *)(v22 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)ProcessInformation )
    RtlFreeHeap(LdrpTlsHeap, 0, Heap);
  if ( OutHeaders )
    RtlFreeHeap(LdrpTlsHeap, 0, OutHeaders);
  if ( v6 >= 0 )
    return 0LL;
  return (unsigned int)v6;
}
