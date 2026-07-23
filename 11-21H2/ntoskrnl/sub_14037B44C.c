/*
 * XREFs of sub_14037B44C @ 0x14037B44C
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14037AF04 @ 0x14037AF04 (sub_14037AF04.c)
 *     sub_14037AF3C @ 0x14037AF3C (sub_14037AF3C.c)
 *     sub_14037BAD4 @ 0x14037BAD4 (sub_14037BAD4.c)
 *     sub_14037BB78 @ 0x14037BB78 (sub_14037BB78.c)
 *     sub_14037BB94 @ 0x14037BB94 (sub_14037BB94.c)
 *     sub_14037D5E8 @ 0x14037D5E8 (sub_14037D5E8.c)
 *     sub_14037E128 @ 0x14037E128 (sub_14037E128.c)
 *     sub_14037E1B8 @ 0x14037E1B8 (sub_14037E1B8.c)
 *     sub_14037E3A0 @ 0x14037E3A0 (sub_14037E3A0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14045D27C @ 0x14045D27C (sub_14045D27C.c)
 *     sub_1405B650C @ 0x1405B650C (sub_1405B650C.c)
 *     sub_1405B6618 @ 0x1405B6618 (sub_1405B6618.c)
 *     sub_1405B66D8 @ 0x1405B66D8 (sub_1405B66D8.c)
 *     sub_1405B6828 @ 0x1405B6828 (sub_1405B6828.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14037B44C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  ULONG v3; // r11d
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rax
  ULONG v12; // r11d
  _QWORD *v13; // rcx
  ULONG v14; // eax
  __int64 v15; // r15
  unsigned int v16; // r8d
  unsigned int v17; // edx
  int v18; // r10d
  __int64 v19; // rbx
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  __int64 i; // rax
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  int *v35; // r8
  int v36; // r9d
  int *v37; // rdx
  bool j; // zf
  unsigned int v39; // esi
  __int64 v40; // r13
  unsigned __int64 v41; // rbx
  unsigned int *v42; // rax
  unsigned int v43; // r15d
  unsigned int v44; // edi
  unsigned int v45; // r8d
  int v46; // edx
  int v47; // r9d
  __int64 v48; // r10
  unsigned int v49; // r11d
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rsi
  unsigned __int64 v53; // rax
  struct _KTHREAD *v54; // rcx
  unsigned int v55; // ebx
  void *v56; // rax
  __int64 result; // rax
  void *v58; // rax
  unsigned int v59; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v62; // r9
  int v63; // eax
  int v64; // ebx
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  __int64 v67; // r9
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  __int64 v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  __int64 v75; // r9
  int v76; // eax
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // rdi
  unsigned __int64 v82; // r15
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  __int64 v85; // r9
  int v86; // eax
  unsigned int v87; // [rsp+40h] [rbp-89h]
  int v88; // [rsp+44h] [rbp-85h]
  ULONG v89; // [rsp+48h] [rbp-81h]
  _SLIST_ENTRY *ListEntry; // [rsp+50h] [rbp-79h]
  __int64 v91; // [rsp+58h] [rbp-71h]
  __int64 v92; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v93; // [rsp+70h] [rbp-59h]
  __int64 v94; // [rsp+78h] [rbp-51h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-49h]
  __int128 v96; // [rsp+88h] [rbp-41h] BYREF
  __int64 v97; // [rsp+98h] [rbp-31h]
  __int64 v98; // [rsp+A0h] [rbp-29h]
  __int64 v99; // [rsp+A8h] [rbp-21h]
  __int64 v100; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-11h]
  __int128 v102; // [rsp+C8h] [rbp-1h]
  int v104; // [rsp+138h] [rbp+6Fh]
  unsigned int v105; // [rsp+140h] [rbp+77h]
  unsigned int v106; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v94 = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v96 = 0LL;
  v92 = 0LL;
  v101 = 0LL;
  v6 = *(unsigned int *)(v5 + 1188);
  v99 = v2;
  v89 = v3;
  v102 = 0LL;
  if ( (_DWORD)v6 )
  {
    sub_1405B6618(v6, v3);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1188);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1172) + 16736);
  v91 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    sub_1405B650C();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v100 = 0LL;
  *(_DWORD *)(v4 + 44) = 1;
  LOBYTE(v8) = 17;
  v9 = *(_DWORD *)(v7 + 120);
  v10 = 0LL;
  v106 = v9;
  v88 = 0;
  ListEntry = 0LL;
  v105 = 0;
  v104 = 1;
  v11 = sub_1402F5718();
  v13 = (_QWORD *)(v2 + 48);
  v97 = v11;
  v14 = 0;
  v98 = v2 + 48;
LABEL_4:
  v93 = v13;
  v87 = v14;
LABEL_5:
  if ( v14 < v12 )
  {
    v15 = *v13;
    if ( *v13 == qword_140C53278 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_67;
    if ( v100 != *(_QWORD *)(v7 + 112) )
    {
      if ( v100 )
      {
        v58 = (void *)sub_14037E128(v7, &v100, 1LL);
        if ( v58 )
          ExFreePoolWithTag(v58, 0);
      }
      sub_14037E3A0(v7, &v100);
    }
    v16 = v9 < (unsigned int)v101 ? v9 : 0;
    v17 = v101 - 1;
    v18 = (BYTE8(v101) & 4) != 0LL ? 0x20 : 0;
    v19 = *((_QWORD *)&v101 + 1) - ((BYTE8(v101) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v20 = v18 + v17;
      v21 = v18 + v16;
      if ( v17 - v16 == -1 )
        goto LABEL_34;
      v22 = (__int64 *)(v19 + 8 * ((unsigned __int64)v21 >> 6));
      for ( i = ((1LL << (v21 & 0x3F)) - 1) | *v22; i == -1; i = *v22 )
      {
        if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)v20 >> 6) )
          goto LABEL_34;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v24 = i + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
      if ( v24 > v20 )
      {
LABEL_34:
        v24 = -1;
      }
      else if ( v24 != -1 )
      {
        v24 -= v18;
LABEL_18:
        v10 = 48 * v15 - 0x220000000000LL;
        v8 = (unsigned __int8)sub_1402F2700(v10);
        if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
        {
          v92 = 0LL;
          v25 = sub_14037D5E8(v10, (__int64)&v92);
          if ( v25 >= 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v62 = *((_QWORD *)CurrentPrcb + 4375);
                  v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  j = (v63 & *(_DWORD *)(v62 + 20)) == 0;
                  *(_DWORD *)(v62 + 20) &= v63;
                  if ( j )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
            LOBYTE(v8) = 17;
            if ( ListEntry
              || (ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1248))) != 0LL
              || (ListEntry = (_SLIST_ENTRY *)sub_1402828F0(64, 0x78uLL, 0x57536D4Du)) != 0LL )
            {
              if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - 1LL) < 8 )
                v26 = *(_DWORD *)(v91 + 24) - 1;
              else
                v26 = 8;
              if ( v104 )
              {
                if ( (unsigned int)sub_140285380(v5, 0x120uLL) )
                {
                  v104 &= -((unsigned __int64)(sub_1402F5718() - v97) < 0x2FAF080);
                }
                else
                {
                  v104 = 0;
                  if ( v26 >= 3 )
                    v26 = 3;
                }
              }
              v4 = a1;
              _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
              v27 = sub_14037BB94(
                      (_DWORD)ListEntry,
                      v10,
                      (unsigned int)&v94,
                      (unsigned int)&v96,
                      (__int64)ListEntry,
                      v92,
                      a1,
                      v104);
              if ( v27 >= 0 )
              {
                ListEntry = 0LL;
                v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v91 + 232));
                v106 = v24 + 1;
                _bittestandset(*(signed __int32 **)(*(_QWORD *)(v91 + 112) + 16LL), v24);
                --*(_QWORD *)(v91 + 24);
                *(_DWORD *)(v91 + 120) = v24 + 1;
                sub_14037BB78(v91);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v91 + 232));
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v65 = KeGetCurrentIrql();
                    if ( v65 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v65 >= 2u )
                    {
                      v66 = KeGetCurrentPrcb();
                      v67 = *((_QWORD *)v66 + 4375);
                      v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
                      j = (v68 & *(_DWORD *)(v67 + 20)) == 0;
                      *(_DWORD *)(v67 + 20) &= v68;
                      if ( j )
                        sub_140418E4C(v66);
                    }
                  }
                }
                __writecr8(v28);
                v29 = (unsigned __int8)sub_1402F2700(v10);
                v30 = sub_140232694((unsigned __int64 *)(v10 + 16), 1, 1);
                *(_QWORD *)(v10 + 16) &= ~2uLL;
                v31 = v24;
                v7 = v91;
                v32 = v30;
                sub_14037BAD4(v10, v91, v31, 1LL);
                _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v69 = KeGetCurrentIrql();
                    if ( v69 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v69 >= 2u )
                    {
                      v70 = KeGetCurrentPrcb();
                      v71 = *((_QWORD *)v70 + 4375);
                      v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
                      j = (v72 & *(_DWORD *)(v71 + 20)) == 0;
                      *(_DWORD *)(v71 + 20) &= v72;
                      if ( j )
                        sub_140418E4C(v70);
                    }
                  }
                }
                __writecr8(v29);
                LOBYTE(v8) = 17;
                sub_1402E20D0(v5, v32, 2);
                v33 = v87;
LABEL_33:
                v14 = v33 + 1;
                v4 = a1;
                v13 = v93 + 1;
                v105 = 0;
                v12 = v89;
                v9 = v106;
                goto LABEL_4;
              }
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
              if ( v27 == -1073740682 )
              {
                v106 = v24 + 1;
                if ( v105 < v26 )
                {
                  sub_1405B6828((unsigned int)&v96, v24, v105, v104, *(_DWORD *)(v5 + 1192));
                  v12 = v89;
                  v7 = v91;
                  v14 = v87;
                  v13 = v93;
                  ++v105;
                  v9 = v106;
                  goto LABEL_5;
                }
              }
              else
              {
                v64 = v88;
                if ( v27 == -1073741670 )
                  v64 = 1;
                v88 = v64;
              }
              sub_1405B66D8(v27, (unsigned int)&v96, v24, v105, v104, ++*(_DWORD *)(v5 + 1192));
            }
            else
            {
              v88 = 1;
              ListEntry = 0LL;
            }
LABEL_68:
            v7 = v91;
            v33 = v87;
            _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1288) + 8LL), v87);
            goto LABEL_33;
          }
          sub_14045D27C((unsigned int)v25, v24);
        }
LABEL_67:
        if ( (_BYTE)v8 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v73 = KeGetCurrentIrql();
              if ( v73 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v73 >= 2u )
              {
                v74 = KeGetCurrentPrcb();
                v75 = *((_QWORD *)v74 + 4375);
                v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                j = (v76 & *(_DWORD *)(v75 + 20)) == 0;
                *(_DWORD *)(v75 + 20) &= v76;
                if ( j )
                  sub_140418E4C(v74);
              }
            }
          }
          __writecr8((unsigned __int8)v8);
          LOBYTE(v8) = 17;
        }
        goto LABEL_68;
      }
      if ( !v16 )
        goto LABEL_18;
      v59 = v106 + 1;
      if ( v106 + 1 > (unsigned int)v101 )
        v59 = v101;
      v17 = v59 - 1;
      v16 = 0;
    }
  }
  if ( v88 )
    *(_DWORD *)(v5 + 1188) = 32;
  v34 = *(_QWORD *)(v5 + 1288);
  if ( *(_DWORD *)v34 )
  {
    if ( v12 <= 1 )
    {
      if ( v12 == 1 && _bittest(*(const signed __int32 **)(v34 + 8), 0) )
        goto LABEL_125;
    }
    else if ( *(_DWORD *)v34 >= v12 )
    {
      v35 = *(int **)(v34 + 8);
      v36 = *v35;
      v37 = &v35[(unsigned __int64)(v12 - 1) >> 5];
      if ( v35 == v37 )
      {
        v77 = 0xFFFFFFFF >> (32 - v12);
        v78 = v36 & v77;
      }
      else
      {
        for ( j = v36 == -1; ; j = *v35 == -1 )
        {
          if ( !j )
            goto LABEL_45;
          if ( ++v35 == v37 )
            break;
        }
        v77 = 0xFFFFFFFF >> ~(v12 - 1);
        v78 = v77 & *v35;
      }
      if ( v78 == v77 )
      {
LABEL_125:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1288), 0, v12);
        *(_DWORD *)(v4 + 44) = 0;
        v55 = -1073740759;
        goto LABEL_61;
      }
    }
  }
LABEL_45:
  v39 = -1;
  v40 = *(_QWORD *)(v4 + 176) >> 12;
  v41 = sub_140340078(0LL, *(_QWORD *)(v4 + 144), v40);
  while ( 2 )
  {
    v42 = *(unsigned int **)(v5 + 1288);
    v43 = v39 + 1;
    v44 = *v42;
    v45 = v43 < *v42 ? v43 : 0;
    v46 = *v42 - 1;
    v47 = (v42[2] & 4) != 0LL ? 0x20 : 0;
    v48 = *((_QWORD *)v42 + 1) - ((*((_QWORD *)v42 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v49 = v46 + v47;
      v50 = 1LL;
      v51 = v45 + v47;
      if ( v49 - (_DWORD)v51 == -1 )
        goto LABEL_54;
      v52 = (_QWORD *)(v48 + 8 * ((unsigned __int64)(unsigned int)v51 >> 6));
      v50 = ~*v52 | ((1LL << ((v45 + v47) & 0x3F)) - 1);
      v51 = -1LL;
      if ( v50 == -1LL )
      {
        while ( (unsigned __int64)++v52 <= v48 + 8 * ((unsigned __int64)v49 >> 6) )
        {
          v50 = ~*v52;
          if ( v50 != -1LL )
            goto LABEL_51;
        }
LABEL_54:
        v39 = -1;
        goto LABEL_55;
      }
LABEL_51:
      v50 = ~v50;
      _BitScanForward64(&v53, v50);
      v39 = v53 + ((unsigned int)(((__int64)v52 - v48) >> 3) << 6);
      if ( v39 > v49 )
        goto LABEL_54;
      if ( v39 != -1 )
        break;
LABEL_55:
      if ( !v45 )
        goto LABEL_56;
      v79 = v43 + 1;
      if ( v43 + 1 > v44 )
        v79 = v44;
      v46 = v79 - 1;
      v45 = 0;
    }
    v39 -= v47;
LABEL_56:
    if ( v39 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1288) + 8LL), v39);
      v80 = *(_QWORD *)(v98 + 8LL * v39);
      if ( v80 == qword_140C53278 )
      {
        v41 = sub_14033B6A0(v41, v39 + (unsigned int)v40);
        sub_1402E20D0(v5, v41, 2);
      }
      else
      {
        v81 = 48 * v80 - 0x220000000000LL;
        v82 = (unsigned __int8)sub_1402F2700(v81);
        *(_BYTE *)(v81 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            if ( v83 <= 0xFu && (unsigned __int8)v82 <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = *((_QWORD *)v84 + 4375);
              v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v82 + 1));
              j = (v86 & *(_DWORD *)(v85 + 20)) == 0;
              *(_DWORD *)(v85 + 20) &= v86;
              if ( j )
                sub_140418E4C(v84);
            }
          }
        }
        __writecr8(v82);
      }
      continue;
    }
    break;
  }
  sub_14037E1B8(v51, v50, v99, v89);
  v54 = CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*((_WORD *)v54 + 243);
  ++*(_DWORD *)(v5 + 1196);
  j = (*((_WORD *)v54 + 243))++ == 0xFFFF;
  if ( j && *((struct _KTHREAD **)v54 + 19) != (struct _KTHREAD *)((char *)v54 + 152) )
    KiCheckForKernelApcDelivery();
  sub_14037AF3C(a1);
  v7 = v91;
  v55 = 259;
LABEL_61:
  sub_1402F9540((__int64)CurrentThread);
  if ( ListEntry )
    sub_14037AF04(ListEntry, (_SLIST_HEADER *)v5);
  if ( v100 )
  {
    v56 = (void *)sub_14037E128(v7, &v100, 0LL);
    if ( v56 )
      ExFreePoolWithTag(v56, 0);
  }
  return v55;
}
