/*
 * XREFs of sub_140513C1C @ 0x140513C1C
 * Callers:
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 */

__int64 __fastcall sub_140513C1C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // rbp
  PMDL v11; // r15
  PMDL v12; // rdi
  ULONG v13; // r12d
  unsigned __int64 v15; // r9
  struct _MDL **v16; // r9
  PVOID v17; // rcx
  unsigned __int64 v18; // rbx
  char v19; // r13
  MEMORY_CACHING_TYPE v20; // esi
  PVOID v21; // rbp
  unsigned int v22; // esi
  int v23; // r8d
  int v24; // edx
  __int16 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  bool v33; // zf
  struct _MDL **v34; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp+10h]
  __int64 v38; // [rsp+B0h] [rbp+18h]
  _QWORD *v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v8 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v37 = sub_14045693C(a1);
  KeAcquireInStackQueuedSpinLock(&qword_140CFCED8, &LockHandle);
  v11 = qword_140C5A848;
  v12 = qword_140C5A838;
  v13 = a3 & 0xFFF;
  v15 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12;
  qword_140C5A848->ByteOffset = v13;
  v11->ByteCount = 4096 - v13;
  v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v12->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v16 = (struct _MDL **)(a2 + 8 * ((unsigned int)v15 + 6LL));
  v12->ByteOffset = v13;
  for ( v12->ByteCount = 4096 - v13; ; v12->ByteCount = v24 )
  {
    v34 = v16;
    if ( !a5 )
      break;
    if ( (v8[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v18 = v13 + (v8[6] & 0xFFFFFFFFFFFFF000uLL);
      v19 = 0;
    }
    else
    {
      v17 = qword_140C5A850;
      v12[1].Next = (struct _MDL *)(*v8 >> 12);
      v18 = (unsigned __int64)MmMapLockedPagesWithReservedMapping(v17, 0x446C6148u, v12, MmCached);
      if ( !v18 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF00uLL, 0LL, 0LL);
      v16 = v34;
      v19 = 1;
    }
    v20 = MmNonCached;
    v11[1].Next = *v16;
    while ( 1 )
    {
      v21 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x446C6148u, v11, v20);
      if ( v21 )
        break;
      if ( ++v20 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v22 = a5;
    if ( a5 >= 4096 - v13 )
      v22 = 4096 - v13;
    v13 = 0;
    if ( a6 )
    {
      if ( !a7 )
        sub_14042A5E0(v18, v21);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 437) )
      {
        v23 = ~(v37 - 1);
        v12->ByteOffset = v23 & v18 & 0xFFF;
        v12->StartVa = (PVOID)((v18 - ((unsigned int)v18 - (v23 & (unsigned int)v18))) & 0xFFFFFFFFFFFFF000uLL);
        v12->ByteCount = v23 & (v22 + v37 + v18 - (v23 & v18) - 1);
        if ( !a8 )
          KeFlushIoBuffers((ULONG_PTR)v12, 1, 1, v37);
      }
      if ( !a7 )
        memmove(v21, (const void *)v18, v22);
    }
    MmUnmapReservedMapping(v21, 0x446C6148u, v11);
    if ( v19 )
      MmUnmapReservedMapping((PVOID)v18, 0x446C6148u, v12);
    a5 -= v22;
    v24 = a5;
    v16 = v34 + 1;
    v25 = v22 + v38;
    v8 = (_QWORD *)v39[1];
    v26 = v22 + v38;
    v39 = v8;
    if ( a5 > 0x1000 )
      v24 = 4096;
    v38 += v22;
    v27 = v26 & 0xFFFFFFFFFFFFF000uLL;
    v11->ByteCount = v24;
    v11->StartVa = (PVOID)v27;
    v28 = v25 & 0xFFF;
    v11->ByteOffset = v28;
    v12->StartVa = (PVOID)v27;
    v12->ByteOffset = v28;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v33 = ((unsigned int)result & *(_DWORD *)(v32 + 20)) == 0;
        *(_DWORD *)(v32 + 20) &= result;
        if ( v33 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
