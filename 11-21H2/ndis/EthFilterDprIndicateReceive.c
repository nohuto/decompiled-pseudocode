/*
 * XREFs of EthFilterDprIndicateReceive @ 0x1C005D6C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C005D624 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008A7B0 (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 */

void __fastcall EthFilterDprIndicateReceive(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  unsigned int Number; // r13d
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  int v21; // esi
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rdx
  int v26; // ebp
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // ebx
  int v38; // eax
  __int64 v39; // r14
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+44h] [rbp-44h]

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v41 = Number;
  v12 = a1;
  if ( a1 && (*(_DWORD *)(a1[37] + 120) & 0x20000000) != 0 )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
    v13 = v12[41];
    if ( v13 && *(_BYTE *)(*(_QWORD *)(v13 + 24) + 56LL) < 6u )
    {
      if ( a5 >= 0xE && a8 || (v12[38] & 0xA0) != 0 )
      {
        ethFilterReceivePacketStats((struct _NDIS_MINIPORT_BLOCK *)v12[37], (unsigned __int8 *)a3, a8);
        v15 = v12[41];
        if ( v15 )
        {
          *(_BYTE *)((Number << 12) + *(_QWORD *)(v15 + 720)) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, int))(v15 + 128))(
            *(_QWORD *)(v15 + 32),
            a2,
            a4,
            a5,
            a6,
            a7,
            v14);
        }
      }
      goto LABEL_55;
    }
    if ( a5 >= 0xE && a8 )
    {
      if ( (*(_BYTE *)a3 & 1) == 0 )
      {
        v16 = v12[37];
        v17 = *(_QWORD *)(v16 + 3152);
        if ( v17 )
        {
          v18 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v17 + v18 + 32);
          v16 = v12[37];
        }
        v19 = *(_QWORD *)(v16 + 3152);
        if ( v19 )
        {
          v20 = (_QWORD *)(v19 + 112LL * KeGetPcr()->Prcb.Number);
          v20[1] += a8;
          *v20 += a8;
        }
        v21 = 0;
        if ( (v12[38] & 0xA4) != 0
          && (*(_DWORD *)((char *)v12 + 338) != *(_DWORD *)(a3 + 2) || *((_WORD *)v12 + 168) != *(_WORD *)a3) )
        {
          v21 = 1;
        }
        v22 = *v12;
        if ( !*v12 )
          goto LABEL_55;
        do
        {
          v23 = *(_DWORD *)(v22 + 432);
          v24 = *(_QWORD *)(v22 + 424);
          if ( (v23 & 0xA0) != 0 || !v21 && (v23 & 1) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v22 + 128))(
              *(_QWORD *)(v22 + 32),
              a2,
              a4,
              a5,
              a6,
              a7,
              a8);
            *(_BYTE *)((Number << 12) + *(_QWORD *)(v22 + 720)) = 1;
          }
          v22 = v24;
        }
        while ( v24 );
        goto LABEL_54;
      }
      if ( *(_BYTE *)a3 == 0xFF
        && *(_BYTE *)(a3 + 1) == 0xFF
        && *(_BYTE *)(a3 + 2) == 0xFF
        && *(_BYTE *)(a3 + 3) == 0xFF
        && *(_BYTE *)(a3 + 4) == 0xFF
        && *(_BYTE *)(a3 + 5) == 0xFF )
      {
        v25 = v12[37];
        v26 = 8;
        v27 = *(_QWORD *)(v25 + 3152);
        if ( v27 )
        {
          v28 = (_QWORD *)(v27 + 112LL * KeGetPcr()->Prcb.Number);
          v28[2] += a8;
          *v28 += a8;
          v25 = v12[37];
        }
        v29 = *(_QWORD *)(v25 + 3152);
        if ( v29 )
        {
          v30 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v29 + v30 + 48);
        }
      }
      else
      {
        v31 = v12[37];
        v26 = 2;
        v32 = *(_QWORD *)(v31 + 3152);
        if ( v32 )
        {
          v33 = (_QWORD *)(v32 + 112LL * KeGetPcr()->Prcb.Number);
          v33[3] += a8;
          *v33 += a8;
          v31 = v12[37];
        }
        v34 = *(_QWORD *)(v31 + 3152);
        if ( v34 )
        {
          v35 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v34 + v35 + 40);
        }
      }
    }
    else
    {
      v26 = 32;
    }
    v36 = *v12;
    if ( !*v12 )
    {
LABEL_55:
      NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v12[36], &LockState);
      return;
    }
    v37 = v41;
    do
    {
      v38 = *(_DWORD *)(v36 + 432);
      v39 = *(_QWORD *)(v36 + 424);
      if ( (v38 & 0xA0) != 0
        || v26 == 8 && (v38 & 8) != 0
        || v26 == 2
        && ((v38 & 4) != 0
         || (v38 & 2) != 0
         && ethFindMulticast(
              *(_DWORD *)(v36 + 456),
              *(struct _ETH_MULTICAST_WRAPPER **)(v36 + 448),
              0LL,
              (unsigned __int8 *const)a3)) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v36 + 128))(
          *(_QWORD *)(v36 + 32),
          a2,
          a4,
          a5,
          a6,
          a7,
          a8);
        *(_BYTE *)((v37 << 12) + *(_QWORD *)(v36 + 720)) = 1;
      }
      v36 = v39;
    }
    while ( v39 );
LABEL_54:
    v12 = a1;
    goto LABEL_55;
  }
}
