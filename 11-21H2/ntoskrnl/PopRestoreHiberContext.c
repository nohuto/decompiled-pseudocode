/*
 * XREFs of PopRestoreHiberContext @ 0x140A4C960
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 * Callees:
 *     IoNotifyDump @ 0x14038D2E0 (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x14038D354 (IoInitializeDumpStack.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopHiberReadChecksums @ 0x140A4BEC4 (PopHiberReadChecksums.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140A4D4A4 (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x140AADB90 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // rdx
  _DWORD *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // eax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  void (*v16)(void); // rax
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // r11
  __int64 v21; // rdi
  unsigned int v22; // ebp
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  int v30; // eax
  char v31; // cl
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+90h] [rbp+8h]

  v34 = 0LL;
  v35 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return result;
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)Number << 7) + 80) = 0LL;
  if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_140C547E0 = 0;
    v29 = __rdtsc();
    if ( qword_140C547D8 )
    {
      v30 = BgLibraryInitialize(qword_140C547D8, 0xFFFFFFFFLL);
      v31 = byte_140C547E0;
      if ( v30 >= 0 )
        v31 = 1;
      byte_140C547E0 = v31;
    }
    v32 = __rdtsc();
    qword_140C22E80 += (((unsigned __int64)HIDWORD(v32) << 32) | (unsigned int)v32) - v29;
  }
  if ( !Number )
  {
    v5 = 0LL;
    v6 = *(_QWORD **)(BugCheckParameter3 + 200);
    v36 = __rdtsc();
    if ( v6[11] == v6[69] )
      v5 = v6[72];
    *(_QWORD *)(BugCheckParameter3 + 400) = v5;
    v7 = qword_140C22C58;
    v8 = *(_DWORD *)(BugCheckParameter3 + 280);
    v9 = *(_QWORD *)(BugCheckParameter3 + 272);
    memset(qword_140C22C58, 0, 0x40uLL);
    v7[6] = 0;
    *(_QWORD *)v7 = v9;
    v7[2] = v8;
    *((_QWORD *)v7 + 2) = v5;
    *(_BYTE *)(BugCheckParameter3 + 4) = 1;
    IoNotifyDump(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 400) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = &v34;
      *(_QWORD *)&v34 = qword_140C22BD8;
      *((_QWORD *)&v34 + 1) = qword_140C22BD8;
      v35 = 0LL;
      ((void (__fastcall *)(_QWORD))off_140C01EA8[0])(0LL);
      v10 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v11 = v10;
      if ( v10 < 0 || PopSimulateHiberBugcheck == 4 )
      {
        PopCheckpointSystemSleep(28);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v11, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v12 = __rdtsc();
      v13 = v36;
      qword_140C22E60 = (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12) - v36;
      v14 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( *(_QWORD *)(v14 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      PopHiberReadChecksums(BugCheckParameter3);
      v15 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v15 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        PopRequestRead(BugCheckParameter3);
        if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, (__int64)PopDecompressCallback) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 328) )
        {
          _mm_pause();
        }
      }
      PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
      v16 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
      if ( v16 )
        v16();
    }
    else
    {
      v13 = v36;
    }
    IoNotifyDump(3);
    ((void (__fastcall *)(__int64))off_140C01EA8[0])(1LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( 1 )
    {
      v17 = *(_DWORD *)(BugCheckParameter3 + 256);
      if ( *(_DWORD *)(BugCheckParameter3 + 16) == v17 )
        break;
      _mm_pause();
    }
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0;
    if ( v17 )
    {
      v23 = *(_QWORD *)(BugCheckParameter3 + 264);
      do
      {
        v24 = v4;
        v25 = (unsigned __int64)v22 << 7;
        qword_140C22E40 += *(_QWORD *)(v25 + v23 + 64);
        qword_140C22E50 += *(_QWORD *)(v25 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
        qword_140C22E78 += *(_QWORD *)(v25 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
        v23 = *(_QWORD *)(BugCheckParameter3 + 264);
        v4 = *(_QWORD *)(v25 + v23 + 64) + *(_QWORD *)(v25 + v23 + 72);
        if ( v4 <= v24 )
          v4 = v24;
        v18 += *(_QWORD *)(v25 + v23 + 88);
        v19 += *(_QWORD *)(v25 + v23 + 96);
        ++v22;
        v20 += *(_QWORD *)(v25 + v23 + 104);
        v21 += *(_QWORD *)(v25 + v23 + 112);
        v17 = *(_DWORD *)(BugCheckParameter3 + 256);
      }
      while ( v22 < v17 );
    }
    v26 = v18 / (v20 + 1);
    v27 = v19 / (v21 + 1);
    if ( v27 > v26 )
    {
      v33 = 100 * (qword_140C22E48 * v17 / (v20 + v21 + 1) - v26) / (v27 - v26);
      if ( v33 > 99 )
      {
        dword_140C22C04 = 99;
        goto LABEL_32;
      }
      dword_140C22C04 = v33;
      if ( (int)v33 >= 1 )
        goto LABEL_32;
    }
    dword_140C22C04 = 1;
LABEL_32:
    v28 = __rdtsc();
    qword_140C22E68 = (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v13;
    result = (struct _KPRCB *)(qword_140C22E68 - qword_140C22E60 - v4);
    qword_140C22E38 = (__int64)result;
    return result;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
