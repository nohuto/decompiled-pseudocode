/*
 * XREFs of sub_1407C2680 @ 0x1407C2680
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_1402A4298 @ 0x1402A4298 (sub_1402A4298.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140345F84 @ 0x140345F84 (sub_140345F84.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140692E2C @ 0x140692E2C (sub_140692E2C.c)
 *     sub_14069F668 @ 0x14069F668 (sub_14069F668.c)
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_1406C25A0 @ 0x1406C25A0 (sub_1406C25A0.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_140915784 @ 0x140915784 (sub_140915784.c)
 *     sub_140920E78 @ 0x140920E78 (sub_140920E78.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_1407C2680(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // r9
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int i; // ecx
  signed __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 *v16; // rcx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  _PRIVILEGE_SET *v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // r13
  int v23; // eax
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // rax
  __int64 v31; // rbx
  struct _KTHREAD *v32; // rax
  bool v33; // dl
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  bool v41; // cl
  signed __int32 v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v45; // r9
  int v46; // eax
  bool v47; // zf
  ULONG_PTR v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r9
  struct _WORK_QUEUE_ITEM *v52; // rcx
  struct _KEVENT *v53; // rcx
  struct _KTHREAD *v54; // rcx
  _QWORD v56[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v57[2]; // [rsp+50h] [rbp-79h] BYREF
  _LIST_ENTRY v58; // [rsp+60h] [rbp-69h] BYREF
  _LIST_ENTRY ListHead; // [rsp+70h] [rbp-59h] BYREF
  __int128 v60; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v61[3]; // [rsp+90h] [rbp-39h] BYREF
  int v62; // [rsp+A8h] [rbp-21h]
  __int128 v63; // [rsp+ACh] [rbp-1Dh]
  __int64 v64; // [rsp+BCh] [rbp-Dh]
  int v65; // [rsp+C4h] [rbp-5h]
  _OWORD v66[5]; // [rsp+C8h] [rbp-1h] BYREF
  char v67; // [rsp+130h] [rbp+67h]
  unsigned __int8 v68; // [rsp+138h] [rbp+6Fh]
  bool v69; // [rsp+138h] [rbp+6Fh]
  unsigned int v70; // [rsp+140h] [rbp+77h]

  v1 = 0LL;
  v67 = 0;
  v3 = 0LL;
  v60 = 0LL;
  memset(v66, 0, 32);
  ListHead = 0LL;
  sub_140347770((__int64)&v60);
  v57[1] = v57;
  v57[0] = v57;
  InitializeListHead(&ListHead);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return sub_14022EA30((__int64 *)&v60);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( dword_140C54CA8 )
  {
    if ( !sub_1402ACD00() )
    {
      *(_QWORD *)&v66[0] = a1;
      sub_140735760(0xEu, (__int64)v66, 0LL, 1, 0x19u, a1, (__int64)v57);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        sub_1406C25A0(a1);
        sub_140692E2C(a1);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
  v56[1] = v56;
  v56[0] = v56;
  sub_140AB4370(v7, v4, v5);
  BugCheckParameter4 = *(_QWORD *)(a1 + 8);
  if ( BugCheckParameter4 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        sub_1407C0854(*(_QWORD *)(a1 + 8));
        sub_14069F668(a1, 0, (__int64)v56);
        sub_140AB4300(BugCheckParameter4);
      }
      LOBYTE(v11) = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_14:
        for ( i = 0; i < 4; ++i )
        {
          v8 = i;
          v10 = *(_QWORD *)(a1 + 8) + 8LL * i;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 136), 0LL, a1);
          if ( a1 == v14 )
            goto LABEL_25;
          if ( (unsigned __int64)(v14 - 1) <= 1 )
          {
            sub_1407C0854(*(_QWORD *)(a1 + 8));
            LOBYTE(v11) = 1;
            goto LABEL_14;
          }
        }
        if ( !(_BYTE)v11 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          ExAcquirePushLockExclusiveEx(v15 + 48, 0LL);
          LOBYTE(v11) = 1;
          *(_QWORD *)(v15 + 56) = KeGetCurrentThread();
        }
        v8 = *(_QWORD *)(a1 + 32);
        v16 = *(unsigned __int64 **)(a1 + 40);
        if ( *(_QWORD *)(v8 + 8) != a1 + 32 || *v16 != a1 + 32 )
          __fastfail(3u);
        *v16 = v8;
        *(_QWORD *)(v8 + 8) = v16;
LABEL_25:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v11 )
          sub_140AB4300(*(_QWORD *)(a1 + 8));
      }
      v3 = *(_QWORD *)(BugCheckParameter4 + 32);
      _m_prefetchw((const void *)(v3 + 4232));
      v17 = *(_DWORD *)(v3 + 4232);
      if ( v17 )
      {
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4232), v17 + 1, v17);
        }
        while ( v18 != v17 && v17 );
      }
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v67 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v19 = *(_PRIVILEGE_SET **)(a1 + 88);
      if ( v19 )
      {
        sub_140920E78(v19);
        sub_140346C60(&ListHead);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
        sub_140915784(a1, v8, v10, v11);
      v58 = 0LL;
      InitializeListHead(&v58);
      v9 = *(_QWORD *)BugCheckParameter4;
      v20 = *(_QWORD *)(BugCheckParameter4 + 32);
      if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
      {
LABEL_45:
        v22 = *(_QWORD *)(BugCheckParameter4 + 32);
        v23 = *(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9);
        v70 = *(_DWORD *)(BugCheckParameter4 + 16);
        v24 = *(_QWORD *)(v22 + 1648)
            + 24
            * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((unsigned int)(101027 * v23) ^ ((unsigned __int64)(unsigned int)(101027 * v23) >> 9)));
        ExAcquirePushLockExclusiveEx(v24, 0LL);
        *(_QWORD *)(v24 + 8) = KeGetCurrentThread();
        _m_prefetchw((const void *)(v22 + 4232));
        v25 = *(_DWORD *)(v22 + 4232);
        if ( !v25 )
LABEL_126:
          KeBugCheckEx(0x51u, 0x17uLL, v22, 8uLL, BugCheckParameter4);
        while ( 1 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4232), v25 + 1, v25);
          if ( v26 == v25 )
            break;
          if ( !v25 )
            goto LABEL_126;
        }
        ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 48, 0LL);
        *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
        v27 = *(_QWORD *)(BugCheckParameter4 + 192);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 24);
          if ( v28 )
          {
            v1 = *(_QWORD *)(v28 + 16);
            sub_140AB4300(BugCheckParameter4);
            sub_1407C0854(v1);
            sub_1407C0854(BugCheckParameter4);
          }
        }
        v29 = *(_QWORD *)(BugCheckParameter4 + 32);
        v30 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
        if ( v30 == 2 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v29 + 2944) == 1 )
            sub_1406CE3EC(v29);
        }
        else if ( !v30 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
          {
            v31 = *(_QWORD *)(BugCheckParameter4 + 32);
            sub_1407C09E0(BugCheckParameter4, (__int64)&v58);
            v32 = KeGetCurrentThread();
            *(_DWORD *)(v31 + 160) |= 0x80u;
            *(_QWORD *)(v31 + 4176) = v32;
            *(_DWORD *)(v31 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 4236), 1u) & 0x7F) + 4240) = 31;
            if ( (*(_DWORD *)(v31 + 160) & 0x20) == 0
              && _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 4232), 0xFFFFFFFF) == 1 )
            {
              sub_1406BBAD8((_QWORD *)v31);
            }
          }
          else
          {
            v33 = 0;
            v34 = *(_DWORD *)(BugCheckParameter4 + 8);
            if ( (v34 & 0x20) == 0 )
              v33 = (v34 & 0x20000) == 0;
            if ( (!dword_140C0B8C0
               || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
               || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
              && v33 )
            {
              v35 = sub_140347C10((__int64)&stru_140C49340, 0LL);
              v36 = v35;
              CurrentIrql = KeGetCurrentIrql();
              v68 = CurrentIrql;
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&stru_140C49340, 0) )
              {
                sub_14029EF4C((__int64)&stru_140C49340, v35);
                CurrentIrql = v68;
              }
              if ( v36 )
                *(_BYTE *)(v36 + 18) = 1;
              *(&stru_140C49340 + 1) = (ULONG_PTR)KeGetCurrentThread();
              *((_DWORD *)&stru_140C49340 + 12) = CurrentIrql;
              v38 = (_QWORD *)(BugCheckParameter4 + 224);
              if ( (_QWORD *)*v38 != v38 )
                KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
              v39 = qword_140C49320;
              if ( *(__int64 **)(qword_140C49320 + 8) != &qword_140C49320 )
LABEL_110:
                __fastfail(3u);
              *v38 = qword_140C49320;
              *(_QWORD *)(BugCheckParameter4 + 232) = &qword_140C49320;
              *(_QWORD *)(v39 + 8) = v38;
              qword_140C49320 = BugCheckParameter4 + 224;
              *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
              ++qword_140D3D2C8;
              v40 = *((unsigned __int8 *)&stru_140C49340 + 48);
              v41 = ++dword_140C4E8B0 > (unsigned int)dword_140C0C618;
              v69 = v41;
              *(&stru_140C49340 + 1) = 0LL;
              v42 = _InterlockedCompareExchange((volatile signed __int32 *)&stru_140C49340, 1, 0);
              if ( v42 )
                sub_140359548((volatile signed __int32 *)&stru_140C49340, v42);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v43 = KeGetCurrentIrql();
                  if ( v43 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v43 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v45 = *((_QWORD *)CurrentPrcb + 4375);
                    v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                    v47 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
                    *(_DWORD *)(v45 + 20) &= v46;
                    if ( v47 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v40);
              sub_1402AFC00((ULONG_PTR)&stru_140C49340);
              if ( v69 )
                sub_140345F84();
            }
            else
            {
              sub_1407C09E0(BugCheckParameter4, (__int64)&v58);
              if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
                && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
              {
                sub_14069FA30(BugCheckParameter4);
              }
            }
          }
        }
        sub_140AB4300(BugCheckParameter4);
        if ( v1 )
          sub_140AB4300(v1);
        v48 = *(_QWORD *)(v22 + 1648)
            + 24
            * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((101027 * (v70 ^ (v70 >> 9))) ^ ((unsigned __int64)(101027 * (v70 ^ (v70 >> 9))) >> 9)));
        *(_QWORD *)(v48 + 8) = 0LL;
        ExReleasePushLockEx(v48, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 4232), 0xFFFFFFFF) == 1 )
          sub_1406BBAD8((_QWORD *)v22);
        sub_140346C60(&v58);
      }
      else
      {
        while ( 1 )
        {
          v8 = v9 - 1;
          v11 = v9;
          if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v20 + 2944) == 1 )
            v10 = 1LL;
          else
            LOBYTE(v10) = 0;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v8, v9);
          v9 = v21;
          if ( v21 == v11 )
            break;
          if ( v21 <= 1 )
            goto LABEL_45;
        }
        if ( v21 < v8 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( (_BYTE)v10 )
          sub_1406CE3EC(v20);
      }
    }
    else
    {
      v3 = *(_QWORD *)(BugCheckParameter4 + 32);
      sub_14071BBD8(v3);
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v67 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
      sub_14071BF40(BugCheckParameter4);
    }
  }
  sub_140AB4260(v9, v8, v10, v11);
  while ( 1 )
  {
    v49 = v56[0];
    if ( (_QWORD *)v56[0] == v56 )
      break;
    v50 = *(_QWORD *)v56[0];
    if ( *(_QWORD **)(v56[0] + 8LL) != v56 || *(_QWORD *)(v50 + 8) != v56[0] )
      goto LABEL_110;
    v56[0] = *(_QWORD *)v56[0];
    *(_QWORD *)(v50 + 8) = v56;
    v51 = *(_QWORD *)(v49 + 48);
    if ( (unsigned __int16)*(_DWORD *)(v49 + 40) != 3 )
    {
      v53 = *(struct _KEVENT **)v51;
LABEL_108:
      KeSetEvent(v53, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v49 + 48));
      goto LABEL_109;
    }
    v52 = *(struct _WORK_QUEUE_ITEM **)(v51 + 8);
    if ( v52 )
    {
      ExQueueWorkItem(v52, *(WORK_QUEUE_TYPE *)(v51 + 16));
      v51 = *(_QWORD *)(v49 + 48);
    }
    v53 = *(struct _KEVENT **)v51;
    if ( *(_QWORD *)v51 )
      goto LABEL_108;
LABEL_109:
    sub_1407190AC((PVOID)(v49 - 16));
  }
  if ( dword_140C54CA8 && !sub_1402ACD00() && (_QWORD *)v57[0] != v57 )
  {
    v61[1] = 0LL;
    v61[2] = v66;
    v64 = 0LL;
    v65 = 0;
    v63 = 0LL;
    v61[0] = 0LL;
    v62 = 0;
    sub_140735760(0x19u, (__int64)v61, 0LL, 0, 0x19u, 0LL, (__int64)v57);
  }
  if ( v67 && *(char *)(a1 - 21) < 0 )
    sub_1402A4298(v3);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4232), 0xFFFFFFFF) == 1 )
    sub_1406BBAD8((_QWORD *)v3);
  v54 = KeGetCurrentThread();
  v47 = (*((_WORD *)v54 + 242))++ == 0xFFFF;
  if ( v47 && *((struct _KTHREAD **)v54 + 19) != (struct _KTHREAD *)((char *)v54 + 152) && !*((_WORD *)v54 + 243) )
    KiCheckForKernelApcDelivery();
  return sub_14022EA30((__int64 *)&v60);
}
