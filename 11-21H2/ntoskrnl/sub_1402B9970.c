/*
 * XREFs of sub_1402B9970 @ 0x1402B9970
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_140428BA0 @ 0x140428BA0 (sub_140428BA0.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_14020E67C @ 0x14020E67C (sub_14020E67C.c)
 *     sub_140210178 @ 0x140210178 (sub_140210178.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022A040 @ 0x14022A040 (sub_14022A040.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     sub_14023BD18 @ 0x14023BD18 (sub_14023BD18.c)
 *     sub_140242E70 @ 0x140242E70 (sub_140242E70.c)
 *     sub_140290B74 @ 0x140290B74 (sub_140290B74.c)
 *     sub_140290FCC @ 0x140290FCC (sub_140290FCC.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140291E98 @ 0x140291E98 (sub_140291E98.c)
 *     sub_140291EB8 @ 0x140291EB8 (sub_140291EB8.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall sub_1402B9970(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char v4; // r12
  int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  _WORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct _KPRCB *v21; // rbp
  __int64 v22; // r14
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  __int64 result; // rax
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  BOOL v35; // ebp
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  int v40; // r14d
  __int16 v41; // dx
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  unsigned int v47; // r14d
  unsigned int v48; // ebp
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // edi
  _QWORD *v52; // rdx
  bool v53; // di
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  bool v60; // [rsp+78h] [rbp+10h] BYREF
  int v61; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v62; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != qword_140D06A00 && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( sub_14020E67C(a2, 0LL) )
    {
      v47 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a3) = 1;
        v48 = (char)sub_1402BA000(a2, 1LL, a3);
        if ( !(unsigned __int8)sub_1402B9FC0(a2) )
          sub_140291010(0LL, a2, (PVOID *)v48, 0);
        v49 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * dword_140D050CC;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v49;
        sub_140290FCC();
        v7 = 0;
      }
      if ( !sub_140290B74(a2) && (unsigned int)sub_140292884(v50) && !sub_140291EB8(*(_WORD **)(a2 + 576), a1) )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v51 = *(_DWORD *)(a2 + 588);
      sub_140224100(a2);
      if ( (xmmword_140D06910 & 0x8000000) != 0 )
        sub_14062DAE4(a2, 1350LL, v47, v51);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v9 = v8;
  if ( v8 )
  {
    v39 = *(unsigned int *)(a1 + 216) + v8;
    if ( v39 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v39 + 112) & 4) != 0 )
        {
          if ( sub_140242E70(v39, v9) )
          {
            if ( (*(_BYTE *)(v39 + 112) & 1) != 0 )
              sub_140210CE4((_RTL_RB_TREE *)a1, v39, 1);
          }
          else if ( *(_QWORD *)v39 >= *(_QWORD *)(v39 + 24) && (*(_BYTE *)(v39 + 112) & 2) == 0 )
          {
            sub_140210178(v9, v39, a1);
          }
        }
        else
        {
          sub_14022A040(v9, a1, v39);
        }
        v40 += *(_DWORD *)(v39 + 116);
        v39 = *(_QWORD *)(v39 + 408);
        if ( !v39 )
          break;
        v9 = v39 - *(unsigned int *)(a1 + 216);
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && sub_140291E98(a2)
        && v40
        && (v41 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v10 = 0LL;
  if ( *(char *)(a2 + 195) >= dword_140D052FC || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    if ( !v11 || (v42 = *(unsigned int *)(a1 + 216) + v11) == 0 || !sub_14023BD18(v42) )
    {
      v12 = *(_WORD **)(a2 + 576);
      v13 = *(unsigned __int8 *)(a1 + 208);
      if ( (unsigned __int16)v13 >= *v12 )
        a3 = 0LL;
      else
        a3 = *(_QWORD *)&v12[4 * v13 + 4];
      v10 = a3 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v14 = *(_QWORD *)(a2 + 104);
    if ( v14 )
      v14 += *(unsigned int *)(a1 + 216);
    v15 = *(_QWORD *)(a1 + 35000);
    if ( v15 )
      *(_BYTE *)(v15 + 16) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v60 = 0;
    if ( v14 && (*(_DWORD *)(a2 + 120) & 0xC00) == 0 && (unsigned int)sub_1402103E0(a2, v14, a3, 1, &v60) )
    {
      result = sub_140210988(a1, v14, a2, v7);
LABEL_29:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v31 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        result = (unsigned int)(*(_DWORD *)(v31 + 24) - 1);
        *(_DWORD *)(v31 + 24) = result;
        if ( !(_DWORD)result )
          return sub_140418E4C(CurrentPrcb);
      }
      return result;
    }
    v16 = *(char *)(a2 + 195);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        v53 = 0;
        if ( (unsigned int)sub_140577654(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
        {
          KeAcquireSpinLockAtDpcLevel(&qword_140C2BB60);
          v54 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v55 = (_QWORD *)qword_140C2BA28;
            v53 = qword_140C2BA20 == (_QWORD)&qword_140C2BA20;
            if ( *(__int64 **)qword_140C2BA28 != &qword_140C2BA20 )
              goto LABEL_117;
            *v54 = &qword_140C2BA20;
            *(_QWORD *)(a2 + 1016) = v55;
            *v55 = v54;
            qword_140C2BA28 = a2 + 1008;
          }
          KeReleaseSpinLockFromDpcLevel(&qword_140C2BB60);
          if ( v53 )
            KeInsertQueueDpc(&stru_140C2B9E0, 0LL, 0LL);
        }
      }
    }
    v17 = *(_QWORD *)(a1 + 34880);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
      || !v17
      || ((v18 = *(_WORD **)(a2 + 576), v19 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v19 >= *v18)
        ? (v20 = 0LL)
        : (v20 = *(_QWORD *)&v18[4 * v19 + 4]),
          (v17 & v20) != v17 || v60) )
    {
      v43 = (_QWORD *)(a2 + 216);
      v44 = (_QWORD *)(a1 + 16 * (v16 + 2036));
      if ( v7 )
      {
        v45 = *v44;
        if ( *(_QWORD **)(*v44 + 8LL) != v44 )
          goto LABEL_117;
        *v43 = v45;
        *(_QWORD *)(a2 + 224) = v44;
        *(_QWORD *)(v45 + 8) = v43;
        *v44 = v43;
        _bittestandset((signed __int32 *)(a1 + 32476), v16);
      }
      else
      {
        v52 = (_QWORD *)v44[1];
        if ( (_QWORD *)*v52 != v44 )
          goto LABEL_117;
        *v43 = v44;
        *(_QWORD *)(a2 + 224) = v52;
        *v52 = v43;
        v44[1] = v43;
      }
      v46 = *(_DWORD *)(a1 + 32472);
      ++*(_DWORD *)(a1 + 33140);
      *(_DWORD *)(a1 + 32472) = v46 | (1 << v16);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1648) = result;
      *(_QWORD *)(a1 + 33144) += result;
      goto LABEL_29;
    }
    v21 = KeGetCurrentPrcb();
    v22 = *(_QWORD *)(a1 + 34888);
    v23 = (_QWORD *)(v22 + 16 * (v16 + 1));
    v61 = 0;
    v24 = *((_QWORD *)v21 + 4375);
    if ( v24 )
    {
      if ( *((_BYTE *)v21 + 32) <= 1u )
      {
        v56 = *(_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 24) = v56 + 1;
        if ( v56 == -1 )
LABEL_107:
          sub_140418E4C(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    {
      v33 = *((_QWORD *)v21 + 4375);
      if ( v33 )
      {
        if ( *((_BYTE *)v21 + 32) <= 1u )
        {
          v57 = *(_DWORD *)(v33 + 24) - 1;
          *(_DWORD *)(v33 + 24) = v57;
          if ( !v57 )
            sub_140418E4C(v21);
        }
      }
      do
        sub_1402F32E0(&v61);
      while ( *(_QWORD *)v22 );
      v34 = *((_QWORD *)v21 + 4375);
      if ( v34 )
      {
        if ( *((_BYTE *)v21 + 32) <= 1u )
        {
          v58 = *(_DWORD *)(v34 + 24);
          *(_DWORD *)(v34 + 24) = v58 + 1;
          if ( v58 == -1 )
            goto LABEL_107;
        }
      }
    }
    v25 = (_QWORD *)(a2 + 216);
    if ( v7 )
    {
      v32 = *v23;
      if ( *(_QWORD **)(*v23 + 8LL) == v23 )
      {
        *v25 = v32;
        *(_QWORD *)(a2 + 224) = v23;
        *(_QWORD *)(v32 + 8) = v25;
        *v23 = v25;
        _bittestandreset((signed __int32 *)(a1 + 32476), v16);
        goto LABEL_28;
      }
    }
    else
    {
      v26 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v26 == v23 )
      {
        *v25 = v23;
        *(_QWORD *)(a2 + 224) = v26;
        *v26 = v25;
        v23[1] = v25;
LABEL_28:
        *(_DWORD *)(v22 + 8) |= 1 << v16;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++*(_DWORD *)(v22 + 672);
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1648) = result;
        *(_QWORD *)(v22 + 680) += result;
        _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
        v28 = KeGetCurrentPrcb();
        v29 = *((_QWORD *)v28 + 4375);
        if ( v29 )
        {
          if ( *((_BYTE *)v28 + 32) <= 1u )
          {
            result = (unsigned int)(*(_DWORD *)(v29 + 24) - 1);
            *(_DWORD *)(v29 + 24) = result;
            if ( !(_DWORD)result )
              result = sub_140418E4C(v28);
          }
        }
        goto LABEL_29;
      }
    }
LABEL_117:
    __fastfail(3u);
  }
  v35 = *(_QWORD *)(a1 + 16) != 0LL;
  sub_1402F69A0(a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v36 = KeGetCurrentPrcb();
  v37 = *((_QWORD *)v36 + 4375);
  if ( v37 )
  {
    if ( *((_BYTE *)v36 + 32) <= 1u )
    {
      v59 = *(_DWORD *)(v37 + 24) - 1;
      *(_DWORD *)(v37 + 24) = v59;
      if ( !v59 )
        sub_140418E4C(v36);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  v38 = (_QWORD *)(a2 + 216);
  v62 = 0LL;
  *v38 = 0LL;
  do
  {
    sub_1403405E0(a1, v38 - 27, &v62);
    v38 = v62;
    ++v4;
    if ( v62 )
      v62 = (_QWORD *)*v62;
    if ( (v4 & 0xF) == 0 )
      sub_140340300(a1 + 12760);
  }
  while ( v38 );
  result = sub_140340300(a1 + 12760);
  if ( !v35 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
        return sub_14022BA6C((struct _KPRCB *)a1, 2);
    }
  }
  return result;
}
