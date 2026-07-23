/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x14078992C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     PiDmCacheDataDecode @ 0x1406CC0F4 (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x1406D00E0 (PnpGetObjectProperty.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D6220 (PiDmGetCachedKeyIndex.c)
 *     PiDmGetCacheKeys @ 0x1406D6374 (PiDmGetCacheKeys.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     PiDmCacheDataFree @ 0x14078D484 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14078D6D0 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4 (PiDmGetReferencedObjectFromProperty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r12
  int Object; // ebx
  __int64 v10; // r13
  DEVPROPKEY **v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v17; // r14
  ULONG_PTR v18; // rcx
  void *v19; // r15
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  GUID *Pool2; // rax
  bool v24; // zf
  __int64 *v25; // rdi
  unsigned int v26; // r8d
  __int64 *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // rsi
  struct _KTHREAD *v31; // rax
  __int64 v32; // rsi
  ULONG_PTR v33; // r14
  ULONG_PTR v34; // rcx
  int v35; // eax
  int v36; // eax
  _BYTE v37[12]; // [rsp+68h] [rbp-39h] BYREF
  unsigned int Size_4; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v39; // [rsp+78h] [rbp-29h] BYREF
  void *Buf1; // [rsp+80h] [rbp-21h]
  ULONG_PTR v41; // [rsp+88h] [rbp-19h] BYREF
  void *Buf2; // [rsp+90h] [rbp-11h] BYREF
  DEVPROPKEY **v43; // [rsp+98h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v47; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  v43 = 0LL;
  v39 = 0;
  *(_DWORD *)&v37[8] = 0;
  Object = 0;
  *a6 = 0;
  Size_4 = 0;
  v47 = 0;
  Buf1 = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)v37 = 0LL;
  v41 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v43, &v39);
  if ( !v39 )
    return;
  v10 = a5;
  v11 = v43;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v43, v39, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
    if ( Object < 0 )
      return;
    v47 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(0x5A706E50u, 0x10u, a2, a1, 0LL, 0LL, v10, (__int64)v37, &Buf2, &Size_4, 0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      *(_DWORD *)v37 = 0;
      Size_4 = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v17 = (__int64 *)BugCheckParameter2;
  v18 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v18, 0LL);
  v19 = Buf2;
  v20 = v17[v15 + 14];
  if ( v20 )
  {
    if ( v20 == 1 || Object < 0 || !LODWORD(v11[v15 + 2]) )
      goto LABEL_35;
    v21 = PiDmCacheDataDecode((int *)&v17[v15 + 14], &v37[4], 0LL, 0, (unsigned int *)&v37[8]);
    Object = v21;
    if ( v21 == -1073741275 )
    {
      *(_DWORD *)&v37[4] = 0;
      Object = 0;
      v24 = *(_DWORD *)v37 == 0;
    }
    else
    {
      if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741789 )
        goto LABEL_35;
      v22 = *(_DWORD *)&v37[8];
      if ( *(_DWORD *)&v37[8] )
      {
        Pool2 = (GUID *)ExAllocatePool2(256LL, *(unsigned int *)&v37[8], 1517317712LL);
        Buf1 = Pool2;
        if ( !Pool2 )
        {
          Object = -1073741670;
          goto LABEL_35;
        }
      }
      else
      {
        Pool2 = (GUID *)Buf1;
      }
      Object = PiDmCacheDataDecode((int *)&v17[v15 + 14], &v37[4], Pool2, v22, (unsigned int *)&v37[8]);
      if ( Object < 0 || *(_QWORD *)&v37[4] != __PAIR64__(Size_4, *(unsigned int *)v37) )
        goto LABEL_35;
      if ( !*(_DWORD *)&v37[8] )
      {
LABEL_22:
        *v6 = 1;
        goto LABEL_23;
      }
      v24 = memcmp(Buf1, v19, *(unsigned int *)&v37[8]) == 0;
    }
    if ( v24 )
      goto LABEL_22;
LABEL_35:
    PiDmCacheDataFree(&v17[v15 + 14]);
    if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
      Object = PiDmCacheDataEncode(*(unsigned int *)v37, v19, Size_4, LODWORD(v11[v15 + 1]), 0, &v17[v15 + 14]);
    goto LABEL_23;
  }
  if ( LODWORD(v11[v15 + 2]) )
    goto LABEL_35;
LABEL_23:
  ExReleasePushLockEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( LODWORD(v11[v15 + 2]) && !*v6 )
  {
    v26 = 0;
    v27 = PiDmAggregatedBooleanDefs;
    while ( 1 )
    {
      v28 = v27[1];
      if ( *(_DWORD *)(v28 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v29 = *(_QWORD *)v28 - *(_QWORD *)a5;
        if ( *(_QWORD *)v28 == *(_QWORD *)a5 )
          v29 = *(_QWORD *)(v28 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v29 && a1 == *(_DWORD *)v27 )
          break;
      }
      ++v26;
      v27 += 7;
      if ( v26 >= 3 )
        goto LABEL_25;
    }
    v30 = &PiDmAggregatedBooleanDefs[7 * v26];
    if ( v30 )
    {
      if ( (int)PiDmGetReferencedObjectFromProperty(
                  a1,
                  a2,
                  (_DWORD)v17,
                  v28,
                  v30[2],
                  *((_DWORD *)v30 + 6),
                  (__int64)&v41) >= 0 )
      {
        v31 = KeGetCurrentThread();
        v32 = v30[6];
        v25 = (__int64 *)v41;
        v33 = v41;
        v34 = v41;
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v34, 0LL);
        v19 = Buf2;
        if ( Object < 0 || (v35 = *(_DWORD *)(v33 + v32), v35 == 0x80000000) )
        {
          *(_DWORD *)(v33 + v32) = 0x80000000;
          goto LABEL_60;
        }
        if ( *(_DWORD *)&v37[4] == 17 )
        {
          if ( *(_BYTE *)Buf1 == 0xFF )
          {
            if ( *(_DWORD *)v37 == 17 && *(_BYTE *)Buf2 )
              goto LABEL_60;
            v36 = v35 - 1;
LABEL_59:
            *(_DWORD *)(v33 + v32) = v36;
            goto LABEL_60;
          }
          if ( *(_BYTE *)Buf1 )
          {
LABEL_60:
            ExReleasePushLockEx(v25, 0LL);
            KeLeaveCriticalRegion();
            v17 = (__int64 *)BugCheckParameter2;
            goto LABEL_26;
          }
        }
        if ( *(_DWORD *)v37 != 17 || *(_BYTE *)Buf2 != 0xFF )
          goto LABEL_60;
        v36 = v35 + 1;
        goto LABEL_59;
      }
    }
  }
LABEL_25:
  v25 = (__int64 *)v41;
LABEL_26:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x5A706E50u);
  if ( v25 )
    PiDmObjectRelease((char *)v25);
  if ( v47 )
    PiDmObjectRelease((char *)v17);
}
