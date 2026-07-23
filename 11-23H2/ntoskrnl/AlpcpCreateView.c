/*
 * XREFs of AlpcpCreateView @ 0x14071C524
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 *     MmMapSecureViewOfSection @ 0x14071C398 (MmMapSecureViewOfSection.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14071EDDC (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     MmMapViewOfSection @ 0x1407A2530 (MmMapViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  int v4; // r12d
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  void *Blob; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // r9
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]
  __int64 v22; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+50h] BYREF
  ULONG_PTR *v24; // [rsp+C0h] [rbp+58h]
  __int64 v25; // [rsp+C8h] [rbp+60h] BYREF

  v24 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v4 = 0;
  v23 = 0LL;
  v22 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v14 = -1073741769;
  }
  else
  {
    v7 = Object[38];
    v8 = Object[3];
    if ( v7 && v7 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v14 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v14 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(AlpcViewType, 96LL);
      v10 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v12 = (Object[32] & 0x100000) == 0;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24);
        v25 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v13 = MmMapSecureViewOfSection(
                    *(_QWORD *)v3,
                    v8,
                    &v23,
                    v11,
                    v17,
                    (__int64)&v22,
                    &v25,
                    v18,
                    v19,
                    v20,
                    v21,
                    v10 + 56);
          else
            v13 = MmMapViewOfSection(**(_QWORD **)(BugCheckParameter2 + 16), v8, &v23, 0LL, 0LL, &v22, &v25, 2, 0, 4);
        }
        else
        {
          v13 = MiMapViewInSystemSpace(*(_QWORD *)v3, &v23, (unsigned __int64 *)&v25, &v22, 0LL, 0LL);
          v4 = 8;
        }
        v14 = v13;
        if ( v13 < 0 )
        {
          AlpcpDereferenceBlobEx(v10);
        }
        else
        {
          AlpcpReferenceBlob(v10);
          *(_QWORD *)(v10 + 40) = v23;
          *(_QWORD *)(v10 + 48) = v25;
          *(_DWORD *)(v10 + 72) = v4 | *(_DWORD *)(v10 + 72) & 0xFFFFFFF7 | 1;
          ObfReferenceObjectWithTag((PVOID)v8, 0x63706C41u);
          *(_QWORD *)(v10 + 32) = v8;
          ObfReferenceObject(Object);
          *(_QWORD *)(v10 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v10 + 16) = BugCheckParameter2;
          v15 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v10 = BugCheckParameter2 + 56;
          *(_QWORD *)(v10 + 8) = v15;
          **(_QWORD **)(BugCheckParameter2 + 64) = v10;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          *(_QWORD *)(BugCheckParameter2 + 64) = v10;
          AlpcpInsertResourcePort(Object, v10);
          ExAcquirePushLockExclusiveEx(v8 + 2048, 0LL);
          *(_QWORD *)(v10 + 88) = *(_QWORD *)(v8 + 2064);
          *(_QWORD *)(v10 + 80) = v8 + 2056;
          **(_QWORD **)(v8 + 2064) = v10 + 80;
          *(_QWORD *)(v8 + 2064) = v10 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2048), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 2048));
          KeAbPostRelease(v8 + 2048);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v10;
          v14 = 0;
          *v24 = v10;
        }
      }
      else
      {
        v14 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v14;
}
