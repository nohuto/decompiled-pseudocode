/*
 * XREFs of sub_1402AD610 @ 0x1402AD610
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_14021AD70 @ 0x14021AD70 (sub_14021AD70.c)
 *     sub_140230B44 @ 0x140230B44 (sub_140230B44.c)
 *     sub_14023659C @ 0x14023659C (sub_14023659C.c)
 *     sub_140257F64 @ 0x140257F64 (sub_140257F64.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317AB0 @ 0x140317AB0 (sub_140317AB0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_140594ABC @ 0x140594ABC (sub_140594ABC.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

__int64 __fastcall sub_1402AD610(__int64 a1, _BYTE *a2, int *a3, __int64 *a4)
{
  unsigned int v4; // edi
  _BYTE *v5; // r14
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r10
  ULONG_PTR v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v20; // rcx
  signed __int32 v21; // ett
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r15
  int v28; // r14d
  _QWORD *v29; // rdx
  int v30; // ebx
  __int64 v31; // r8
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  int v36; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-51h]
  __int64 v48; // [rsp+40h] [rbp-49h]
  _QWORD v49[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v50; // [rsp+60h] [rbp-29h]
  __int128 v51; // [rsp+70h] [rbp-19h]
  __int64 v52; // [rsp+80h] [rbp-9h]
  unsigned __int64 v53; // [rsp+88h] [rbp-1h]
  __int64 v54; // [rsp+90h] [rbp+7h]
  __int64 v55; // [rsp+98h] [rbp+Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int64 v57; // [rsp+F0h] [rbp+67h]

  v4 = 0;
  *a2 = 1;
  v49[0] = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v5 = a2;
  v52 = 0LL;
  v6 = 0LL;
  v54 = 0LL;
  v48 = *((_QWORD *)KeGetCurrentThread() + 23);
  v8 = *(_QWORD *)(a1 + 56);
  v55 = 0LL;
  if ( (*(_BYTE *)(v8 + 184) & 7) == 0 )
  {
    v6 = 64LL;
    LODWORD(v49[0]) = 64;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v9 & 1) != 0 )
  {
    switch ( *(_BYTE *)v10 )
    {
      case 2:
        v6 = (unsigned int)v6 | 1;
        LODWORD(v49[0]) = v6;
        break;
      case 1:
        v6 = (unsigned int)v6 | 2;
        LODWORD(v49[0]) = v6;
        break;
      case 5:
        v6 = (unsigned int)v6 | 8;
        LODWORD(v49[0]) = v6;
        break;
    }
    if ( *(_BYTE *)v10 == 4 )
      goto LABEL_71;
  }
  if ( (v6 & 0xB) != 0 )
  {
LABEL_71:
    v57 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v9 & 1) != 0 && *(_BYTE *)v10 == 4 )
      v55 = *(_QWORD *)(v10 + 48);
    if ( (v6 & 2) != 0 && (*(_DWORD *)(v10 + 80) & 0x4000) != 0 )
    {
      v6 = (unsigned int)v6 | 4;
      LODWORD(v49[0]) = v6;
    }
    if ( (v6 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) > 0x1000uLL )
    {
      v6 = (unsigned int)v6 | 0x10;
      LODWORD(v49[0]) = v6;
    }
  }
  else
  {
    v11 = 0LL;
    v57 = 0LL;
  }
  v12 = *(_QWORD *)a1;
  v13 = *(_QWORD *)a1;
  v53 = v11;
  v49[1] = a1;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = (_QWORD *)v14;
  if ( v12 >= 0xFFFF800000000000uLL )
  {
    if ( (v6 & 2) != 0 )
      return 0LL;
    if ( v12 >= 0xFFFFF68000000000uLL
      && v12 <= 0xFFFFF6FFFFFFFFFFuLL
      && v9
      && ((v9 & 1) == 0 || *(_BYTE *)v10 != 7 && *(_BYTE *)v10 != 8) )
    {
      KeBugCheckEx(0x50u, v12, *(_QWORD *)(a1 + 8), v14, 6uLL);
    }
  }
  v15 = 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v30 = 4;
      v27 = 0LL;
      goto LABEL_36;
    }
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
  {
    v16 = v12 & 0x7FFFFFFFF000LL;
    if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v27 = qword_140C50668;
      v30 = 1;
      v6 = LODWORD(v49[0]);
      goto LABEL_36;
    }
    if ( v16 == qword_140C50678 && v16 )
    {
      v27 = qword_140C50670;
      v30 = 1;
      v6 = LODWORD(v49[0]);
      goto LABEL_36;
    }
  }
  v17 = *((_QWORD *)KeGetCurrentThread() + 23);
  v18 = (_DWORD *)(*(_QWORD *)(v17 + 1680) + 284LL);
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    LOBYTE(v6) = -1;
    sub_140461B20(*(_QWORD *)(v17 + 1680) + 284LL, v6);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v20 + 24);
        *(_DWORD *)(v20 + 24) = v39 + 1;
        if ( v39 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw(v18);
    v21 = *v18 & 0x7FFFFFFF;
    if ( v21 != _InterlockedCompareExchange(v18, v21 + 1, v21) )
    {
      v38 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v38 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v40 = *(_DWORD *)(v38 + 24) - 1;
          *(_DWORD *)(v38 + 24) = v40;
          if ( !v40 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      LOBYTE(v6) = -1;
      sub_140366A20(v18, v6);
    }
  }
  v22 = *((_QWORD *)KeGetCurrentThread() + 23);
  v23 = *(_QWORD *)(v22 + 2016);
  if ( !v23 )
    goto LABEL_54;
  v24 = v12 >> 12;
  if ( v12 >> 12 < (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
    || v24 > (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) )
  {
    v23 = *(_QWORD *)(v22 + 2008);
    while ( v23 )
    {
      if ( v24 > (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) )
      {
        v23 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        if ( v24 >= (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) )
        {
          *(_QWORD *)(v22 + 2016) = v23;
          goto LABEL_17;
        }
        v23 = *(_QWORD *)v23;
      }
    }
LABEL_54:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                      + 284LL));
LABEL_55:
    v11 = v57;
LABEL_56:
    sub_14023659C(v12, v15, *(_QWORD *)(a1 + 8), v48);
    if ( (v49[0] & 2) != 0 && v15 )
      sub_140594ABC(v11, v15, v12);
    return 3221225477LL;
  }
LABEL_17:
  v15 = v23;
  v46 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
  {
    v25 = v12 & 0x7FFFFFFFF000LL;
    if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v27 = qword_140C50668;
      v28 = 1;
      goto LABEL_30;
    }
    if ( v25 == qword_140C50678 && v25 )
    {
      v27 = qword_140C50670;
      v28 = 1;
      goto LABEL_30;
    }
  }
  if ( (*(_DWORD *)(v23 + 48) & 0x70) == 0x20 && (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
  {
    v41 = sub_1402EE0E0(v23, 32LL);
    if ( v41 )
    {
      if ( *(struct _KTHREAD **)(v41 + 8) != KeGetCurrentThread() )
      {
        v27 = 0LL;
LABEL_134:
        v28 = 24;
        goto LABEL_30;
      }
    }
  }
  v26 = *(_DWORD *)(v15 + 48);
  if ( (v26 & 4) != 0 )
  {
    v27 = 0LL;
    goto LABEL_134;
  }
  if ( (v26 & 0x200000) != 0 )
  {
    if ( (v26 & 0x70) == 0x10
      || (v26 & 0x70) == 0x30
      || (v26 & 0x800000) != 0
      || (v26 & 0x180000u) >= 0x100000
      || (v26 & 0x70) == 0x20 && (*(_DWORD *)(v15 + 64) & 0x1000000) != 0
      || *(int *)(v15 + 52) >= 0 )
    {
      v28 = 24;
    }
    else
    {
      v28 = (*(_DWORD *)(v15 + 48) >> 7) & 0x1F;
    }
    v27 = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(v15 + 64) & 0x1000000) != 0 && (*(_BYTE *)(v15 + 48) & 0x70) != 0x50 )
    {
      v27 = 0LL;
      goto LABEL_134;
    }
    v27 = sub_140319600(v15, v12 >> 12, 4LL, &v46);
    if ( v27 )
    {
      v28 = (*(_DWORD *)(v15 + 48) >> 7) & 0x1F;
      if ( (*(_DWORD *)(v15 + 48) & 0x70) == 0x20 && v28 == 7 )
        v28 = 256;
    }
    else
    {
      v28 = 24;
    }
    v29 = *(_QWORD **)(v15 + 120);
    if ( (__int64)v29 < 0
      && v24 - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) > (unsigned __int64)(*v29 - 1LL) >> 12 )
    {
      goto LABEL_134;
    }
  }
LABEL_30:
  v30 = v28;
  v31 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14063D8E0(v31 + 284, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v31 + 284), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v31 + 284));
  }
  v32 = KeGetCurrentPrcb();
  v33 = *((_QWORD *)v32 + 4375);
  if ( v33 )
  {
    if ( *((_BYTE *)v32 + 32) <= 1u )
    {
      v42 = *(_DWORD *)(v33 + 24) - 1;
      *(_DWORD *)(v33 + 24) = v42;
      if ( !v42 )
        sub_140418E4C(v32);
    }
  }
  if ( v28 == 24 )
    goto LABEL_55;
  if ( (v28 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v49[0] & 2) != 0 )
      return 0LL;
    if ( sub_140230B44(*(_QWORD *)(a1 + 16)) )
    {
      sub_140257F64(v12, 1u);
      v44 = v28 & 0xF;
      if ( v27 )
        v44 |= 0xFFFFFFFFF8000020uLL;
      v45 = sub_1402CCC50(32 * v44, v43);
      *v47 = v45;
      *a2 = 2;
      return 0LL;
    }
    return 3221225477LL;
  }
  v6 = LODWORD(v49[0]);
  v5 = a2;
LABEL_36:
  v34 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v50 = v12;
  v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v51) = v30;
  if ( (v34 & 1) != 0 && (*(_BYTE *)v35 == 7 || *(_BYTE *)v35 == 2 || *(_BYTE *)v35 == 8 || *(_BYTE *)v35 == 4) )
    v36 = *(_DWORD *)(v35 + 40);
  else
    v36 = 0;
  LODWORD(v52) = v36;
  *((_QWORD *)&v50 + 1) = v27;
  v54 = v15;
  DWORD1(v51) = 0;
  if ( !v27 )
    return sub_1403219B0(v49, v6);
  if ( (v6 & 2) == 0 )
  {
    if ( v15 )
    {
      if ( *(__int64 *)(v15 + 120) >= 0 )
      {
        v4 = sub_14021AD70((__int64)v49);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v15 + 36)) )
            __fastfail(0xEu);
          *(_DWORD *)(a1 + 80) |= 1u;
          *(_QWORD *)(a1 + 88) = v15;
        }
      }
    }
  }
  *v5 = 0;
  *a3 = v30;
  *a4 = v27;
  sub_140317AB0(v49);
  *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ (2 * LODWORD(v49[0]))) & 0x1FE00;
  return v4;
}
