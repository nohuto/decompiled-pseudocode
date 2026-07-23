/*
 * XREFs of sub_140370928 @ 0x140370928
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 *     sub_140371248 @ 0x140371248 (sub_140371248.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

unsigned __int64 __fastcall sub_140370928(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 v5; // r13
  unsigned __int8 v6; // al
  _RTL_RB_TREE *v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 Root; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // r15
  unsigned __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v18; // ecx
  __int64 v19; // rsi
  unsigned int v20; // r8d
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  int v23; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // edx
  volatile signed __int64 *v28; // rsi
  struct _KTHREAD *v29; // r15
  unsigned int v30; // ecx
  __int64 v31; // rdi
  unsigned int v32; // r8d
  int v33; // r8d
  struct _KTHREAD *v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // edx
  __int128 v39; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+58h] BYREF

  v41 = a2;
  v3 = 0LL;
  v42 = 0LL;
  v4 = a3;
  v5 = a1;
  v6 = sub_140371248(a1, a3);
  v7 = (_RTL_RB_TREE *)(v5 + 72);
  v8 = v6;
  if ( (*(_BYTE *)(v5 + 80) & 1) != 0 )
  {
    if ( v7->Root )
      Root = (unsigned __int64)v7->Root ^ (unsigned __int64)v7;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)v7->Root;
  }
  while ( Root )
  {
    v10 = *(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v41 >= v10 )
    {
      if ( v41 <= v10 )
      {
        RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)Root);
        if ( (v4 & 1) == 0 )
        {
          v12 = v5 + 64;
          if ( (*(_DWORD *)v5 & 1) != 0 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v26 = *((_QWORD *)CurrentPrcb + 4375);
                  v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v22 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
                  *(_DWORD *)(v26 + 20) &= v27;
                  if ( v22 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5 + 64);
            CurrentThread = KeGetCurrentThread();
            if ( v12 - qword_140C50630 >= 0x8000000000LL )
              v18 = -1;
            else
              v18 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
            _disable();
            v19 = (__int64)CurrentThread + 1696;
            v20 = 0;
            while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(v19 + 18)
                 || (*(_DWORD *)v19 & 1) != 0
                 || *(_DWORD *)(v19 + 8) != v18 )
            {
              ++v20;
              v19 += 96LL;
              if ( v20 >= 6 )
                goto LABEL_32;
            }
            *(_BYTE *)(v19 + 18) = 0;
            if ( !v19 )
            {
LABEL_32:
              if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, v18, 0LL);
              _enable();
              goto LABEL_34;
            }
            if ( *(__int64 *)v19 < 0 )
            {
              *(_BYTE *)v19 |= 2u;
              _enable();
              sub_14034EE30(v19);
              _disable();
            }
            v23 = *(_DWORD *)(v19 + 88);
            *(_DWORD *)(v19 + 88) = 0;
            *(_BYTE *)(v19 + 17) = 0;
            *(_QWORD *)v19 = 0LL;
            *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v19 + 16);
            _enable();
            if ( v23 )
              sub_14022B568((ULONG_PTR)CurrentThread, v12, v23);
LABEL_34:
            v21 = KeGetCurrentThread();
            v22 = (*((_WORD *)v21 + 243))++ == 0xFFFF;
            if ( v22 && *((struct _KTHREAD **)v21 + 19) != (struct _KTHREAD *)((char *)v21 + 152) )
              KiCheckForKernelApcDelivery();
            v5 = a1;
          }
        }
        v13 = *(_QWORD *)(Root + 32);
        v14 = (unsigned __int8)v13 >> 2;
        v39 = *(_OWORD *)v5;
        v15 = (((v13 >> 12) + ((v13 >> 1) & 1)) << 12) - 1;
        v42 = (1LL << v14) - (((1LL << v14) - 1) & ((1LL << v14) + v15)) + v15;
        sub_140363E50(&v41, &v42, 0x8000LL, &v39);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 96), -(*(_QWORD *)(Root + 32) >> 12));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), -(__int64)(v42 >> 12));
        v39 = *(_OWORD *)v5;
        sub_140370C00(Root, &v39);
        return v42;
      }
      v11 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v11 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)(v5 + 80) & 1) != 0 && v11 )
      Root ^= v11;
    else
      Root = v11;
  }
  if ( (v4 & 1) == 0 )
  {
    v28 = (volatile signed __int64 *)(v5 + 64);
    if ( (*(_DWORD *)v5 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = *((_QWORD *)v36 + 4375);
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v22 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            *(_DWORD *)(v37 + 20) &= v38;
            if ( v22 )
              sub_140418E4C(v36);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 64);
      v29 = KeGetCurrentThread();
      if ( (unsigned __int64)v28 - qword_140C50630 >= 0x8000000000LL )
        v30 = -1;
      else
        v30 = sub_140287F30(*((_QWORD *)v29 + 23));
      _disable();
      v31 = (__int64)v29 + 1696;
      v32 = 0;
      while ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v31 + 18)
           || (*(_DWORD *)v31 & 1) != 0
           || *(_DWORD *)(v31 + 8) != v30 )
      {
        ++v32;
        v31 += 96LL;
        if ( v32 >= 6 )
          goto LABEL_69;
      }
      *(_BYTE *)(v31 + 18) = 0;
      if ( v31 )
      {
        if ( *(__int64 *)v31 < 0 )
        {
          *(_BYTE *)v31 |= 2u;
          _enable();
          sub_14034EE30(v31);
          _disable();
        }
        v33 = *(_DWORD *)(v31 + 88);
        *(_DWORD *)(v31 + 88) = 0;
        *(_BYTE *)(v31 + 17) = 0;
        *(_QWORD *)v31 = 0LL;
        *((_BYTE *)v29 + 792) |= 1 << *(_BYTE *)(v31 + 16);
        _enable();
        if ( v33 )
          sub_14022B568((ULONG_PTR)v29, v5 + 64, v33);
        goto LABEL_72;
      }
LABEL_69:
      if ( (*((_DWORD *)v29 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v29, v5 + 64, v30, 0LL);
      _enable();
LABEL_72:
      v34 = KeGetCurrentThread();
      v22 = (*((_WORD *)v34 + 243))++ == 0xFFFF;
      if ( v22 && *((struct _KTHREAD **)v34 + 19) != (struct _KTHREAD *)((char *)v34 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  sub_1405F1BBC(8, v5, v41, 0, 0LL, 0LL);
  return v3;
}
