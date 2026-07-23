/*
 * XREFs of sub_14026E564 @ 0x14026E564
 * Callers:
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 *     sub_14096FE9C @ 0x14096FE9C (sub_14096FE9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14026E564(ULONG_PTR a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r12
  ULONG_PTR v6; // r14
  char v7; // cl
  BOOL v8; // r15d
  char v9; // al
  unsigned int v10; // r13d
  ULONG_PTR v11; // r11
  __int64 v12; // r15
  int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // edi
  volatile LONG *v16; // r14
  unsigned __int64 v17; // rsi
  ULONG_PTR v18; // rax
  int v19; // eax
  int v20; // r12d
  int v21; // r15d
  __int64 v22; // r13
  void *v23; // r13
  unsigned int v24; // edi
  unsigned int v25; // esi
  __int64 v27; // rdx
  __int64 v28; // rsi
  struct _KTHREAD *v29; // rbp
  __int64 v30; // r8
  char *v31; // rbx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  int v34; // r8d
  bool v35; // zf
  __int64 v36; // rbp
  void *v37; // rcx
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rsi
  struct _KTHREAD *v44; // rbp
  unsigned int v45; // ecx
  char *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  __int64 v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v68; // [rsp+30h] [rbp-78h]
  __int64 v69; // [rsp+38h] [rbp-70h]
  int v70; // [rsp+40h] [rbp-68h]
  int v71; // [rsp+44h] [rbp-64h]
  ULONG_PTR v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  unsigned int v75; // [rsp+60h] [rbp-48h]
  unsigned int v78; // [rsp+C8h] [rbp+20h]

  v5 = *(_QWORD *)a1;
  v6 = a1;
  v71 = 0;
  v70 = 0;
  CurrentThread = KeGetCurrentThread();
  v69 = *(_QWORD *)a1;
  v72 = sub_1402828F0(274LL, 8LL * a4, 1951624525LL);
  if ( v72 )
  {
    v7 = *(_BYTE *)(v5 + 62);
    v8 = *(_QWORD *)(v5 + 64) != 0LL;
    v78 = v8;
    v9 = v7;
    if ( (a2 & 0x400) != 0 && (v7 & 0xC) != 0 )
    {
      if ( (v7 & 0xC) == 8 )
      {
        v24 = -1073741811;
LABEL_78:
        v37 = (void *)v72;
        goto LABEL_69;
      }
      if ( !(unsigned int)sub_14096FE9C(v6, 1LL) )
      {
        v24 = -1073741670;
        goto LABEL_78;
      }
      v9 = *(_BYTE *)(v5 + 62);
      v71 = 1;
    }
    v10 = a2 | 4;
    if ( (v9 & 0xC) != 4 )
      v10 = a2;
    sub_1406F4768(v72);
    v11 = 0LL;
    if ( v8 )
      v12 = a3;
    else
      v12 = sub_140287C30(v5);
    if ( (v10 & 4) != 0 )
    {
      v13 = 1;
      v68 = 1;
      goto LABEL_9;
    }
    if ( (v10 & 0x80u) != 0 )
      v27 = 3LL;
    else
      v27 = (v10 >> 7) & 2;
    v13 = sub_140287380(v5, v27);
    v68 = v13;
    if ( !v13 )
    {
      v12 = v11;
      v24 = -1073740277;
      v23 = (void *)v72;
      goto LABEL_28;
    }
    while ( 1 )
    {
LABEL_9:
      if ( v13 == 2 )
      {
        if ( v12 )
        {
          v38 = sub_1405C4980(v6, v12);
          v11 = 0LL;
          v24 = v38;
          if ( v38 < 0 )
          {
            v12 = 0LL;
            goto LABEL_67;
          }
        }
      }
      else
      {
        v12 = v11;
      }
      v14 = v78;
      v15 = v12;
      v75 = v12;
      if ( !v78 )
      {
        v70 = 1;
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
      }
      v16 = (volatile LONG *)(v5 + 72);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v68 != 2 )
      {
LABEL_14:
        v18 = a1;
LABEL_15:
        v19 = sub_140286EC0(v18);
        v20 = v19;
        if ( v19 == 1 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          v11 = 0LL;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v52 = *((_QWORD *)CurrentPrcb + 4375);
                v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v35 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
                *(_DWORD *)(v52 + 20) &= v53;
                if ( v35 )
                {
                  sub_140418E4C(CurrentPrcb);
                  v11 = 0LL;
                }
              }
            }
          }
          __writecr8(v17);
          v6 = a1;
          v24 = -1073741670;
        }
        else
        {
          if ( v19 == 3 )
            v12 = 0LL;
          v73 = v12;
          v21 = 0;
          if ( (*(_BYTE *)(v69 + 62) & 0xC) == 0 )
          {
            v22 = v69;
            goto LABEL_20;
          }
          v21 = 1;
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v54 = KeGetCurrentIrql();
              if ( v54 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v54 >= 2u )
              {
                v55 = KeGetCurrentPrcb();
                v56 = *((_QWORD *)v55 + 4375);
                v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v35 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
                *(_DWORD *)(v56 + 20) &= v57;
                if ( v35 )
                  sub_140418E4C(v55);
              }
            }
          }
          __writecr8(v17);
          BugCheckParameter4 = (v10 & 0x400 | 0x50) >> 4;
          v23 = (void *)v72;
          v58 = sub_14096F8CC(a1, BugCheckParameter4, -1);
          v11 = 0LL;
          v24 = v58;
          if ( v58 < 0 )
          {
            v12 = v73;
            v5 = v69;
            v6 = a1;
            goto LABEL_28;
          }
          v22 = v69;
          if ( (*(_BYTE *)(v69 + 62) & 0xC) == 4 )
            return v24;
          LOBYTE(v17) = ExAcquireSpinLockExclusive(v16);
LABEL_20:
          v6 = a1;
          if ( v78 )
            *(_WORD *)(a1 + 32) |= 1u;
          if ( v21 || !*(_QWORD *)(a1 + 8) )
          {
            v5 = v69;
            if ( (*(_BYTE *)(v69 + 62) & 0xC) == 0 )
            {
              *(_QWORD *)(a1 + 8) = v72;
              sub_14026EA80(a1 + ((unsigned __int64)v78 << 6) + 56, 1LL);
            }
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v69 + 72));
            v11 = 0LL;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v63 = KeGetCurrentIrql();
                if ( v63 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v63 >= 2u )
                {
                  v64 = KeGetCurrentPrcb();
                  v65 = *((_QWORD *)v64 + 4375);
                  v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v35 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
                  *(_DWORD *)(v65 + 20) &= v66;
                  if ( v35 )
                  {
                    sub_140418E4C(v64);
                    v11 = 0LL;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)v17);
            v12 = v73;
            v23 = 0LL;
            v71 = 0;
            v24 = 0;
LABEL_28:
            v25 = v78;
            if ( !v78 && v70 != (_DWORD)v11 )
            {
              v28 = *(_QWORD *)v5 + 40LL;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              {
                ExfTryToWakePushLock(v28);
                v11 = 0LL;
              }
              v29 = KeGetCurrentThread();
              if ( (unsigned __int64)(v28 - qword_140C50630) < 0x8000000000LL )
              {
                v30 = (unsigned int)sub_140287F30(*((_QWORD *)v29 + 23));
                v11 = 0LL;
              }
              else
              {
                v30 = 0xFFFFFFFFLL;
              }
              _disable();
              v31 = (char *)v29 + 1696;
              v32 = v11;
              v33 = v28 & 0x7FFFFFFFFFFFFFFCLL;
              while ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) != v33
                   || v31[18] == (_BYTE)v11
                   || (*(_DWORD *)v31 & 1) != 0
                   || *((_DWORD *)v31 + 2) != (_DWORD)v30 )
              {
                ++v32;
                v31 += 96;
                if ( v32 >= 6 )
                  goto LABEL_61;
              }
              v31[18] = v11;
              if ( v31 )
              {
                if ( *(__int64 *)v31 < 0 )
                {
                  *v31 |= 2u;
                  _enable();
                  sub_14034EE30(v31, v33, v30);
                  _disable();
                  v11 = 0LL;
                }
                v34 = *((_DWORD *)v31 + 22);
                *((_DWORD *)v31 + 22) = v11;
                v31[17] = v11;
                *(_QWORD *)v31 = v11;
                *((_BYTE *)v29 + 792) |= 1 << v31[16];
                _enable();
                if ( v34 )
                {
                  sub_14022B568((ULONG_PTR)v29, v28, v34);
                  LODWORD(v11) = 0;
                }
                goto LABEL_55;
              }
LABEL_61:
              if ( (*((_DWORD *)v29 + 30) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v29, v28, (unsigned int)v30, v11);
              _enable();
LABEL_55:
              v35 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
              if ( v35 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
              {
                KiCheckForKernelApcDelivery();
                LODWORD(v11) = 0;
              }
              v25 = 0;
            }
            if ( v71 != (_DWORD)v11 )
              sub_14096FE9C(v6, 0LL);
            if ( v12 )
              sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)), v25, v12);
            if ( !v23 )
              return v24;
            v37 = v23;
LABEL_69:
            ExFreePoolWithTag(v37, 0);
            return v24;
          }
          v24 = -1073741302;
          v36 = sub_1402869C0(a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 72));
          v11 = 0LL;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v59 = KeGetCurrentIrql();
              if ( v59 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v59 >= 2u )
              {
                v60 = KeGetCurrentPrcb();
                v61 = *((_QWORD *)v60 + 4375);
                v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v35 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
                *(_DWORD *)(v61 + 20) &= v62;
                if ( v35 )
                {
                  sub_140418E4C(v60);
                  v11 = 0LL;
                }
              }
            }
          }
          __writecr8((unsigned __int8)v17);
          if ( v20 == 3 )
            v12 = v36;
          else
            v12 = v73;
        }
        v5 = v69;
LABEL_67:
        v23 = (void *)v72;
        goto LABEL_28;
      }
      if ( v78 )
      {
        v18 = a1;
        if ( v12 == *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFF) )
          goto LABEL_15;
        v12 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu);
      }
      else
      {
        if ( v12 == sub_140287C30(v5) )
          goto LABEL_14;
        v12 = sub_140287C30(v5);
        v75 = v15;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = *((_QWORD *)v40 + 4375);
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v35 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v35 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(v17);
      if ( !v78 )
      {
        v43 = *(_QWORD *)v5 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43);
        v44 = KeGetCurrentThread();
        if ( (unsigned __int64)(v43 - qword_140C50630) >= 0x8000000000LL )
          v45 = -1;
        else
          v45 = sub_140287F30(*((_QWORD *)v44 + 23));
        _disable();
        v46 = (char *)v44 + 1696;
        v47 = 0LL;
        v48 = v43 & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)v46 & 0x7FFFFFFFFFFFFFFCLL) != v48
             || !v46[18]
             || (*(_DWORD *)v46 & 1) != 0
             || *((_DWORD *)v46 + 2) != v45 )
        {
          v47 = (unsigned int)(v47 + 1);
          v46 += 96;
          if ( (unsigned int)v47 >= 6 )
            goto LABEL_113;
        }
        v46[18] = 0;
        if ( v46 )
        {
          if ( *(__int64 *)v46 < 0 )
          {
            *v46 |= 2u;
            _enable();
            sub_14034EE30(v46, v47, v48);
            _disable();
          }
          v49 = *((_DWORD *)v46 + 22);
          *((_DWORD *)v46 + 22) = 0;
          v46[17] = 0;
          *(_QWORD *)v46 = 0LL;
          *((_BYTE *)v44 + 792) |= 1 << v46[16];
          _enable();
          if ( v49 )
            sub_14022B568((ULONG_PTR)v44, v43, v49);
          goto LABEL_115;
        }
LABEL_113:
        if ( (*((_DWORD *)v44 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, v45, 0LL);
        _enable();
LABEL_115:
        v35 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v35 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        v15 = v75;
        v14 = v78;
        v70 = 0;
      }
      v6 = a1;
      v11 = 0LL;
      v13 = 2;
      if ( v15 )
      {
        sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)), v14, v15);
        v13 = 2;
        v11 = 0LL;
      }
    }
  }
  return 3221225626LL;
}
