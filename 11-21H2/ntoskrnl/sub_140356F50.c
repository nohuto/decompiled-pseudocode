/*
 * XREFs of sub_140356F50 @ 0x140356F50
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_140356F50(HANDLE Handle, _BYTE *a2)
{
  KPROCESSOR_MODE v4; // dl
  NTSTATUS v5; // r15d
  struct _KTIMER *v6; // rbx
  char *v7; // r13
  __int64 v8; // rdx
  struct _OBJECT_TYPE *v9; // rax
  volatile signed __int32 *v10; // r14
  __int64 CurrentIrql; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v13; // rcx
  void *v14; // rdi
  int v15; // esi
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned int v18; // r8d
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  char v22; // bl
  signed __int64 v23; // rax
  __int64 v25; // r9
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // r11
  struct _KTHREAD *v31; // r14
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // rbx
  int v35; // r8d
  struct _KTHREAD *v36; // rsi
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  struct _LIST_ENTRY *Flink; // r8
  PVOID *p_Flink; // rdx
  char v43; // al
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  __int64 v50; // r9
  int v51; // eax
  bool v52; // zf
  unsigned __int8 v53; // cl
  struct _KPRCB *v54; // r10
  __int64 v55; // r9
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  __int64 v60; // r9
  int v61; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  __int64 v63; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  void *v65; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v67; // [rsp+A8h] [rbp+10h]
  unsigned __int8 SpinLock; // [rsp+B8h] [rbp+20h]
  KSPIN_LOCK *SpinLocka; // [rsp+B8h] [rbp+20h]

  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 && v4 )
  {
    v44 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v44 = (__int64)a2;
    *(_BYTE *)v44 = *(_BYTE *)v44;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, 0LL, v4, &Object, 0LL);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = (struct _KTIMER *)Object;
  v7 = (char *)Object - 48;
  v8 = (unsigned __int8)dword_140D06C0C;
  v9 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v9 == qword_140D06C78 )
  {
    if ( a2 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return 3221225485LL;
    }
    else
    {
      return sub_1402D594C(Object, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    if ( v9 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v67 = 0;
      v10 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      v63 = CurrentIrql;
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        v25 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v8 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        *(_DWORD *)(v25 + 20) |= v8;
        v6 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A310(v10);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v13 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v45 = *(_DWORD *)(v13 + 24);
            *(_DWORD *)(v13 + 24) = v45 + 1;
            if ( v45 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v10, 0LL) )
        {
          v46 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v46 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v47 = *(_DWORD *)(v46 + 24) - 1;
              *(_DWORD *)(v46 + 24) = v47;
              if ( !v47 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140211E70(v10);
        }
        v6 = (struct _KTIMER *)Object;
      }
      v14 = *(void **)&v6[4].Header.Lock;
      v65 = v14;
      if ( v14 )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v10);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v48 = KeGetCurrentIrql();
            if ( v48 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v48 >= 2u )
            {
              v49 = KeGetCurrentPrcb();
              v50 = *((_QWORD *)v49 + 4375);
              v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
              v52 = (v51 & *(_DWORD *)(v50 + 20)) == 0;
              *(_DWORD *)(v50 + 20) &= v51;
              if ( v52 )
                sub_140418E4C(v49);
            }
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v36 = KeGetCurrentThread();
        v37 = 0LL;
        _disable();
        v38 = *((unsigned __int8 *)v36 + 792);
        if ( *((_BYTE *)v36 + 792) || (v38 = sub_14029F6A8((__int64)&qword_140C11720, (__int64)v36)) != 0 )
        {
          _BitScanForward((unsigned int *)&v39, v38);
          *((_BYTE *)v36 + 792) = v38 & ~(1 << v39);
          _enable();
          v37 = (__int64)v36 + 96 * v39 + 1696;
          if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
            v40 = sub_140287F30(*((_QWORD *)v36 + 23));
          else
            v40 = -1;
          *(_DWORD *)(v37 + 8) = v40;
          *(_QWORD *)v37 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
          sub_14029F120(&qword_140C11720, v37, (__int64)&qword_140C11720);
        if ( v37 )
          *(_BYTE *)(v37 + 18) = 1;
        v67 = 1;
        LOBYTE(v63) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
        v14 = *(void **)&v6[4].Header.Lock;
        v65 = v14;
        *(_QWORD *)&v6[4].Header.Lock = 0LL;
        v6 = (struct _KTIMER *)Object;
      }
      v15 = 0;
      if ( ((__int64)v6[4].Dpc & 1) != 0 )
      {
        SpinLocka = (KSPIN_LOCK *)&v6[1].Header.WaitListHead.Blink[75];
        KeAcquireSpinLockAtDpcLevel(SpinLocka);
        Flink = v6[3].TimerListEntry.Flink;
        p_Flink = (PVOID *)&v6[3].TimerListEntry.Blink->Flink;
        if ( Flink->Blink != &v6[3].TimerListEntry || *p_Flink != &v6[3].TimerListEntry )
          goto LABEL_122;
        *p_Flink = Flink;
        Flink->Blink = (struct _LIST_ENTRY *)p_Flink;
        KeReleaseSpinLockFromDpcLevel(SpinLocka);
        v43 = (__int64)v6[4].Dpc & 0xFE;
        LOBYTE(v6[4].Dpc) = v43;
        if ( (v43 & 2) != 0 && LOBYTE(v6[3].Processor)
          || KeCancelTimer(v6)
          || KeRemoveQueueDpcEx((__int64)&v6[2].TimerListEntry, 0) )
        {
          v15 = 1;
        }
        if ( KeRemoveQueueApc((__int64)&v6[1].Header.WaitListHead) )
          ++v15;
LABEL_16:
        LOBYTE(v6[3].Processor) = 0;
        v18 = v15 + 1;
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        {
          sub_14056E8CC(v10, retaddr);
          v18 = v15 + 1;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        }
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)v19 + 32) <= 1u )
          {
            v57 = *(_DWORD *)(v20 + 24) - 1;
            *(_DWORD *)(v20 + 24) = v57;
            if ( !v57 )
            {
              sub_140418E4C(v19);
              v18 = v15 + 1;
            }
          }
        }
        v21 = v63;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = *((_QWORD *)v59 + 4375);
              v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
              v52 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
              *(_DWORD *)(v60 + 20) &= v61;
              if ( v52 )
                sub_140418E4C(v59);
              v18 = v15 + 1;
            }
          }
        }
        __writecr8(v21);
        if ( !v67 )
        {
LABEL_21:
          v22 = *((_BYTE *)Object + 4);
          if ( dword_140D05010 )
          {
            sub_1405C5EC8((_DWORD)v7);
            v18 = v15 + 1;
          }
          v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, ~v15) - v18;
          if ( v23 <= 0 )
          {
            if ( *((_QWORD *)v7 + 1) )
              KeBugCheckEx(
                0x18u,
                qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)v7[24] ^ (unsigned __int64)BYTE1(v7)],
                (ULONG_PTR)Object,
                6uLL,
                *((_QWORD *)v7 + 1));
            if ( v23 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v23);
            sub_1402440B4((signed __int64)v7);
          }
          if ( a2 )
            *a2 = v22;
          if ( v14 )
            sub_14036B090(v14);
          return (unsigned int)v5;
        }
        if ( !v14 )
        {
LABEL_39:
          v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11720, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
            ExfTryToWakePushLock(&qword_140C11720);
          v31 = KeGetCurrentThread();
          if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
            v32 = sub_140287F30(*((_QWORD *)v31 + 23));
          else
            v32 = -1;
          _disable();
          v33 = 0;
          v34 = (__int64)v31 + 1696;
          while ( (*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL)
               || !*(_BYTE *)(v34 + 18)
               || (*(_DWORD *)v34 & 1) != 0
               || *(_DWORD *)(v34 + 8) != v32 )
          {
            ++v33;
            v34 += 96LL;
            if ( v33 >= 6 )
            {
              if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&qword_140C11720, v32, 0LL);
              _enable();
              goto LABEL_50;
            }
          }
          *(_BYTE *)(v34 + 18) = 0;
          if ( *(__int64 *)v34 < 0 )
          {
            *(_BYTE *)v34 |= 2u;
            _enable();
            sub_14034EE30(v34);
            _disable();
          }
          v35 = *(_DWORD *)(v34 + 88);
          *(_DWORD *)(v34 + 88) = 0;
          *(_BYTE *)(v34 + 17) = 0;
          *(_QWORD *)v34 = 0LL;
          *((_BYTE *)v31 + 792) |= 1 << *(_BYTE *)(v34 + 16);
          _enable();
          if ( !v35 )
          {
LABEL_50:
            sub_1402F9540((__int64)CurrentThread);
            v18 = v15 + 1;
            goto LABEL_21;
          }
          sub_14022B568((ULONG_PTR)v31, (__int64)&qword_140C11720, v35);
          sub_1402F9540((__int64)CurrentThread);
          v18 = v15 + 1;
          goto LABEL_21;
        }
        v27 = (char *)Object + 264;
        v28 = *((_QWORD *)Object + 33);
        v29 = (_QWORD *)*((_QWORD *)Object + 34);
        if ( *(PVOID *)(v28 + 8) == (char *)Object + 264 && (_QWORD *)*v29 == v27 )
        {
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          *v27 = 0LL;
          goto LABEL_39;
        }
LABEL_122:
        __fastfail(3u);
      }
      v16 = KeGetCurrentIrql();
      SpinLock = v16;
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v16 <= 0xFu )
      {
        v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v8 = (-1LL << (v16 + 1)) & 4;
        *(_DWORD *)(v26 + 20) |= v8;
        v6 = (struct _KTIMER *)Object;
      }
      LOBYTE(v8) = 1;
      sub_140357840(v6, v8);
      if ( dword_140D06B08 )
      {
        v17 = SpinLock;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_15;
        v53 = KeGetCurrentIrql();
        if ( v53 > 0xFu || SpinLock > 0xFu || v53 < 2u )
          goto LABEL_15;
        v54 = KeGetCurrentPrcb();
        v55 = *((_QWORD *)v54 + 4375);
        v56 = ~(unsigned __int16)(-1LL << (SpinLock + 1));
        v52 = (v56 & *(_DWORD *)(v55 + 20)) == 0;
        *(_DWORD *)(v55 + 20) &= v56;
        if ( v52 )
          sub_140418E4C(v54);
        v6 = (struct _KTIMER *)Object;
      }
      v17 = SpinLock;
LABEL_15:
      __writecr8(v17);
      goto LABEL_16;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return 3221225508LL;
  }
}
