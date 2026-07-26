/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C0031630
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C001AD44 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x1C001AF08 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00B46E0 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  struct PPL_POOL_HANDLE__ *v2; // rdi
  char v5; // r14
  int v6; // r8d
  __int64 v7; // r9
  unsigned int *v8; // rcx
  UCHAR Revision; // al
  SIZE_T DataSize; // r15
  int v11; // eax
  unsigned int v12; // r15d
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // r13d
  unsigned int Flags; // r14d
  KAcquireSpinLock v22; // [rsp+40h] [rbp-38h] BYREF
  void *v23; // [rsp+88h] [rbp+10h] BYREF
  PVOID v24; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v5 = 0;
  RtlGetCallersAddress(&v23, &v24);
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      NdisHandle);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( Parameters->Header.Type != 0x80 )
    goto LABEL_12;
  Revision = Parameters->Header.Revision;
  if ( !Revision )
    goto LABEL_12;
  if ( Revision >= 2u )
  {
    Flags = Parameters->Flags;
    if ( (Flags & 0xFFFFFFFE) != 0 )
      ndisBugCheckEx(0x2DuLL, 5uLL, Flags, 0LL);
    v5 = Flags & 1;
  }
  DataSize = Parameters->DataSize;
  v11 = 176;
  if ( !(_DWORD)DataSize )
    goto LABEL_7;
  if ( (unsigned int)DataSize <= 0x100000 )
  {
    v18 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize);
    v11 = DataSize - ((v18 - 1) & 7) + MmSizeOfMdl((PVOID)0xFFF, DataSize) + 183;
LABEL_7:
    v12 = (v11 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool((__int64)v8, v12, Parameters->PoolTag, v7, 0);
    v2 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 268;
      *((_WORD *)Pool + 1) = 384;
      *((_QWORD *)Pool + 5) = NdisHandle;
      *((_DWORD *)Pool + 9) = Parameters->PoolTag;
      if ( Parameters->DataSize )
      {
        *((_DWORD *)Pool + 20) |= 1u;
        *((_DWORD *)Pool + 21) = Parameters->DataSize;
        v19 = Parameters->DataSize;
        v20 = 7 - ((MmSizeOfMdl((PVOID)0xFFF, v19) - 1) & 7);
        *((_DWORD *)v2 + 22) = v20 + MmSizeOfMdl((PVOID)0xFFF, v19);
      }
      ndisPplConfigureVerifier((struct _NDIS_POOL_HEADER *)v2, v23, v5);
      *((_DWORD *)v2 + 8) = v12;
      KeInitializeSpinLock((PKSPIN_LOCK)v2 + 7);
      *((_QWORD *)v2 + 3) = (char *)v2 + 16;
      *((_QWORD *)v2 + 2) = (char *)v2 + 16;
      v22.m_lock = (KSpinLockBase *)&qword_1C00F7140;
      v14 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F7140);
      v15 = qword_1C00F7310;
      v16 = (_QWORD *)((char *)v2 + 64);
      if ( *(__int64 **)(qword_1C00F7310 + 8) != &qword_1C00F7310 )
        __fastfail(3u);
      *v16 = qword_1C00F7310;
      *((_QWORD *)v2 + 9) = &qword_1C00F7310;
      *(_QWORD *)(v15 + 8) = v16;
      qword_1C00F7310 = (__int64)v2 + 64;
      KeReleaseSpinLock(&qword_1C00F7140, v14);
      v22.m_oldIrql = -1;
      KAcquireSpinLock::~KAcquireSpinLock(&v22);
      *((_QWORD *)v2 + 6) = v23;
    }
    goto LABEL_12;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v2;
  WPP_RECORDER_SF_PP(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    (unsigned int)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
    v6,
    11,
    (__int64)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
    Parameters->DataSize);
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xCu,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      (char)NdisHandle,
      v2);
  return v2;
}
