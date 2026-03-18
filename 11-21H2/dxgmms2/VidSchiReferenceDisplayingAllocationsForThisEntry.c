/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E20
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  unsigned int v5; // r15d
  int v8; // r13d
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned int v14; // ebp
  _WORD *v15; // r10
  __int16 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  struct _VIDSCH_SYNC_OBJECT **v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  _WORD *v31; // [rsp+60h] [rbp-68h]
  unsigned __int64 v32; // [rsp+68h] [rbp-60h] BYREF
  __int64 v33; // [rsp+70h] [rbp-58h]
  unsigned int v35; // [rsp+D8h] [rbp+10h]
  unsigned int v36; // [rsp+E0h] [rbp+18h]

  v4 = *(_DWORD **)(a4 + 1176);
  v5 = 0;
  v8 = 0;
  v9 = *v4 & 0x3FF;
  if ( *(_BYTE *)(a2 + 156) )
    v5 = (*v4 >> 10) & 0x3FF;
  v10 = !_BitScanForward(&v11, v9);
  v35 = v5;
  if ( v10 )
    LOBYTE(v11) = -1;
  v12 = (char)v11;
  v10 = !_BitScanForward(&v11, v5);
  if ( v10 )
    LOBYTE(v11) = -1;
  v11 = (char)v11;
  v36 = (char)v11;
  while ( v9 || v5 )
  {
    if ( v12 >= v11 )
    {
      v25 = -1;
      v5 &= ~(1 << v11);
      v10 = !_BitScanForward(&v11, v5);
      v35 = v5;
      if ( !v10 )
        v25 = v11;
      v11 = v25;
      v36 = v25;
    }
    else
    {
      v14 = 0;
      if ( *(_DWORD *)(a4 + 1096) )
      {
        do
        {
          v15 = &a3[32 * (((unsigned __int64)v12 << 6) + v14)];
          v31 = v15;
          *((_QWORD *)v15 + 387) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(v8
                                                                             + v14
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + 48)
                                             + 96LL);
          *((_QWORD *)v15 + 386) = *(_QWORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1176)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                             + 24);
          v16 = a3[22026];
          if ( *(_QWORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                         + *(_QWORD *)(a4 + 1176)
                         + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                         + 56) )
          {
            a3[22026] = v16 | (1 << v12);
            *((_QWORD *)v15 + 388) = *(_QWORD *)(((unsigned __int64)(v8 + v14
                                                                        * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                               + *(_QWORD *)(a4 + 1176)
                                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                               + 56);
          }
          else
          {
            a3[22026] = v16 & ~(1 << v12);
          }
          v15[1560] = *(_WORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                               + *(_QWORD *)(a4 + 1176)
                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                               + 32);
          *((_QWORD *)v15 + 389) = *(_QWORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1176)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                             + 40);
          v17 = *(_QWORD *)(a4 + 1176);
          v18 = ((unsigned __int64)(v14 * *(_DWORD *)(v17 + 4) + v8) << 6)
              + *(_DWORD *)(v17 + 4) * ((8 * *(_DWORD *)(v17 + 8) + 231) & 0xFFFFFFF8);
          v19 = *(_QWORD *)(v17 + v18 + 64);
          v33 = *(_QWORD *)(v18 + v17 + 72);
          v20 = *((_QWORD *)v15 + 387);
          v32 = v19;
          v21 = *(struct _VIDSCH_SYNC_OBJECT ***)(v20 + 24);
          if ( v21 )
          {
            if ( v19 )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v21, 0, &v32, 0LL) < 0 )
              {
                WdLogSingleEntry2(1LL, **(_QWORD **)(*((_QWORD *)v31 + 387) + 24LL), v32);
                ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to signal FlipTo fence 0x%p value 0x%I64x",
                  **(_QWORD **)(*((_QWORD *)v31 + 387) + 24LL),
                  v32,
                  0LL,
                  0LL,
                  0LL);
              }
              v15 = v31;
            }
            v26 = *((_QWORD *)v15 + 387);
            v27 = v33;
            *((_QWORD *)v15 + 391) = v33;
            v28 = *(_QWORD *)(v26 + 24);
            v29 = 2LL * *(unsigned int *)(v28 + 32);
            *(_OWORD *)(v28 + 8 * v29 + 40) = 0LL;
            *(_DWORD *)(v28 + 32) = ((unsigned __int8)*(_DWORD *)(v28 + 32) + 1) & 7;
            *(_DWORD *)(v28 + 8 * v29 + 40) = 1;
            *(_QWORD *)(v28 + 8 * v29 + 48) = v27;
          }
          else
          {
            v22 = *(_QWORD *)(v20 + 16);
            if ( v22 )
              _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
          }
          ++v14;
        }
        while ( v14 < *(_DWORD *)(a4 + 1096) );
        v5 = v35;
      }
      v23 = *(_QWORD *)(v12 * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                      + *(_QWORD *)(a4 + 1176)
                      + 224LL);
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 36));
        v30 = (unsigned __int64)v12 << 12;
        *(_QWORD *)((char *)a3 + v30 + 3136) = *(_QWORD *)(v12
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + 224LL);
        *(_QWORD *)((char *)a3 + v30 + 3144) = *(_QWORD *)(v12
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + 232LL);
      }
      a3[22024] |= 1 << v12;
      v9 &= ~(1 << v12);
      v10 = !_BitScanForward((unsigned int *)&v24, v9);
      if ( v10 )
        LOBYTE(v24) = -1;
      v12 = (char)v24;
      v11 = v36;
    }
    ++v8;
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[22025] = result;
  return result;
}
