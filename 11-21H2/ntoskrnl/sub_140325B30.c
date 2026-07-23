/*
 * XREFs of sub_140325B30 @ 0x140325B30
 * Callers:
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022FB98 @ 0x14022FB98 (sub_14022FB98.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_140236E68 @ 0x140236E68 (sub_140236E68.c)
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_14027DAD4 @ 0x14027DAD4 (sub_14027DAD4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140595FBC @ 0x140595FBC (sub_140595FBC.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 */

__int64 __fastcall sub_140325B30(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  char v15; // al
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  __int16 v30; // dx
  bool v31; // zf
  __int16 v32; // dx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // r13d
  unsigned __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rdi
  unsigned __int64 v40; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v42; // rdx
  signed __int32 v43; // eax
  _SLIST_ENTRY *v44; // rdi
  unsigned int *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG_PTR v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // di
  int v53; // eax
  unsigned int v54; // ebx
  volatile signed __int64 *v55; // r14
  _BYTE *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // [rsp+40h] [rbp-88h] BYREF
  int v64; // [rsp+44h] [rbp-84h] BYREF
  unsigned int *v65; // [rsp+48h] [rbp-80h]
  __int64 v66; // [rsp+50h] [rbp-78h]
  __int64 v67; // [rsp+58h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h] BYREF
  __int64 v69; // [rsp+68h] [rbp-60h]
  __int64 v70; // [rsp+70h] [rbp-58h]
  __int64 v71; // [rsp+78h] [rbp-50h]
  __int64 v72; // [rsp+80h] [rbp-48h]
  __int64 v73; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v74; // [rsp+E0h] [rbp+18h]
  unsigned int *v75; // [rsp+E8h] [rbp+20h]

  v75 = a4;
  v74 = a3;
  v73 = a1;
  v5 = (__int64)a5;
  v6 = 0LL;
  v71 = a1 + 56;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 16);
  v72 = *(_QWORD *)(a1 + 56);
  v10 = a1;
  *a5 = 0LL;
  v63 = 0;
  v66 = v8;
  ListEntry = 0LL;
  if ( !v7 )
  {
    while ( 1 )
    {
      v46 = sub_140317A10(a2);
      v49 = v46;
      if ( (v46 & 0x800) == 0 )
        return 3221226548LL;
      if ( (v46 & 1) == 0 && (!v46 || !qword_140C50780 || (qword_140C50780 & v46) != 0) )
      {
        if ( qword_140C50780 )
        {
          if ( (v46 & 0x10) != 0 )
            v46 &= ~0x10uLL;
          else
            v46 &= ~qword_140C50780;
        }
        v50 = (v46 >> 12) & 0xFFFFFFFFFFLL;
        if ( v50 <= qword_140C50840 )
        {
          v51 = 6 * v50;
          if ( _bittest64((const signed __int64 *)(48 * v50 - 0x21FFFFFFFFD8LL), 0x36u) )
          {
            v14 = 48 * v50 - 0x220000000000LL;
            LODWORD(a5) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&a5, v51, v47, v48);
              while ( *(__int64 *)(v14 + 24) < 0 );
            }
            if ( sub_140317A10(a2) == v49 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
              {
                v14 = sub_14059A31C(v14, 2LL);
                if ( !v14 )
                  return 3221226548LL;
              }
              if ( (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) != a2
                && !_bittest64((const signed __int64 *)(v14 + 40), 0x28u) )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v49, *(_QWORD *)(v14 + 8));
              }
              v11 = *(_QWORD *)a2;
              v12 = 0xFFFFF6FB7DBED7F8uLL;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL
                && a2 <= 0xFFFFF6FB7DBED7F8uLL
                && (dword_140D06880 & 0xC00000) != 0
                && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
                && (v11 & 1) != 0
                && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
              {
                v12 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                if ( v12 )
                {
                  v58 = *(_QWORD *)(v12 + 8 * ((a2 >> 3) & 0x1FF));
                  if ( (v58 & 0x20) != 0 )
                    v11 |= 0x20uLL;
                  if ( (v58 & 0x42) != 0 )
                    v11 |= 0x42uLL;
                }
              }
              v10 = v73;
              v8 = v66;
              goto LABEL_8;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
  }
  v11 = *(_QWORD *)a2;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v12 )
    {
      v59 = *(_QWORD *)(v12 + 8 * ((a2 >> 3) & 0x1FF));
      if ( (v59 & 0x20) != 0 )
        v11 |= 0x20uLL;
      if ( (v59 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
  }
  v13 = v11;
  if ( qword_140C50780 && (v11 & 0x10) == 0 )
    v13 = v11 & ~qword_140C50780;
  v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
LABEL_8:
  v15 = *(_BYTE *)(v14 + 35);
  if ( (v15 & 0x10) != 0 )
  {
    if ( (v15 & 0x40) != 0 )
    {
      v54 = -1073740023;
      goto LABEL_107;
    }
LABEL_195:
    *(_DWORD *)(v10 + 80) |= 0x80u;
    v54 = -1073741801;
    goto LABEL_107;
  }
  v70 = v8 & 1;
  if ( (v8 & 1) == 0 || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
    {
LABEL_11:
      __incgsdword(0x2E98u);
      v12 = *(unsigned __int8 *)(v14 + 34);
      if ( (v12 & 8) != 0
        && (dword_140D06880 & 0x20000) != 0
        && ((*(_DWORD *)(v14 + 16) >> 5) & 0x1F) == 0
        && ((*(_DWORD *)(v14 + 16) >> 5) & 2) != 0 )
      {
        goto LABEL_195;
      }
      if ( (v12 & 0x20) != 0 )
      {
        result = sub_14023EB78(v10, a2, v7, v14, v5, &v63);
        if ( v63 <= 1 || (int)result < 0 )
          return result;
      }
      else
      {
        v67 = 0LL;
        result = sub_1403265B0(v10, a2, v7, (void *)v14, (__int64)&v67, v11, (__int64)&ListEntry);
        if ( (int)result < 0 )
          return result;
        if ( v67 )
          v14 = v67;
      }
      v19 = (unsigned __int64 *)v73;
      v65 = v75;
      v20 = *(_QWORD *)(v73 + 16);
      if ( (v20 & 1) != 0 && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        v11 = -865LL;
        *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      }
      if ( ((v11 >> 5) & 0x1F) == 0x18 )
        sub_140595FBC(a2, v14);
      v21 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v17 )
        {
          v62 = *(_QWORD *)(v17 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v62 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v62 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v22 = v21;
      if ( qword_140C50780 && (v21 & 0x10) == 0 )
        v22 = v21 & ~qword_140C50780;
      v23 = v22 & 0xFFFFFFFFFF000LL | qword_140016200[(v21 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
      if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_26;
      if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v23 = a2 == 0xFFFFF6FB7DBEDF68uLL
            ? v22 & 0xFFFFFFFFFF000LL | qword_140016200[(v21 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
            : v22 & 0xFFFFFFFFFF000LL | qword_140016200[(v21 >> 5) & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
        if ( (unsigned int)sub_14023261C(a2) )
          v23 |= 4uLL;
      }
      if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
        v23 |= 4uLL;
      v53 = sub_14027DAD4((__int64)(a2 << 25) >> 16);
      v19 = (unsigned __int64 *)v73;
      if ( v53 )
LABEL_26:
        v23 |= 0x100uLL;
      v24 = 0LL;
      v25 = v23 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      v26 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
      v27 = *(_QWORD *)(v14 + 16);
      v69 = v26;
      if ( (v27 & 0x400) == 0 && (v27 & 4) != 0 && (unsigned __int16)v27 >> 12 == *(_DWORD *)(v26 + 1172) )
        v24 = sub_14033C2A0(v14);
      v28 = *(_QWORD *)(v14 + 16);
      if ( (v28 & 0x400) == 0 && (v28 & 0x4000000) != 0 )
        v25 |= 0x40uLL;
      if ( (v25 & 0x800) == 0 )
      {
LABEL_30:
        if ( *(__int64 *)(v14 + 40) >= 0 )
          goto LABEL_33;
LABEL_31:
        v29 = v25;
        if ( sub_140317A80(a2) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v25 & 1) != 0 )
              v29 = v25 | 0x8000000000000000uLL;
            *(_QWORD *)a2 = v29;
            sub_1402294F0(a2, v29);
LABEL_33:
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v7 )
              goto LABEL_55;
            v64 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v64, v26, v17, v18);
              while ( *(__int64 *)(v7 + 24) < 0 );
            }
            *(_BYTE *)(v7 + 34) &= ~0x20u;
            v30 = *(_WORD *)(v7 + 32);
            if ( !v30 )
              sub_1405AD67C(v7);
            v31 = v30 == 1;
            v32 = v30 - 1;
            *(_WORD *)(v7 + 32) = v32;
            if ( v31 && _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
              goto LABEL_217;
            v33 = *(_QWORD *)(v7 + 40);
            if ( (v33 & 0x10000000000LL) != 0 || (v33 & 0x20000000000000LL) != 0 )
              goto LABEL_54;
            v34 = *(_QWORD *)(v7 + 24);
            v35 = v34 & 0x3FFFFFFFFFFFFFFFLL;
            if ( v32 )
            {
              if ( v32 == 1 )
              {
                if ( !v35 && (*(_BYTE *)(v7 + 34) & 8) == 0 )
                  goto LABEL_54;
              }
              else if ( v32 != 2 || !v35 || (*(_BYTE *)(v7 + 34) & 8) == 0 )
              {
                goto LABEL_54;
              }
              v36 = 0;
            }
            else
            {
              v36 = 1;
            }
            v37 = *(_QWORD *)(v74 + 8) | 0x8000000000000000uLL;
            if ( v37 > 0xFFFFF6BFFFFFFF78uLL || v37 < 0xFFFFF68000000000uLL )
            {
              v38 = *(_BYTE *)(v74 + 35);
              if ( (v38 & 0x20) != 0 )
              {
                *(_BYTE *)(v74 + 35) = v38 & 0xDF;
                goto LABEL_53;
              }
            }
            if ( v33 < 0 && (*(_DWORD *)(v74 + 16) & 0x400LL) != 0
              || v37 <= 0xFFFFF6BFFFFFFF78uLL && v37 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v74 + 35) & 0x20) != 0
              || v36 && (v34 & 0x4000000000000000LL) != 0 )
            {
              v39 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v33 >> 43) & 0x3FF));
              sub_14028CE10(v39, 1LL);
            }
            else
            {
              v39 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v33 >> 43) & 0x3FF));
            }
            v40 = 1LL;
            if ( (ULONG_PTR *)v39 == &StartContext )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v42 = *((int *)CurrentPrcb + 8615);
              if ( (_DWORD)v42 != -1 )
              {
                if ( (unsigned __int64)(v42 + 1) <= 0x100 )
                {
                  while ( 1 )
                  {
                    v43 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v42 + 1, v42);
                    v31 = (_DWORD)v42 == v43;
                    LODWORD(v42) = v43;
                    if ( v31 )
                      break;
                    if ( v43 == -1 || (unsigned __int64)(v43 + 1LL) > 0x100 )
                      goto LABEL_148;
                  }
LABEL_53:
                  v31 = v36 == 0;
                  v7 = v74;
                  if ( v31 )
                  {
LABEL_54:
                    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_55:
                    if ( v24 )
                      sub_1402E20D0(v69, v24, 1);
                    v44 = ListEntry;
                    if ( ListEntry )
                    {
                      if ( SLODWORD(ListEntry[11].Next) > 1 )
                        KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
                      sub_14027456C(v44);
                    }
                    if ( *(__int64 *)(v14 + 40) < 0 )
                    {
                      result = sub_1403203D0(v73, v25, v75, 0, v66);
                      if ( (int)result < 0 )
                        return result;
                      return 272LL;
                    }
                    if ( !v70 )
                    {
                      v52 = 0;
                      goto LABEL_91;
                    }
                    v56 = (_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
                    {
                      v52 = 0;
                      if ( *v56 == 3 )
                      {
                        v25 &= ~0x20uLL;
                        v52 = 1;
                      }
                      else if ( *v56 == 5 )
                      {
                        v6 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
                      }
LABEL_91:
                      if ( (*(_BYTE *)(v73 + 69) & 8) != 0 )
                      {
                        v57 = *(_QWORD *)(v73 + 16);
                        if ( (v57 & 1) == 0 || *(_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                          v25 &= ~0x20uLL;
                      }
                      if ( (unsigned int)sub_14022FB98(v71, a2, v14) )
                        v52 |= 4u;
                      if ( !(unsigned int)sub_140322F10(v72, a2, (_QWORD *)v14, 0, v25, v52, v6) )
                      {
                        sub_140228660(v14, 0);
                        return 3221225495LL;
                      }
                      return 272LL;
                    }
                    if ( sub_140317A80(a2) )
                    {
                      if ( (unsigned int)sub_140229550() )
                      {
                        if ( !HIBYTE(word_140C51864) && (v25 & 1) != 0 )
                          v25 |= 0x8000000000000000uLL;
                        *(_QWORD *)a2 = v25;
                        sub_1402294F0(a2, v25);
                        return 272LL;
                      }
                      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0
                        && (v25 & 1) != 0 )
                      {
                        v25 |= 0x8000000000000000uLL;
                      }
                    }
                    *(_QWORD *)a2 = v25;
                    return 272LL;
                  }
LABEL_217:
                  sub_140338500(v7, 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
                  goto LABEL_54;
                }
LABEL_148:
                if ( (int)v42 > 192
                  && (_DWORD)v42 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v42) )
                {
                  v40 = (int)v42 - 192 + 1LL;
                }
                if ( !v40 )
                  goto LABEL_53;
              }
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 16960), v40);
            goto LABEL_53;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v25 & 1) != 0 )
            v29 = v25 | 0x8000000000000000uLL;
        }
        *(_QWORD *)a2 = v29;
        goto LABEL_33;
      }
      if ( !v75 || sub_140236E68(v25, *v19) )
        v45 = v65;
      else
        v45 = 0LL;
      if ( (*(_BYTE *)(v14 + 34) & 0x10) != 0 )
      {
        if ( !v45 )
        {
          if ( *v19 >= 0xFFFF800000000000uLL )
            v25 |= 0x42uLL;
          goto LABEL_30;
        }
      }
      else
      {
        if ( !v45 )
          goto LABEL_30;
        if ( *(__int64 *)(v14 + 40) < 0 )
          goto LABEL_31;
        v24 = sub_14033C2A0(v14);
      }
      v25 |= 0x42uLL;
      goto LABEL_30;
    }
    v14 = sub_140599EBC(v10, *(_QWORD *)v10, a2);
    if ( v14 )
    {
      v61 = sub_140317A10(a2);
      v10 = v73;
      v11 = v61;
      goto LABEL_11;
    }
    if ( v7 )
    {
      LOBYTE(v60) = 17;
      sub_140334790(v7, v60);
    }
    return 3221226548LL;
  }
  sub_14027428C(v14, *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0);
  v54 = 0;
LABEL_107:
  v55 = (volatile signed __int64 *)(v14 + 24);
  if ( v7 )
  {
    _InterlockedAnd64(v55, 0x7FFFFFFFFFFFFFFFuLL);
    v55 = (volatile signed __int64 *)(v7 + 24);
    LODWORD(v73) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v55, 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v73, v12, v8, (__int64)a4);
      while ( *(__int64 *)v55 < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    if ( (unsigned int)sub_1403377E0(v7) )
      sub_140338500(v7, 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
  }
  _InterlockedAnd64(v55, 0x7FFFFFFFFFFFFFFFuLL);
  return v54;
}
