/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C00320C0
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C00213FC (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00AE800 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  int v2; // r8d
  __int64 v3; // r9
  struct PPL_POOL_HANDLE__ *v6; // rdi
  unsigned int *v7; // rcx
  SIZE_T DataSize; // r14
  int v9; // eax
  unsigned int v10; // r14d
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v12; // al
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // r12d
  KAcquireSpinLock v19; // [rsp+40h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0LL;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_e806c7b12e263323da2330dd0ab8d056_Traceguids,
      NdisHandle);
    v7 = &WPP_RECORDER_INITIALIZED;
  }
  if ( Parameters->Header.Type != 0x80 || !Parameters->Header.Revision )
    goto LABEL_11;
  DataSize = Parameters->DataSize;
  v9 = 176;
  if ( !(_DWORD)DataSize )
    goto LABEL_6;
  if ( (unsigned int)DataSize <= 0x100000 )
  {
    v16 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize);
    v9 = DataSize - ((v16 - 1) & 7) + MmSizeOfMdl((PVOID)0xFFF, DataSize) + 183;
LABEL_6:
    v10 = (v9 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool((__int64)v7, v10, Parameters->PoolTag, v3, 0);
    v6 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 268;
      *((_WORD *)Pool + 1) = 384;
      *((_QWORD *)Pool + 5) = NdisHandle;
      *((_DWORD *)Pool + 14) = Parameters->PoolTag;
      if ( Parameters->DataSize )
      {
        *((_DWORD *)Pool + 22) |= 1u;
        *((_DWORD *)Pool + 23) = Parameters->DataSize;
        v17 = Parameters->DataSize;
        v18 = 7 - ((MmSizeOfMdl((PVOID)0xFFF, v17) - 1) & 7);
        *((_DWORD *)v6 + 24) = v18 + MmSizeOfMdl((PVOID)0xFFF, v17);
      }
      *((_DWORD *)v6 + 8) = v10;
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 8);
      *((_QWORD *)v6 + 3) = (char *)v6 + 16;
      *((_QWORD *)v6 + 2) = (char *)v6 + 16;
      v19.m_lock = (KSpinLockBase *)&qword_1C00EE0F8;
      v12 = KeAcquireSpinLockRaiseToDpc(&qword_1C00EE0F8);
      v13 = qword_1C00EE2C0;
      v14 = (_QWORD *)((char *)v6 + 72);
      if ( *(__int64 **)(qword_1C00EE2C0 + 8) != &qword_1C00EE2C0 )
        __fastfail(3u);
      *v14 = qword_1C00EE2C0;
      *((_QWORD *)v6 + 10) = &qword_1C00EE2C0;
      *(_QWORD *)(v13 + 8) = v14;
      qword_1C00EE2C0 = (__int64)v6 + 72;
      KeReleaseSpinLock(&qword_1C00EE0F8, v12);
      v19.m_oldIrql = -1;
      KAcquireSpinLock::~KAcquireSpinLock(&v19);
      *((_QWORD *)v6 + 6) = retaddr;
    }
    goto LABEL_11;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v6;
  WPP_RECORDER_SF_PP(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    (unsigned int)&WPP_e806c7b12e263323da2330dd0ab8d056_Traceguids,
    v2,
    11,
    (__int64)&WPP_e806c7b12e263323da2330dd0ab8d056_Traceguids,
    Parameters->DataSize);
LABEL_11:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xCu,
      (struct _GUID *)&WPP_e806c7b12e263323da2330dd0ab8d056_Traceguids,
      (char)NdisHandle,
      v6);
  return v6;
}
