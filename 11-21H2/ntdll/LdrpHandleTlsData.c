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
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // r14
  _BYTE *Heap; // rdi
  int v8; // r15d
  signed int v9; // esi
  int v10; // r8d
  int v11; // ecx
  size_t v12; // r9
  char v13; // al
  unsigned int v14; // r8d
  __int64 v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // r15
  unsigned int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rcx
  int v22; // r14d
  _BYTE *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r14
  _DWORD *NewTlsVector; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  _BYTE *v31; // rax
  char v32; // [rsp+30h] [rbp-D8h]
  char v33[3]; // [rsp+31h] [rbp-D7h] BYREF
  int v34; // [rsp+34h] [rbp-D4h]
  unsigned int v35; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-CCh]
  unsigned int v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h]
  int v39; // [rsp+50h] [rbp-B8h]
  unsigned int v40; // [rsp+54h] [rbp-B4h]
  unsigned int v41; // [rsp+58h] [rbp-B0h]
  int v42; // [rsp+5Ch] [rbp-ACh]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-A0h]
  _BYTE *v45; // [rsp+70h] [rbp-98h]
  size_t Size; // [rsp+78h] [rbp-90h]
  _BYTE *v47; // [rsp+80h] [rbp-88h]
  unsigned __int64 v48; // [rsp+88h] [rbp-80h]
  _BYTE *v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  size_t v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  _BYTE v55[40]; // [rsp+C0h] [rbp-48h] BYREF

  v38 = a1;
  v54 = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v1 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 9, (unsigned int)&v35, (__int64)&v43);
  v5 = v43;
  if ( v1 < 0 )
    v5 = 0LL;
  if ( !v5 )
    return 0LL;
  v42 = 0;
  v43 = 0LL;
  Heap = 0LL;
  v45 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, v2, v3, v4);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v55;
    v45 = v55;
  }
  else
  {
    v27 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v9 = 0;
    }
    else
    {
      v27 = -1LL;
      v9 = -1073741675;
    }
    if ( v9 >= 0 )
    {
      v28 = -1LL;
      if ( v27 + 16 >= v27 )
        v28 = v27 + 16;
      v9 = v27 + 16 < v27 ? 0xC0000095 : 0;
      if ( v27 + 16 >= v27 )
      {
        Heap = (_BYTE *)RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v28);
        v45 = Heap;
        if ( !Heap )
          v9 = -1073741801;
      }
    }
    if ( v9 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v9;
    }
  }
  v47 = Heap;
  v49 = Heap;
  v8 = LdrpTlsBitmap;
  v37 = LdrpTlsBitmap;
  v9 = LdrpAllocateTlsEntry(v5, v38, (int *)&v35, (__int64)v33, &v50);
  v34 = v9;
  if ( v9 < 0 )
    goto LABEL_30;
  *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
  v32 = v33[0];
  v10 = v35;
  v36 = v35;
  if ( v33[0] )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v8;
    v37 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v10;
  }
  v51 = v50;
  v11 = (*(_DWORD *)(v50 + 52) >> 20) & 0xF;
  v12 = *(_QWORD *)(v50 + 24) - *(_QWORD *)(v50 + 16);
  Size = v12;
  v13 = v11 - 1;
  if ( (*(_DWORD *)(v50 + 52) & 0xF00000) == 0 )
    v13 = v11;
  v14 = 1 << v13;
  if ( (unsigned int)(1 << v13) < 0x10 )
    v14 = 16;
  v15 = v14;
  v41 = v14;
  v44 = v14;
  v16 = v14 - 1;
  v40 = v16;
  v53 = v12;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    v39 = v17;
    v18 = *((_DWORD *)Heap + 2);
    if ( (unsigned int)v17 >= v18 )
    {
      *(_DWORD *)Heap = 0;
      v34 = NtSetInformationProcess(-1LL, 35LL, Heap, 24 * v18 + 16);
      goto LABEL_21;
    }
    v48 = v16;
    v19 = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v16 + v12 + 1);
    v52 = v19;
    if ( !v19 )
      break;
    v20 = (_QWORD *)(~v48 & (v19 + v15));
    v48 = (unsigned __int64)v20;
    *(v20 - 1) = v19;
    memmove(v20, *(const void **)(v51 + 16), Size);
    if ( v32 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v37);
      if ( !NewTlsVector )
      {
        RtlFreeHeap(LdrpTlsHeap, 0, v52);
        break;
      }
      *(_QWORD *)&NewTlsVector[2 * v36] = v20;
      v20 = NewTlsVector;
    }
    v21 = 3LL * (unsigned int)v17;
    *(_QWORD *)&v47[8 * v21 + 24] = v20;
    *(_DWORD *)&Heap[8 * v21 + 16] = 0;
    LODWORD(v17) = v17 + 1;
    v16 = v40;
    v12 = Size;
    v15 = v41;
  }
  v34 = -1073741801;
LABEL_21:
  v22 = v42;
  v23 = v47;
  while ( (_DWORD)v17 )
  {
    v17 = (unsigned int)(v17 - 1);
    if ( (Heap[24 * v17 + 16] & 2) != 0 )
    {
      v24 = *(_QWORD *)&v23[24 * v17 + 24];
      if ( v24 )
      {
        if ( !v32 )
        {
          v29 = *(_QWORD *)(v24 - 8);
          goto LABEL_52;
        }
        LdrpQueueDeferredTlsData(v24, *(_QWORD *)&v23[24 * v17 + 32]);
      }
    }
    else if ( (Heap[24 * v17 + 16] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v22;
      v30 = *(_QWORD *)&v23[24 * v17 + 24];
      if ( v32 )
      {
        v49 = *(_BYTE **)(v30 + 8LL * v36);
        RtlFreeHeap(LdrpTlsHeap, 0, v30 - 16);
        v31 = v49;
      }
      else
      {
        v31 = *(_BYTE **)&v23[24 * v17 + 24];
      }
      v29 = *((_QWORD *)v31 - 1);
LABEL_52:
      RtlFreeHeap(LdrpTlsHeap, 0, v29);
    }
  }
  v9 = v34;
  if ( v34 < 0 )
  {
    v25 = v38;
    LdrpReleaseTlsEntry(v38, &v43);
    if ( v32 )
      LdrpTlsBitmap -= 8;
  }
  else
  {
    if ( v22 )
      LdrpActiveThreadCount -= v22;
LABEL_30:
    v25 = v38;
  }
  if ( v9 >= 0 )
    *(_WORD *)(v25 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v55 )
    RtlFreeHeap(LdrpTlsHeap, 0, (__int64)Heap);
  if ( v43 )
    RtlFreeHeap(LdrpTlsHeap, 0, v43);
  if ( v9 >= 0 )
    return 0LL;
  return (unsigned int)v9;
}
