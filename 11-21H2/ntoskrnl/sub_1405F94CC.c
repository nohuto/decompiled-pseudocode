/*
 * XREFs of sub_1405F94CC @ 0x1405F94CC
 * Callers:
 *     sub_1405F9B18 @ 0x1405F9B18 (sub_1405F9B18.c)
 * Callees:
 *     sub_140237E00 @ 0x140237E00 (sub_140237E00.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x14035F780 (RtlDecompressBufferEx.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_140381384 @ 0x140381384 (sub_140381384.c)
 *     sub_1403924A0 @ 0x1403924A0 (sub_1403924A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405B6950 @ 0x1405B6950 (sub_1405B6950.c)
 *     sub_1405FAAC8 @ 0x1405FAAC8 (sub_1405FAAC8.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 */

__int64 __fastcall sub_1405F94CC(__int64 a1, char *a2, UCHAR *a3, ULONG_PTR a4, __int64 a5)
{
  __int64 v5; // r13
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // r14
  char *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  signed __int64 *v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v20; // rax
  bool v21; // zf
  void *v22; // r14
  char v23; // al
  void *WorkSpace; // rax
  PUCHAR BaseAddress; // r13
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  __int64 v28; // rcx
  __int128 v30; // [rsp+40h] [rbp-38h] BYREF
  __int128 v31; // [rsp+50h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-18h]
  ULONG FinalUncompressedSize; // [rsp+C0h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+50h]
  PUCHAR UncompressedBuffer; // [rsp+D0h] [rbp+58h]
  char *v36; // [rsp+D8h] [rbp+60h]

  UncompressedBuffer = a3;
  v5 = a5;
  v8 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v9 = (unsigned int)(16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808)));
  v31 = 0LL;
  FinalUncompressedSize = 0;
  v34 = v8;
  v36 = &a2[-v9];
  DWORD2(v31) = -1;
  v32 = 1LL;
  v10 = *(_QWORD *)(a5 + 56);
  v30 = 0LL;
  v12 = 0LL;
  if ( (int)sub_140381130(a1, *(_DWORD *)(v10 + 16), (__int64)&v30) >= 0 )
  {
    if ( DWORD2(v31) == -1 || !DWORD2(v31) )
      v13 = (char *)&v30 + 8;
    else
      v13 = (char *)(v30 + 16LL * (unsigned int)(DWORD2(v31) - 1));
    v12 = sub_1403924A0((_DWORD *)a1, *((_QWORD *)v13 + 1));
  }
  sub_140237E00(a1, (__int64)&v30, 0);
  if ( !v12 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v12 )
    goto LABEL_14;
  v14 = 4096;
  if ( (v12[1] & 0xFFF) != 0 )
    v14 = v12[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v14 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v12, 0LL);
  v15 = sub_140381384(a1 + 192, (__int64)v12, 6LL, 2LL);
  v16 = v15 & 1;
  if ( (v15 & 1) != 0 )
  {
LABEL_15:
    v17 = (_DWORD *)(v5 + 64);
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v5 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)v18, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      sub_1402AFC00((ULONG_PTR)v18);
      v20 = KeGetCurrentThread();
      v21 = (*((_WORD *)v20 + 243))++ == 0xFFFF;
      if ( v21 && *((struct _KTHREAD **)v20 + 19) != (struct _KTHREAD *)((char *)v20 + 152) )
        KiCheckForKernelApcDelivery();
    }
    v22 = *(void **)(v5 + 48);
    memmove(v22, a2, *(unsigned __int16 *)(a4 + 4));
    v23 = sub_1405FAAC8(v22, *(unsigned __int16 *)(a4 + 4), *(unsigned int *)(a4 + 8));
    v16 = v23 & 1;
    if ( (v23 & 1) != 0 )
    {
      WorkSpace = *(void **)(v5 + 16);
      BaseAddress = UncompressedBuffer;
      if ( RtlDecompressBufferEx(
             *(_WORD *)(a1 + 992),
             UncompressedBuffer,
             0x1000u,
             (PUCHAR)v22,
             *(unsigned __int16 *)(a4 + 4),
             &FinalUncompressedSize,
             WorkSpace) >= 0
        && FinalUncompressedSize == 4096 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 1928), 1u);
        v26 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedAdd(&dword_140D32554, 1u);
        sub_1405B6950(a2, v26, dword_140D32554);
        v16 |= 2u;
      }
    }
    else
    {
      BaseAddress = UncompressedBuffer;
    }
    v27 = KeGetCurrentThread();
    v28 = *(_QWORD *)(a1 + 800);
    --*((_WORD *)v27 + 243);
    ExAcquirePushLockSharedEx(v28 + 6024, 0LL);
    *v17 = 2;
    if ( v16 < 2 )
      sub_1405FD594(
        (int)v36,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v34,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        BaseAddress);
  }
  else
  {
    sub_1405FD594(
      (int)v36,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v34,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      UncompressedBuffer);
    sub_140381384(a1 + 192, (__int64)v12, v16 + 2, v16 + 2);
  }
  return v16 >> 1;
}
