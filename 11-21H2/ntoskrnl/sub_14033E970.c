/*
 * XREFs of sub_14033E970 @ 0x14033E970
 * Callers:
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_14024501C @ 0x14024501C (sub_14024501C.c)
 *     sub_140257F64 @ 0x140257F64 (sub_140257F64.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_14033B640 @ 0x14033B640 (sub_14033B640.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 */

__int64 __fastcall sub_14033E970(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 *v8; // r15
  unsigned int v9; // edi
  ULONG_PTR **v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // edi
  ULONG_PTR *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  ULONG_PTR v28; // rbx
  int v29; // ebp
  __int64 v30; // rax
  char v31; // cl
  char v32; // dl
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // r8
  __int64 v38; // rax
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // al
  char v43; // dl
  __int64 v44; // rax
  unsigned int v45; // edx
  ULONG_PTR v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // di
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+20h] [rbp-48h]
  int v56; // [rsp+88h] [rbp+20h] BYREF

  v8 = a8;
  v9 = 0;
  v10 = (ULONG_PTR **)a7;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  *a8 = 0LL;
  *v10 = 0LL;
  v15 = *((_QWORD *)CurrentThread + 23);
  v53 = v15 + 1664;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = a3;
      if ( a4 )
        v16 = (unsigned __int64)a4;
      v17 = sub_140317A10(v16);
      a7 = v17;
      v19 = v17;
      if ( (v17 & 1) == 0 )
        break;
      if ( !a4 )
      {
        v24 = ((unsigned __int64)sub_140317A10((unsigned __int64)&a7) >> 12) & 0xFFFFFFFFFFLL;
        if ( v24 > qword_140C50840 || (*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 3221226548LL;
        v27 = *(_QWORD *)(48 * v24 - 0x220000000000LL + 8);
        v28 = 48 * v24 - 0x220000000000LL;
        if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) == 0 && v27 >= 0 && v27 )
        {
          v29 = a5;
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        else
        {
          if ( sub_140234F14(v15, v27 | 0x8000000000000000uLL) )
            return 3221226548LL;
          v29 = a5;
        }
        LODWORD(a8) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&a8, v27, v25, v26);
          while ( *(__int64 *)(v28 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && sub_1402433D0(a3) )
          goto LABEL_98;
        LOBYTE(v30) = a7;
LABEL_28:
        if ( v29 == 2 )
        {
          if ( !a4 )
            v9 = 1;
          v36 = sub_14027428C(v28, a6, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v36 != -1 && !a4 )
            sub_14024501C(v53, (_QWORD *)a3, v36);
          if ( !_bittest64((const signed __int64 *)(v28 + 40), 0x28u) )
          {
            v37 = *(_QWORD *)(v28 + 8);
            if ( v37 > 0 && !a4 )
              sub_1403336E0(v53, a3, v37 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v31 = *(_BYTE *)(v28 + 34);
        if ( (v31 & 8) == 0 )
        {
          v32 = v31 & 0x10;
          if ( v29 != 1 )
          {
            if ( v32 )
              *(_BYTE *)(v28 + 34) = v31 & 0xEF;
            v33 = sub_140232694((unsigned __int64 *)(v28 + 16), 1, 1);
            *v8 = v33;
            if ( v33 )
              *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
            *(_QWORD *)(v28 + 16) = sub_14033B6A0(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( a4 || (a7 & 0x42) == 0 )
              return 0LL;
            sub_14033DBC0(a3, a7 & 0xFFFFFFFFFFFFFF9DuLL);
            v34 = (__int64)(a3 << 25) >> 16;
            if ( (unsigned __int8)sub_140274D80(v35, v34) < 7u )
              sub_1403171A0(v53, v34, 1u, 1u);
            return 3221225505LL;
          }
          if ( !v32 && (a4 || (v30 & 0x42) == 0) || (v9 = -1073740748, !v32) )
          {
            if ( (*(_DWORD *)(v28 + 16) & 4) == 0 )
              *(_BYTE *)(v28 + 34) = v31 | 0x10;
          }
          if ( sub_14033B640(*(_QWORD *)(v28 + 16)) )
          {
            v49 = sub_140317A10(v28 + 16);
            *(_QWORD *)(v28 + 16) = sub_14033B6A0(v49, 0LL);
            goto LABEL_59;
          }
          goto LABEL_112;
        }
LABEL_98:
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 3221226548LL;
      }
      v28 = sub_1402738F0(a4, 0LL);
      if ( v28 )
      {
        v30 = sub_140317A10((unsigned __int64)a4);
        a7 = v30;
        if ( (v30 & 1) == 0 )
          goto LABEL_87;
        v29 = a5;
        goto LABEL_28;
      }
    }
    if ( (v17 & 0x400) != 0 )
      return 0LL;
    if ( (v17 & 0x800) == 0 )
      break;
    if ( a4 )
      v38 = sub_1402738F0(a4, 0LL);
    else
      v38 = sub_140315D60(a3, 0LL, 0);
    v28 = v38;
    if ( v38 )
    {
      if ( !a4 || (a7 = sub_140317A10((unsigned __int64)a4), (a7 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          sub_14027428C(v28, a6, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v39 = *(_BYTE *)(v28 + 34);
        if ( (v39 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v39 & 0x28) == 0 )
            {
              v40 = sub_140232694((unsigned __int64 *)(v28 + 16), 1, 1);
              *v8 = v40;
              if ( v40 )
                *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
              a7 = sub_14033B6A0(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              *(_QWORD *)(v28 + 16) = a7;
            }
            goto LABEL_59;
          }
          if ( sub_14033B640(*(_QWORD *)(v28 + 16)) )
          {
            v41 = sub_140317A10(v28 + 16);
            *(_QWORD *)(v28 + 16) = sub_14033B6A0(v41, 0LL);
          }
          else
          {
            v9 = -1073740748;
          }
          if ( (*(_DWORD *)(v28 + 16) & 4) != 0 )
          {
LABEL_59:
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v9;
          }
          v42 = *(_BYTE *)(v28 + 34) | 0x10;
          *(_BYTE *)(v28 + 34) = v42;
          if ( *(_WORD *)(v28 + 32) )
          {
            *(_BYTE *)(v28 + 34) = v42 & 0xF8 | 3;
            goto LABEL_59;
          }
          v47 = sub_140326870(v28, 0);
          v46 = v28;
          if ( (v47 & 3) == 0 )
          {
            v45 = 8;
LABEL_81:
            sub_1402BF9C0(v46, v45);
            goto LABEL_59;
          }
          sub_1403941B0(v28, 0LL);
        }
        else
        {
          if ( (v39 & 7) != 3 )
            goto LABEL_59;
          if ( a5 != 1 )
          {
            if ( (v39 & 8) != 0 || a5 || (v39 & 0x20) != 0 )
              goto LABEL_59;
            v43 = v39 & 0xEF;
            *(_BYTE *)(v28 + 34) = v43;
            if ( *(_WORD *)(v28 + 32) )
              *(_BYTE *)(v28 + 34) = v43 & 0xF8 | 2;
            else
              sub_140326870(v28, 0);
            v44 = sub_140232694((unsigned __int64 *)(v28 + 16), 1, 1);
            *v8 = v44;
            if ( v44 )
              *v10 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
            a7 = sub_14033B6A0(*(_QWORD *)(v28 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v28 + 16) = a7;
            if ( *(_WORD *)(v28 + 32) )
              goto LABEL_59;
            v45 = 4;
            v46 = v28;
            goto LABEL_81;
          }
        }
LABEL_112:
        v9 = -1073740748;
        goto LABEL_59;
      }
LABEL_87:
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v20 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( v17 )
  {
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v15 + 1838));
    if ( a4 )
    {
      if ( a2 )
      {
        v21 = sub_14033D80C(v15 + 1664, (__int64)(a3 << 25) >> 16, (unsigned __int64)a4);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 || (v51 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v15 + 1838));
      }
      else
      {
        v21 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v51 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)sub_14033FD38(v19) )
    {
      if ( v20 != 1 )
      {
        v52 = sub_140232694((unsigned __int64 *)&a7, 1, 0);
        *v8 = v52;
        if ( v52 )
        {
          *v10 = v21;
          if ( !a4 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
            a4 = (unsigned __int64 *)a3;
          }
          v22 = a7;
          goto LABEL_17;
        }
        return 0LL;
      }
    }
    else
    {
      if ( v20 != 1 )
      {
        if ( (v19 & 2) != 0 )
        {
          sub_140274E48((__int64)v21, v19, 1);
          v19 &= ~2uLL;
        }
        v22 = sub_14033B6A0(v19, 1LL);
        a7 = v22;
LABEL_15:
        if ( !a4 )
          a4 = (unsigned __int64 *)a3;
LABEL_17:
        *a4 = v22;
        return 0LL;
      }
      if ( sub_14033B640(v19) )
      {
        v48 = sub_140317A10((unsigned __int64)&a7);
        v22 = sub_14033B6A0(v48, 0LL);
        a7 = v22;
        goto LABEL_15;
      }
    }
  }
  else if ( !a4 && !a5 && !sub_140353858((__int64)(a3 << 25) >> 16, a1, v18, &v56) )
  {
    v50 = v56;
    if ( v56 != 24 )
    {
      sub_140257F64((__int64)(a3 << 25) >> 16, 1u);
      a7 = (32LL * (v50 & 0x1F)) | sub_1402CCC50(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)a3 = a7;
      return 0LL;
    }
  }
  return 3221226548LL;
}
