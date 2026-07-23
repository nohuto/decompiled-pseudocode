/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE70
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406BF028 (EtwpDisableTraceProviders.c)
 * Callees:
 *     EtwpGetEnableInfoIndex @ 0x140228758 (EtwpGetEnableInfoIndex.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1406BE284 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1406BF588 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF984 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateGuidFilterData @ 0x140780CF0 (EtwpUpdateGuidFilterData.c)
 *     EtwpSendDataBlock @ 0x1407811E0 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1407819D8 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140781E28 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1409F543C (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r15d
  unsigned int v9; // esi
  __int64 v10; // r8
  char v11; // cl
  int v12; // r11d
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  __int64 v15; // r10
  int v16; // r13d
  __int64 v17; // rbx
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  __int128 v20; // xmm1
  __int64 v21; // r8
  _QWORD *v22; // r12
  _DWORD *v23; // rbx
  __int64 v24; // rsi
  char *v25; // r15
  char v26; // cl
  char v27; // al
  int SchematizedFilterSize; // eax
  int v29; // r13d
  unsigned int v30; // r15d
  int v31; // eax
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  char v34; // [rsp+28h] [rbp-E0h]
  int v36; // [rsp+2Ch] [rbp-DCh]
  __int64 v37; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD *v38; // [rsp+38h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C8h]
  int v40; // [rsp+48h] [rbp-C0h]
  int v41; // [rsp+4Ch] [rbp-BCh]
  __int128 v42; // [rsp+50h] [rbp-B8h]
  __int128 v43; // [rsp+60h] [rbp-A8h]
  _BYTE v44[112]; // [rsp+78h] [rbp-90h] BYREF
  __int128 Source2; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-10h]

  v3 = 0;
  v41 = a1;
  Source2 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v34 = 0;
  v38 = 0LL;
  v7 = 0;
  v36 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v40 = *(unsigned __int16 *)(a2 + 88);
  LODWORD(v37) = 0;
  if ( v40 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  if ( EtwpGetEnableInfoIndex(a2, a1, &v37) )
  {
    v9 = v37;
    v10 = a2 + 132;
    v11 = v37;
    v42 = 0LL;
    v12 = 0;
    v13 = -1LL;
    v14 = 0;
    *(_QWORD *)&v43 = 0LL;
    v15 = 0LL;
    *((_QWORD *)&v43 + 1) = -1LL;
    *(_DWORD *)(32 * ((unsigned int)v37 + 4LL) + a2) = 0;
    v3 = 1;
    v16 = 1 << v11;
    v17 = 8LL;
    do
    {
      if ( *(_DWORD *)(v10 - 4) )
      {
        v18 = *(_BYTE *)v10;
        v19 = v14;
        LODWORD(v42) = 1;
        if ( v14 <= v18 )
          v19 = v18;
        v15 |= *(_QWORD *)(v10 + 12);
        v13 &= *(_QWORD *)(v10 + 20);
        v14 = v19;
        v12 |= *(_DWORD *)(v10 + 4);
      }
      v10 += 32LL;
      --v17;
    }
    while ( v17 );
    BYTE4(v42) = v14;
    DWORD2(v42) = v12;
    *((_QWORD *)&v43 + 1) = v13;
    *(_QWORD *)&v43 = v15;
    v20 = v43;
    *(_OWORD *)(a2 + 96) = v42;
    *(_OWORD *)(a2 + 112) = v20;
    memset(v44, 0, 0x68uLL);
    LOBYTE(v21) = 1;
    EtwpUpdateGuidFilterData(a2, v9, v21, v44);
    v22 = *(_QWORD **)(a2 + 56);
    if ( v22 != (_QWORD *)(a2 + 56) )
    {
      v23 = v38;
      LOBYTE(v16) = ~(_BYTE)v16;
      LODWORD(v37) = v16;
      do
      {
        if ( a3 )
        {
          v33 = KeGetCurrentThread();
          v24 = (__int64)(v22 - 2);
          v25 = (char *)v22 + 85;
          --v33->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v22[2] + 408LL, 0LL);
          v23 = v38;
          v34 = 1;
          *(_QWORD *)(v22[2] + 416LL) = KeGetCurrentThread();
        }
        else
        {
          v24 = (__int64)v22;
          v25 = (char *)v22 + 100;
        }
        v26 = *v25;
        v22 = (_QWORD *)*v22;
        v27 = *v25 & v16;
        *v25 = v27;
        if ( (*(_BYTE *)(v24 + 98) & 8) != 0 && v40 != v41 || v27 == v26 )
        {
          v7 = v36;
        }
        else
        {
          EtwpComputeRegEntryEnableInfo(v24, (__int64)&Source2);
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v24 + 100));
          v29 = SchematizedFilterSize;
          v30 = 120;
          if ( SchematizedFilterSize )
            v30 = SchematizedFilterSize + 136;
          if ( v23 )
          {
            if ( v23[1] != v30 || RtlCompareMemory(v23 + 18, &Source2, 0x20uLL) != 32 )
            {
              EtwpUnreferenceDataBlock(v23);
              v23 = 0LL;
              v38 = 0LL;
            }
            if ( v23 )
              goto LABEL_26;
          }
          v31 = EtwpAllocDataBlock(v30, 0LL);
          v23 = v38;
          v36 = v31;
          if ( v31 >= 0 )
          {
            *v38 = 3;
            v23[1] = v30;
            v32 = *(_QWORD *)(v24 + 32);
            BYTE3(v39) = 0;
            *(_OWORD *)(v23 + 10) = *(_OWORD *)(v32 + 40);
            *(_OWORD *)(v23 + 18) = Source2;
            *(_OWORD *)(v23 + 22) = v46;
            v23[28] = *(_BYTE *)(a2 + 91) & 1;
            LOWORD(v39) = *(_WORD *)(a2 + 88);
            BYTE2(v39) = *(_BYTE *)(a2 + 90);
            HIDWORD(v39) = *(_DWORD *)(a2 + 80);
            *((_QWORD *)v23 + 13) = v39;
            if ( v29 )
            {
              v23[33] = 0x80000000;
              v23[32] = v29;
              *((_QWORD *)v23 + 15) = 136LL;
              EtwpCopySchematizedFilters(v23 + 34);
              v23[29] = 1;
            }
            else
            {
              v23[29] = 0;
            }
          }
          if ( v23 )
          {
LABEL_26:
            v7 = EtwpSendDataBlock(v24, v23);
            v36 = v7;
          }
          else
          {
            v7 = v36;
          }
          LOBYTE(v16) = v37;
        }
        if ( v34 )
        {
          *(_QWORD *)(*(_QWORD *)(v24 + 32) + 416LL) = 0LL;
          ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v24 + 32) + 408LL), 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v23 = v38;
          v34 = 0;
        }
      }
      while ( v22 != (_QWORD *)(a2 + 56) );
      if ( v23 )
        EtwpUnreferenceDataBlock(v23);
    }
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx((__int64 *)(a2 + 408), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v7;
}
