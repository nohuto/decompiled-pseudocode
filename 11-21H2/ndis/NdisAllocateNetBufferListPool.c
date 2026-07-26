/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C0021140
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C00213FC (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00AE800 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  unsigned __int16 v2; // r9
  NDIS_HANDLE v3; // rsi
  unsigned int v4; // ecx
  struct PPL_POOL_HANDLE__ *v5; // rbx
  unsigned int *v7; // rdx
  unsigned __int8 fAllocateNetBuffer; // r12
  int ContextSize; // r15d
  SIZE_T DataSize; // r14
  int v11; // esi
  unsigned int v12; // esi
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v18; // r13d
  KAcquireSpinLock v19; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  int v22; // [rsp+98h] [rbp+10h]

  v3 = NdisHandle;
  v4 = 0;
  v5 = 0LL;
  v22 = 0;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
      v3);
    v7 = &WPP_RECORDER_INITIALIZED;
  }
  if ( Parameters->Header.Type != 0x80 || !Parameters->Header.Revision )
    goto LABEL_17;
  fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
  ContextSize = Parameters->ContextSize;
  DataSize = Parameters->DataSize;
  v11 = fAllocateNetBuffer != 0 ? 560 : 384;
  if ( (_WORD)ContextSize )
  {
    if ( (ContextSize & 7) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v7,
        21,
        11,
        (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
        Parameters->ContextSize);
      goto LABEL_16;
    }
    v11 += ContextSize + 16;
  }
  if ( (_DWORD)DataSize )
  {
    if ( !fAllocateNetBuffer )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x15u,
        0xCu,
        (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids);
      goto LABEL_16;
    }
    if ( (unsigned int)DataSize > 0x100000 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_PP(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        (unsigned int)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
        13,
        (__int64)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
        Parameters->DataSize);
      goto LABEL_16;
    }
    v18 = 7 - ((MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) - 1) & 7);
    v22 = v18 + MmSizeOfMdl((PVOID)0xFFF, DataSize);
    v11 += DataSize + v22;
  }
  v12 = (v11 + 7) & 0xFFFFFFF8;
  Pool = ndisPplCreatePool(v4, v12, Parameters->PoolTag, v2, 1u);
  v5 = Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = 269;
    *((_WORD *)Pool + 1) = 384;
    *((_QWORD *)Pool + 5) = NdisHandle;
    *((_DWORD *)Pool + 14) = Parameters->PoolTag;
    *((_BYTE *)Pool + 32) = Parameters->ProtocolId;
    if ( fAllocateNetBuffer )
      *((_DWORD *)Pool + 15) |= 1u;
    if ( (_WORD)ContextSize )
    {
      *((_DWORD *)Pool + 15) |= 2u;
      *((_WORD *)Pool + 17) = ContextSize;
    }
    if ( (_DWORD)DataSize )
    {
      *((_DWORD *)Pool + 15) |= 4u;
      *((_DWORD *)Pool + 23) = v22;
      *((_DWORD *)Pool + 22) = DataSize;
    }
    *((_DWORD *)Pool + 24) = v12;
    KeInitializeSpinLock((PKSPIN_LOCK)Pool + 8);
    *((_QWORD *)v5 + 3) = (char *)v5 + 16;
    *((_QWORD *)v5 + 2) = (char *)v5 + 16;
    v19.m_lock = (KSpinLockBase *)&qword_1C00ECE48;
    v14 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECE48);
    v15 = qword_1C00ECE98;
    v16 = (_QWORD *)((char *)v5 + 72);
    if ( *(__int64 **)(qword_1C00ECE98 + 8) != &qword_1C00ECE98 )
      __fastfail(3u);
    *v16 = qword_1C00ECE98;
    *((_QWORD *)v5 + 10) = &qword_1C00ECE98;
    *(_QWORD *)(v15 + 8) = v16;
    qword_1C00ECE98 = (__int64)v5 + 72;
    KeReleaseSpinLock(&qword_1C00ECE48, v14);
    v19.m_oldIrql = -1;
    KAcquireSpinLock::~KAcquireSpinLock(&v19);
    *((_QWORD *)v5 + 6) = retaddr;
  }
LABEL_16:
  LOBYTE(v3) = (_BYTE)NdisHandle;
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xEu,
      (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
      (char)v3,
      v5);
  return v5;
}
