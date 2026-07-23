/*
 * XREFs of sub_140311CC0 @ 0x140311CC0
 * Callers:
 *     sub_14026CF88 @ 0x14026CF88 (sub_14026CF88.c)
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_1406A3E60 @ 0x1406A3E60 (sub_1406A3E60.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 */

__int64 __fastcall sub_140311CC0(__int64 *BugCheckParameter2, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // esi
  unsigned int v6; // edi
  ULONG_PTR v8; // r15
  unsigned __int8 CurrentIrql; // bp
  int *v10; // rcx
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR v17; // rdi
  struct _KTHREAD *v18; // rbp
  char *v19; // rbx
  __int64 v20; // rdx
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  ULONG_PTR v26; // rdx
  struct _KTHREAD *v27; // r10
  ULONG_PTR v28; // r9
  char *v29; // rcx
  __int64 v30; // r8
  unsigned int i; // r11d
  int v32; // r8d
  unsigned int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  __int64 v36; // r9
  int v37; // edx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // edx
  int v42; // edx
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r10
  __int64 v45; // r9
  int v46; // edx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  __int64 v49; // r9
  int v50; // edx
  unsigned int v51; // ebp
  ULONG_PTR v52; // rdx
  struct _KTHREAD *v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // r8
  char *v56; // r15
  unsigned int v57; // r9d
  int v58; // r8d
  unsigned __int64 v59; // r15
  __int64 v60; // rsi
  unsigned __int8 v61; // cl
  struct _KPRCB *v62; // r9
  int v63; // eax
  __int64 v64; // r8
  KIRQL v65; // al
  __int64 v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  __int64 v70; // r9
  int v71; // edx
  unsigned __int8 v72; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v74; // r9
  int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // r9d
  char v78; // [rsp+30h] [rbp-98h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-94h]
  int BugCheckParameter3_4; // [rsp+38h] [rbp-90h]
  int v81; // [rsp+3Ch] [rbp-8Ch]
  __int64 v82; // [rsp+40h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-80h]
  __int64 v84; // [rsp+50h] [rbp-78h]
  char *v85; // [rsp+58h] [rbp-70h]
  __int64 v86; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *v87; // [rsp+60h] [rbp-68h]
  ULONG_PTR v88; // [rsp+78h] [rbp-50h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int BugCheckParameter2a; // [rsp+D0h] [rbp+8h]
  ULONG_PTR BugCheckParameter2b; // [rsp+D0h] [rbp+8h]
  unsigned int v93; // [rsp+E0h] [rbp+18h]
  int v94; // [rsp+E0h] [rbp+18h]
  unsigned int BugCheckParameter1; // [rsp+E8h] [rbp+20h]
  ULONG_PTR BugCheckParameter1a; // [rsp+E8h] [rbp+20h]

  v4 = *BugCheckParameter2;
  v5 = 0;
  v6 = a3;
  BugCheckParameter1 = a3;
  v84 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64) )
  {
    BugCheckParameter2a = 1;
    CurrentThread = 0LL;
    v82 = 0LL;
  }
  else
  {
    v23 = *(_QWORD *)v4;
    BugCheckParameter2a = 0;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v82 = v23;
    ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
  }
  BugCheckParameter3_4 = v6 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(a3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v10 = (int *)(v4 + 72);
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(v10, CurrentIrql);
  else
    sub_14030F870(v10, CurrentIrql, a3, a4);
  if ( (v6 & 1) != 0 )
  {
    ++*(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 88);
    v6 |= 4u;
    v11 = v6;
    BugCheckParameter1 = v6;
  }
  else
  {
    v11 = v6;
  }
  BugCheckParameter3 = -1;
  v78 = CurrentIrql + 1;
  do
  {
    v93 = *(_DWORD *)(v8 + 44);
    v88 = v8;
    if ( *(_QWORD *)(v8 + 8) )
    {
      if ( (v6 & 0x400) != 0 )
      {
        v94 = -1073741800;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v72 = KeGetCurrentIrql();
            if ( v72 <= 0xFu && CurrentIrql <= 0xFu && v72 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v74 = *((_QWORD *)CurrentPrcb + 4375);
              v75 = ~(unsigned __int16)(-1LL << v78);
              v22 = (v75 & *(_DWORD *)(v74 + 20)) == 0;
              *(_DWORD *)(v74 + 20) &= v75;
              if ( v22 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v51 = BugCheckParameter2a;
        if ( !BugCheckParameter2a )
        {
          v52 = v82 + 40;
          BugCheckParameter2b = v82 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v52);
            v52 = v82 + 40;
          }
          v53 = KeGetCurrentThread();
          BugCheckParameter1a = (ULONG_PTR)v53;
          if ( v52 - qword_140C50630 >= 0x8000000000LL )
          {
            v55 = 0xFFFFFFFFLL;
          }
          else
          {
            v76 = sub_140287F30(*((_QWORD *)v53 + 23));
            v53 = (struct _KTHREAD *)BugCheckParameter1a;
            v55 = v76;
            v52 = v82 + 40;
          }
          _disable();
          v56 = (char *)v53 + 1696;
          v77 = 0;
          while ( (*(_QWORD *)v56 & 0x7FFFFFFFFFFFFFFCLL) != (v52 & 0x7FFFFFFFFFFFFFFCLL)
               || !v56[18]
               || (*(_DWORD *)v56 & 1) != 0
               || *((_DWORD *)v56 + 2) != (_DWORD)v55 )
          {
            ++v77;
            v56 += 96;
            if ( v77 >= 6 )
            {
              if ( (*((_DWORD *)v53 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)v55, 0LL);
LABEL_145:
              _enable();
              goto LABEL_146;
            }
          }
          v56[18] = 0;
          if ( *(__int64 *)v56 >= 0 )
            goto LABEL_140;
LABEL_139:
          *v56 |= 2u;
          _enable();
          sub_14034EE30(v56, v52, v55);
          _disable();
          v53 = (struct _KTHREAD *)BugCheckParameter1a;
          v52 = BugCheckParameter2b;
LABEL_140:
          v58 = *((_DWORD *)v56 + 22);
          *((_DWORD *)v56 + 22) = 0;
          v56[17] = 0;
          *(_QWORD *)v56 = 0LL;
          *((_BYTE *)v53 + 792) |= 1 << v56[16];
          _enable();
          if ( v58 )
            sub_14022B568((ULONG_PTR)v53, v52, v58);
LABEL_146:
          v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
            KiCheckForKernelApcDelivery();
        }
LABEL_149:
        v25 = v94;
        goto LABEL_150;
      }
      v12 = sub_140286DE0((__int64 *)v8, v11, CurrentIrql);
      v94 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741302 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v47 = KeGetCurrentIrql();
              if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
              {
                v48 = KeGetCurrentPrcb();
                v49 = *((_QWORD *)v48 + 4375);
                v50 = ~(unsigned __int16)(-1LL << v78);
                v22 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
                *(_DWORD *)(v49 + 20) &= v50;
                if ( v22 )
                  sub_140418E4C(v48);
              }
            }
          }
          __writecr8(CurrentIrql);
          v51 = BugCheckParameter2a;
          if ( !BugCheckParameter2a )
          {
            v52 = v82 + 40;
            BugCheckParameter2b = v82 + 40;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v52);
              v52 = v82 + 40;
            }
            v53 = KeGetCurrentThread();
            BugCheckParameter1a = (ULONG_PTR)v53;
            if ( v52 - qword_140C50630 >= 0x8000000000LL )
            {
              v55 = 0xFFFFFFFFLL;
            }
            else
            {
              v54 = sub_140287F30(*((_QWORD *)v53 + 23));
              v53 = (struct _KTHREAD *)BugCheckParameter1a;
              v55 = v54;
              v52 = v82 + 40;
            }
            _disable();
            v56 = (char *)v53 + 1696;
            v57 = 0;
            while ( (*(_QWORD *)v56 & 0x7FFFFFFFFFFFFFFCLL) != (v52 & 0x7FFFFFFFFFFFFFFCLL)
                 || !v56[18]
                 || (*(_DWORD *)v56 & 1) != 0
                 || *((_DWORD *)v56 + 2) != (_DWORD)v55 )
            {
              ++v57;
              v56 += 96;
              if ( v57 >= 6 )
              {
                if ( (*((_DWORD *)v53 + 30) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)v55, 0LL);
                goto LABEL_145;
              }
            }
            v56[18] = 0;
            if ( *(__int64 *)v56 >= 0 )
              goto LABEL_140;
            goto LABEL_139;
          }
          goto LABEL_149;
        }
        goto LABEL_52;
      }
      if ( BugCheckParameter2a && (*(_DWORD *)(v8 + 52) & 0x40000000) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = *((_QWORD *)v39 + 4375);
              v41 = ~(unsigned __int16)(-1LL << v78);
              v22 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
              *(_DWORD *)(v40 + 20) &= v41;
              if ( v22 )
                sub_140418E4C(v39);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( (v6 & 0x800) != 0 )
        {
          v25 = -1073741078;
          v94 = -1073741078;
LABEL_167:
          v84 = v8;
LABEL_168:
          v51 = BugCheckParameter2a;
LABEL_150:
          if ( v84 )
          {
            v59 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
            if ( (v6 & 5) == 0 )
              v5 = BugCheckParameter3_4 | 8;
            v60 = sub_140286920((ULONG_PTR)BugCheckParameter2, v84, v5);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v61 = KeGetCurrentIrql();
                if ( v61 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v61 >= 2u )
                {
                  v62 = KeGetCurrentPrcb();
                  v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
                  v64 = *((_QWORD *)v62 + 4375);
                  v22 = (v63 & *(_DWORD *)(v64 + 20)) == 0;
                  *(_DWORD *)(v64 + 20) &= v63;
                  if ( v22 )
                    sub_140418E4C(v62);
                }
              }
            }
            __writecr8(v59);
            if ( v60 )
              sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v51, v60);
            v25 = v94;
          }
          if ( (v6 & 1) != 0 )
          {
            v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
            --*(_QWORD *)(v4 + 40);
            --*(_DWORD *)(v4 + 88);
            sub_140287660(v4, v65, v66);
            return (unsigned int)v94;
          }
          return v25;
        }
        v94 = sub_14096F8CC(v8, 0, -1);
        v25 = v94;
        if ( (int)(v94 + 0x80000000) >= 0 && v94 != -1073741302 )
          goto LABEL_167;
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        if ( v94 < 0 )
        {
          v42 = 0;
          if ( (v6 & 5) == 0 )
            v42 = BugCheckParameter3_4 | 8;
          BugCheckParameter1 = v42;
          v86 = sub_140286920(v8, v8, v42);
          if ( v86 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v43 = KeGetCurrentIrql();
                if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
                {
                  v44 = KeGetCurrentPrcb();
                  v45 = *((_QWORD *)v44 + 4375);
                  v46 = ~(unsigned __int16)(-1LL << v78);
                  v22 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
                  *(_DWORD *)(v45 + 20) &= v46;
                  if ( v22 )
                    sub_140418E4C(v44);
                }
              }
            }
            __writecr8(CurrentIrql);
            sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), 1LL, v86);
            goto LABEL_77;
          }
          goto LABEL_52;
        }
      }
    }
    else
    {
      v81 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = *((_QWORD *)v35 + 4375);
            v37 = ~(unsigned __int16)(-1LL << v78);
            v22 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
            *(_DWORD *)(v36 + 20) &= v37;
            if ( v22 )
              sub_140418E4C(v35);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !BugCheckParameter2a )
      {
        v26 = v82 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v26);
          v26 = v82 + 40;
        }
        v27 = KeGetCurrentThread();
        v87 = v27;
        if ( v26 - qword_140C50630 < 0x8000000000LL )
        {
          v33 = sub_140287F30(*((_QWORD *)v27 + 23));
          v26 = v82 + 40;
          v27 = v87;
          v28 = v33;
        }
        else
        {
          v28 = 0xFFFFFFFFLL;
        }
        _disable();
        v29 = (char *)v27 + 1696;
        v85 = (char *)v27 + 1696;
        v30 = v26 & 0x7FFFFFFFFFFFFFFCLL;
        for ( i = 0; i < 6; ++i )
        {
          if ( (*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL) == v30
            && v29[18]
            && (*(_DWORD *)v29 & 1) == 0
            && *((_DWORD *)v29 + 2) == (_DWORD)v28 )
          {
            v29[18] = 0;
            if ( *(__int64 *)v29 < 0 )
            {
              *v29 |= 2u;
              _enable();
              sub_14034EE30(v29, v26, v30);
              _disable();
              v29 = v85;
              v26 = v82 + 40;
              v27 = v87;
            }
            v32 = *((_DWORD *)v29 + 22);
            *((_DWORD *)v29 + 22) = 0;
            v29[17] = 0;
            *(_QWORD *)v29 = 0LL;
            *((_BYTE *)v27 + 792) |= 1 << v29[16];
            _enable();
            if ( v32 )
              sub_14022B568((ULONG_PTR)v27, v26, v32);
            goto LABEL_68;
          }
          v29 += 96;
          v85 = v29;
        }
        if ( (*((_DWORD *)v27 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
        _enable();
LABEL_68:
        v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
      }
      if ( (v6 & 2) != 0 )
        return 3221225865LL;
      if ( (*(_BYTE *)(v4 + 62) & 0xC) != 0 && (v6 & 0x800) != 0 )
        return 3221226218LL;
      v24 = sub_14026E564(v8, BugCheckParameter1, v93 - v81, v93);
      v94 = v24;
      v25 = v24;
      if ( v24 < 0 )
      {
        if ( v24 != -1073741302 )
          goto LABEL_168;
        if ( !BugCheckParameter2a )
        {
          --*((_WORD *)CurrentThread + 243);
          ExAcquirePushLockExclusiveEx(v82 + 40, 0LL);
        }
LABEL_77:
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
LABEL_52:
        v11 = BugCheckParameter1;
        continue;
      }
      if ( !BugCheckParameter2a )
      {
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockExclusiveEx(v82 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    }
    if ( a2 )
    {
      v13 = *(unsigned int *)(v8 + 44);
      if ( a2 <= v13 )
        break;
      a2 -= v13;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v84 = v88;
    if ( BugCheckParameter2a )
      goto LABEL_52;
    v11 = BugCheckParameter3_4 | 4;
    v84 = v88;
    BugCheckParameter1 = BugCheckParameter3_4 | 4;
  }
  while ( v8 );
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(v4 + 72, retaddr);
  else
    *(_DWORD *)(v4 + 72) = 0;
  v14 = KeGetCurrentPrcb();
  v15 = *((_QWORD *)v14 + 4375);
  if ( v15 )
  {
    if ( *((_BYTE *)v14 + 32) <= 1u )
    {
      v67 = *(_DWORD *)(v15 + 24) - 1;
      *(_DWORD *)(v15 + 24) = v67;
      if ( !v67 )
        sub_140418E4C(v14);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && CurrentIrql <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = *((_QWORD *)v69 + 4375);
        v71 = ~(unsigned __int16)(-1LL << v78);
        v22 = (v71 & *(_DWORD *)(v70 + 20)) == 0;
        *(_DWORD *)(v70 + 20) &= v71;
        if ( v22 )
          sub_140418E4C(v69);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !BugCheckParameter2a )
  {
    v17 = v82 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17);
    v18 = KeGetCurrentThread();
    if ( v17 - qword_140C50630 < 0x8000000000LL )
      BugCheckParameter3 = sub_140287F30(*((_QWORD *)v18 + 23));
    _disable();
    v19 = (char *)v18 + 1696;
    v20 = 0LL;
    do
    {
      if ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && v19[18]
        && (*(_DWORD *)v19 & 1) == 0
        && *((_DWORD *)v19 + 2) == BugCheckParameter3 )
      {
        v19[18] = 0;
        if ( *(__int64 *)v19 < 0 )
        {
          *v19 |= 2u;
          _enable();
          sub_14034EE30(v19, v20, BugCheckParameter3);
          _disable();
        }
        v21 = *((_DWORD *)v19 + 22);
        *((_DWORD *)v19 + 22) = 0;
        v19[17] = 0;
        *(_QWORD *)v19 = 0LL;
        *((_BYTE *)v18 + 792) |= 1 << v19[16];
        _enable();
        if ( v21 )
          sub_14022B568((ULONG_PTR)v18, v17, v21);
        goto LABEL_36;
      }
      v20 = (unsigned int)(v20 + 1);
      v19 += 96;
    }
    while ( (unsigned int)v20 < 6 );
    if ( (*((_DWORD *)v18 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, BugCheckParameter3, 0LL);
    _enable();
LABEL_36:
    v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
