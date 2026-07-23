/*
 * XREFs of MiRemoveWsleList @ 0x1402A7CB0
 * Callers:
 *     MiFreeWsleList @ 0x140280B00 (MiFreeWsleList.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiWriteWsle @ 0x140216194 (MiWriteWsle.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsDriverPage @ 0x140339720 (MiIsDriverPage.c)
 *     MiLogRemoveWsleEvent @ 0x14061C38C (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsleList(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  char v5; // al
  int *v6; // r8
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r12d
  _BYTE *v16; // r14
  unsigned __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  int v19; // edi
  char v20; // cl
  unsigned __int64 v21; // r15
  __int64 v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  volatile LONG *v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // r11
  unsigned __int64 v28; // rsi
  _BYTE *v29; // rdx
  __int64 v30; // rax
  _BYTE *v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int8 v34; // bp
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r11
  __int64 *v38; // r8
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 *v45; // r14
  int *v46; // r8
  volatile LONG *v47; // rbp
  _BYTE *v48; // rsi
  __int64 v49; // r8
  unsigned __int64 *v50; // rbx
  unsigned __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 IsDriverPage; // rax
  __int64 v55; // rax
  __int64 **v56; // rcx
  __int64 v57; // rbp
  __int64 **v58; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  int v62; // [rsp+20h] [rbp-98h]
  int v63; // [rsp+28h] [rbp-90h]
  __int64 v64; // [rsp+30h] [rbp-88h]
  __int64 v65; // [rsp+38h] [rbp-80h]
  __int64 v66; // [rsp+40h] [rbp-78h] BYREF
  __int64 v67; // [rsp+48h] [rbp-70h]
  int *v68; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  _BYTE *v73; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v75; // [rsp+D8h] [rbp+20h]

  v5 = *(_BYTE *)(a1 + 184) & 7;
  v6 = &dword_140C6A300;
  v9 = a1;
  v67 = 0LL;
  v10 = 0LL;
  v65 = 0LL;
  if ( v5 != 2 )
    v6 = 0LL;
  v66 = 0LL;
  v68 = v6;
  v11 = 0LL;
  v62 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( !a4 )
    return v10;
  v16 = &a3[-a2];
  v17 = (unsigned __int64 *)(a2 + 24);
  v18 = a4;
  v19 = 0;
  do
  {
    v20 = *((_BYTE *)v17 + (_QWORD)v16 - 23);
    if ( (v20 & 1) != 0 )
    {
      v21 = *v17;
      ++v12;
      if ( *v17 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v15 = 2;
        v10 = ((v21 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      }
      else
      {
        v15 = 1;
      }
      if ( (v20 & 2) != 0 )
      {
        v65 = ++v13;
        if ( v15 == 2 )
          v66 = ++v11;
      }
      if ( (*(_BYTE *)(v9 + 184) & 7) == 4 )
      {
        if ( PsNtosImageBase
          && (v21 < PsNtosImageEnd && v21 >= (unsigned __int64)PsNtosImageBase
           || v21 < PsHalImageEnd && v21 >= (unsigned __int64)PsHalImageBase) )
        {
          v62 = ++v14;
        }
        else if ( (unsigned int)MiGetSystemRegionType(v21) == 12 )
        {
          IsDriverPage = MiIsDriverPage(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          v9 = a1;
          v11 = v66;
          v13 = v65;
          v14 = v62;
          if ( IsDriverPage )
            ++v19;
        }
        else
        {
          v9 = a1;
          v11 = v66;
          v13 = v65;
          v14 = v62;
        }
      }
    }
    ++v17;
    v64 = v10;
    v22 = v10;
    --v18;
  }
  while ( v18 );
  v63 = v19;
  v23 = a4;
  if ( !v15 )
    return v10;
  v24 = a1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v25 = &dword_140C6A2C0;
  else
    v25 = (volatile LONG *)(a1 + 256);
  ExAcquireSpinLockSharedAtDpcLevel(v25);
  if ( v65 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -v65);
    if ( v66 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -v66);
  }
  if ( v62 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C65A50, -v62);
  v26 = -v12;
  v75 = v26;
  if ( v63 )
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65A50 + 1, -v63);
  v27 = 0LL;
  v28 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v26);
  v29 = &a3[-a2];
  v30 = a2 - (_QWORD)a3 + 24;
  v31 = a3;
  while ( 1 )
  {
    if ( (v31[v30 - 23 + (_QWORD)v29] & 1) == 0 )
      goto LABEL_38;
    v32 = *(_QWORD *)&v31[v30];
    if ( v15 != 1 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v24 + 128));
      v33 = v27 + 1;
      if ( !v68 )
        v33 = v27;
      v67 = v33;
      if ( (*v31 & 0xF) == 8 )
        goto LABEL_37;
      v67 = v33;
LABEL_26:
      v34 = *v31 & 0xF;
      if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v35 = (v32 >> 18) & 0x3FFFFFF8;
        v36 = *(_QWORD *)(v35 - 0x904C0000000LL);
        v37 = v35 - 0x904C0000000LL;
        if ( (unsigned __int64)(v35 - 0x904C0000000LL) < 0xFFFFF6FB7DBED000uLL
          || v37 > 0xFFFFF6FB7DBED7F8uLL
          || (MiFlags & 0x600000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          v75 = v26;
          v64 = v22;
        }
        else
        {
          v64 = v22;
          v75 = v26;
          if ( (v36 & 1) != 0 )
          {
            v64 = v22;
            v75 = v26;
            if ( (v36 & 0x20) == 0 || (v64 = v22, v75 = v26, (v36 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v60 = v36 | 0x20;
                v61 = *((_QWORD *)&Flink->Flink + ((v37 >> 3) & 0x1FF));
                if ( (v61 & 0x20) == 0 )
                  v60 = *(_QWORD *)(v35 - 0x904C0000000LL);
                v36 = v60;
                if ( (v61 & 0x42) != 0 )
                  v36 = v60 | 0x42;
              }
            }
          }
        }
        v66 = v36;
        v38 = (__int64 *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL);
        v39 = *v38;
        v40 = ((unsigned __int64)*v38 >> 14) & 7;
        if ( (((unsigned __int64)*v38 >> 4) & 0x3FF) != 0 )
        {
          if ( v34 == v40 )
          {
            *v38 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v38 >> 4) & 0x3FF) - 1))) & 0x3FF0;
          }
          else if ( v34 > v40 )
          {
            *v38 = v39 ^ ((unsigned int)v39 ^ (v34 << 14)) & 0x1C000 | 0x3FF0;
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8LL * v34 + 40), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v34 == 7 )
      {
        v41 = *(_QWORD *)(v24 + 96);
        v42 = *(unsigned __int16 *)(v24 + 174);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v43 = *(_QWORD *)(qword_140C674C8 + 8 * v42);
        v44 = *(_QWORD *)(v43 + 16920);
        if ( v41 < *(_QWORD *)(v44 + 56) )
        {
          v45 = (__int64 *)(v24 + 24);
          if ( *v45 && *(__int64 **)(v43 + 16936) != v45 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C698C0, &LockHandle);
            if ( *(_BYTE *)(v44 + 53) || (v55 = *v45) == 0 )
            {
              *(_BYTE *)(v44 + 54) = 1;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            }
            else
            {
              if ( *(__int64 **)(v55 + 8) != v45
                || (v56 = (__int64 **)v45[1], *v56 != v45)
                || (*v56 = (__int64 *)v55,
                    v57 = v43 + 16928,
                    *(_QWORD *)(v55 + 8) = v56,
                    v58 = *(__int64 ***)(v57 + 8),
                    *v58 != (__int64 *)v57) )
              {
                __fastfail(3u);
              }
              *v45 = v57;
              v45[1] = (__int64)v58;
              *v58 = v45;
              *(_QWORD *)(v57 + 8) = v45;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            }
          }
          v24 = a1;
        }
      }
      goto LABEL_37;
    }
    if ( (*(_BYTE *)(v24 + 184) & 7) == 0 )
      goto LABEL_26;
LABEL_37:
    v29 = &a3[-a2];
LABEL_38:
    ++v28;
    v31 += 8;
    if ( v28 >= v23 )
      break;
    v26 = v75;
    v30 = a2 - (_QWORD)a3 + 24;
    v27 = v67;
  }
  v46 = v68;
  if ( v68 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 1, v75);
    if ( v67 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 2, -v67);
  }
  if ( (*(_BYTE *)(v24 + 184) & 7) == 2 )
  {
    v47 = &dword_140C6A2C0;
    v48 = &a3[-a2];
    v73 = &a3[-a2];
  }
  else
  {
    v47 = (volatile LONG *)(v24 + 256);
    v73 = v29;
    v48 = v29;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v47);
  v50 = (unsigned __int64 *)(a2 + 24);
  do
  {
    if ( (v48[(_QWORD)v50 - 23] & 1) != 0 )
    {
      v51 = *v50;
      if ( v15 == 2 )
      {
        v52 = (v51 >> 9) & 0x7FFFFFFFF8LL;
        if ( (*(_BYTE *)(v52 - 0x98000000000LL) & 1) != 0 )
          MiWriteWsle(v52, *v50);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
        MiLogRemoveWsleEvent(v51, *(_BYTE *)(v24 + 184) & 7, v49);
      v48 = v73;
    }
    ++v50;
    --v23;
  }
  while ( v23 );
  return v64;
}
