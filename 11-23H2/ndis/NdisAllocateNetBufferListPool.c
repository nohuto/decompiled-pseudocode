/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C001ABE0
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C001AED4 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x1C001B098 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00B4700 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  NDIS_HANDLE v3; // rsi
  struct PPL_POOL_HANDLE__ *v4; // rbx
  bool v5; // r14
  unsigned int v6; // ecx
  unsigned __int16 v7; // r9
  unsigned int *v8; // rdx
  UCHAR Revision; // al
  unsigned __int8 fAllocateNetBuffer; // r13
  int ContextSize; // r12d
  SIZE_T DataSize; // r15
  int v13; // esi
  unsigned int v14; // esi
  struct PPL_POOL_HANDLE__ *Pool; // rax
  _DWORD *v16; // rcx
  KIRQL v17; // al
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned int Flags; // r14d
  KAcquireSpinLock v22; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+98h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+10h]
  void *v26; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v27; // [rsp+A8h] [rbp+20h] BYREF

  v3 = NdisHandle;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0;
  v4 = 0LL;
  v5 = 0;
  RtlGetCallersAddress(&v26, &v27);
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
      v3);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( Parameters->Header.Type != 0x80 )
    goto LABEL_18;
  Revision = Parameters->Header.Revision;
  if ( !Revision )
    goto LABEL_18;
  if ( Revision >= 2u )
  {
    Flags = Parameters->Flags;
    if ( (Flags & 0xFFFFFFFE) != 0 )
      ndisBugCheckEx(0x2DuLL, 4uLL, Flags, 0LL);
    v5 = Flags & 1;
  }
  fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
  ContextSize = Parameters->ContextSize;
  DataSize = Parameters->DataSize;
  v13 = fAllocateNetBuffer != 0 ? 560 : 384;
  if ( (_WORD)ContextSize )
  {
    if ( (ContextSize & 7) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v4;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v8,
        21,
        11,
        (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
        Parameters->ContextSize);
      goto LABEL_17;
    }
    v13 += ContextSize + 16;
  }
  if ( (_DWORD)DataSize )
  {
    if ( !fAllocateNetBuffer )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x15u,
        0xCu,
        (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids);
      goto LABEL_17;
    }
    if ( (unsigned int)DataSize > 0x100000 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v4;
      WPP_RECORDER_SF_PP(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        (unsigned int)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
        13,
        (__int64)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
        Parameters->DataSize);
      goto LABEL_17;
    }
    v25 = 7 - ((MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) - 1) & 7);
    v24 = v25 + MmSizeOfMdl((PVOID)0xFFF, DataSize);
    v13 += DataSize + v24;
  }
  v14 = (v13 + 7) & 0xFFFFFFF8;
  Pool = ndisPplCreatePool(v6, v14, Parameters->PoolTag, v7, 1u);
  v4 = Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = 269;
    *((_WORD *)Pool + 1) = 384;
    *((_QWORD *)Pool + 6) = NdisHandle;
    *((_DWORD *)Pool + 9) = Parameters->PoolTag;
    *((_BYTE *)Pool + 40) = Parameters->ProtocolId;
    v16 = (_DWORD *)((char *)Pool + 44);
    if ( fAllocateNetBuffer )
      *v16 |= 1u;
    if ( (_WORD)ContextSize )
    {
      *v16 |= 2u;
      *((_WORD *)Pool + 21) = ContextSize;
    }
    if ( (_DWORD)DataSize )
    {
      *v16 |= 4u;
      *((_DWORD *)Pool + 23) = v24;
      *((_DWORD *)Pool + 22) = DataSize;
    }
    ndisPplConfigureVerifier((struct _NDIS_POOL_HEADER *)Pool, v26, v5);
    *((_DWORD *)v4 + 8) = v14;
    KeInitializeSpinLock((PKSPIN_LOCK)v4 + 8);
    *((_QWORD *)v4 + 3) = (char *)v4 + 16;
    *((_QWORD *)v4 + 2) = (char *)v4 + 16;
    v22.m_lock = (KSpinLockBase *)&qword_1C00F5E50;
    v17 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5E50);
    v18 = qword_1C00F5EA0;
    v19 = (_QWORD *)((char *)v4 + 72);
    if ( *(__int64 **)(qword_1C00F5EA0 + 8) != &qword_1C00F5EA0 )
      __fastfail(3u);
    *v19 = qword_1C00F5EA0;
    *((_QWORD *)v4 + 10) = &qword_1C00F5EA0;
    *(_QWORD *)(v18 + 8) = v19;
    qword_1C00F5EA0 = (__int64)v4 + 72;
    KeReleaseSpinLock(&qword_1C00F5E50, v17);
    v22.m_oldIrql = -1;
    KAcquireSpinLock::~KAcquireSpinLock(&v22);
    *((_QWORD *)v4 + 7) = v26;
  }
LABEL_17:
  LOBYTE(v3) = (_BYTE)NdisHandle;
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xEu,
      (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
      (char)v3,
      v4);
  return v4;
}
