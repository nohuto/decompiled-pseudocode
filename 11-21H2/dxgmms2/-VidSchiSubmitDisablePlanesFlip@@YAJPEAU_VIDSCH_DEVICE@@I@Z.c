/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001B878 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C001B9AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001BA0C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  bool v13; // zf
  int v14; // eax
  char v15; // cl
  __int64 v16; // rdi
  __int64 v17; // rbx
  void *v18; // rcx
  int v19; // eax
  unsigned int v20; // r8d
  void (__fastcall *v22)(_QWORD); // rax
  __int64 v23; // [rsp+50h] [rbp-49h]
  __int64 v24; // [rsp+58h] [rbp-41h]
  _QWORD v25[2]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-29h] BYREF
  char v27; // [rsp+80h] [rbp-19h]
  _QWORD v28[4]; // [rsp+88h] [rbp-11h] BYREF
  __int16 v29; // [rsp+A8h] [rbp+Fh]
  char v30; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v31; // [rsp+108h] [rbp+6Fh]
  int v32; // [rsp+110h] [rbp+77h]
  int v33; // [rsp+118h] [rbp+7Fh]

  v31 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = a2;
  v6 = a2;
  v7 = *(_QWORD *)(v2 + 8LL * a2 + 3200);
  v24 = v7;
  if ( !v7 )
    return 0LL;
  v23 = *(_QWORD *)(v7 + 24);
  if ( !v23 )
    return 0LL;
  v8 = *(_QWORD *)(v2 + 16);
  v25[0] = 0LL;
  v25[1] = *(_QWORD *)(v8 + 2800);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v25);
  if ( v25[0] )
  {
    v9 = (unsigned int *)(v25[0] + 600LL);
    if ( !*(_BYTE *)(v25[0] + 356LL) )
      v9 = (unsigned int *)(v25[0] + 496LL);
    *v9 ^= (*v9 ^ (((1 << *(_DWORD *)(v2 + 152)) - 1) << 10)) & 0xFFC00;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 736), 1u);
    v10 = 740LL;
    if ( *(_BYTE *)(v2 + 2212) )
      v10 = 4 * v4 + 740;
    _InterlockedAdd((volatile signed __int32 *)(v10 + v2), 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + 393, 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 377, 1u);
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v2);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v4 + 3200) + 44232LL) != -1 )
    {
      v22 = *(void (__fastcall **)(_QWORD))(v2 + 3056);
      if ( v22 )
        v22(*(_QWORD *)(v2 + 3120));
    }
    v29 = 0;
    v28[0] = v2 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v28);
    v27 = 0;
    v26[1] = v26;
    v26[0] = v26;
    _InterlockedAdd((volatile signed __int32 *)a1 + v6 + 361, 1u);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 32LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v6
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v6 + 6456) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    ++*(_DWORD *)(v2 + 804);
    ++*((_DWORD *)a1 + 394);
    ++*(_DWORD *)(v7 + 2988);
    v12 = ((unsigned __int16)*v9 | (unsigned __int16)(*v9 >> 10)) & 0x3FF;
    v13 = !_BitScanForward((unsigned int *)&v14, v12);
    v32 = v14;
    while ( 1 )
    {
      v15 = -1;
      if ( !v13 )
        v15 = v14;
      if ( !v12 )
        break;
      ++*(_DWORD *)(280LL * v15 + *(_QWORD *)(v2 + 8 * v6 + 3200) + 188);
      v12 &= ~(1 << v15);
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
      v33 = v14;
    }
    v16 = *(unsigned int *)(v23 + 56);
    v17 = v23 + 1376 * v16;
    _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + 120));
    *(_DWORD *)(v17 + 1256) |= 0x10u;
    v18 = *(void **)(v17 + 1296);
    *(_QWORD *)(v17 + 1160) = a1;
    v19 = *((_DWORD *)a1 + v6 + 127);
    *(_DWORD *)(v17 + 1256) |= 0x180u;
    *(_DWORD *)(v17 + 1176) = v19;
    *(_DWORD *)(v17 + 1192) = 0;
    memmove(v18, v9, v9[3]);
    *(_DWORD *)(v23 + 56) = ((_BYTE)v16 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 808));
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 2992));
    v20 = v31;
    *(_DWORD *)(v17 + 1172) = 4;
    v30 = 0;
    VidSchiExecuteMmIoFlip((__int64)v26, v2, v20, v23, v16, &v30);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v26);
    AcquireSpinLock::Release((AcquireSpinLock *)v28);
  }
  else
  {
    WdLogSingleEntry1(6LL, 22068LL);
    DxgCoreInterface[85](
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      22068LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v25);
  return v3;
}
