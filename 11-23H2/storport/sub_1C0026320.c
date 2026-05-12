/*
 * XREFs of sub_1C0026320 @ 0x1C0026320
 * Callers:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 *     sub_1C0026290 @ 0x1C0026290 (sub_1C0026290.c)
 *     sub_1C004AEAC @ 0x1C004AEAC (sub_1C004AEAC.c)
 */

void __fastcall sub_1C0026320(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  _QWORD **v7; // r14
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  char *v11; // rax
  __int64 v12; // rcx
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  void *v16; // rdx
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  if ( sub_1C0008B84(a1) )
  {
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004AEAC(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_1C00896E0,
        v6,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2,
        a3);
    v7 = (_QWORD **)(a1 + 1792);
    if ( a3 )
    {
      v9 = *v7;
      *(_QWORD *)(a1 + 2056) = MEMORY[0xFFFFF78000000008];
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        *((_DWORD *)v9 + 8) |= 0x40u;
      else
        *((_DWORD *)v9 + 8) &= ~0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2108);
      if ( *(_QWORD *)(a1 + 2056) )
      {
        if ( ((*v7)[4] & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        {
          v8 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 2056);
          *(_QWORD *)(a1 + 2064) += v8 / 0x2710;
          if ( v8 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2116);
        }
        *(_QWORD *)(a1 + 2056) = 0LL;
      }
    }
    *((_DWORD *)*v7 + 4) = a3;
    if ( *(_DWORD *)(a1 + 976) && a3 )
      sub_1C0012E40(*(_QWORD *)(a1 + 24));
    if ( ((*v7)[4] & 4) != 0 && sub_1C0004890(a1, 7) )
    {
      v10 = 1;
      v11 = sub_1C0012F88((int *)(*v7)[1], a2);
      if ( v11 && *(_DWORD *)v11 == 2 )
        v10 = *((_DWORD *)v11 + 8);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v12 + 112) & 2) != 0 )
        v10 = 1;
      if ( a3 <= v10
        && *(_QWORD *)(v12 + 4896)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 1, 0)
        && !sub_1C0008BF0(*(_QWORD *)(a1 + 24), 0LL, 0LL) )
      {
        v13 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
        v14 = *(_QWORD *)(a1 + 24);
        if ( *(int *)(v14 + 308) > 1 )
        {
          *(_BYTE *)(a1 + 1960) = 1;
          *(_DWORD *)(a1 + 1964) = a3;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 4880), (PSLIST_ENTRY)(a1 + 1984));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !byte_1C0093BE8 || (byte_1C0093A02 & 0x10) == 0 )
            goto LABEL_52;
          v16 = &unk_1C0088DC8;
LABEL_51:
          sub_1C004AEAC(
            *(_QWORD *)(a1 + 24),
            (_DWORD)v16,
            v15,
            **v7,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a2,
            a3);
LABEL_52:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
          return;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      sub_1C0026290(a1);
      if ( a3 > v10 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4896LL) )
      {
LABEL_41:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 0, 1) == 1 )
          sub_1C0008BB4(*(_QWORD *)(a1 + 24), 0LL, 0LL);
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v17 + 110) & 0x40) != 0 && ((*v7)[4] & 0x1000) != 0 && *(_QWORD *)(v17 + 4896) )
      {
        if ( !a3 )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 1, 0) )
            sub_1C0008BF0(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          goto LABEL_45;
        }
        goto LABEL_41;
      }
    }
LABEL_45:
    if ( *(_DWORD *)(a1 + 976) && !a3 )
      sub_1C0012E40(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**v7, a2);
    if ( !byte_1C0093BE8 || (byte_1C0093A02 & 0x10) == 0 )
      goto LABEL_52;
    v16 = &unk_1C00891F0;
    goto LABEL_51;
  }
}
