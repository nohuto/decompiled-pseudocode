/*
 * XREFs of sub_14031CD90 @ 0x14031CD90
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 * Callees:
 *     sub_140201E8C @ 0x140201E8C (sub_140201E8C.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_140230B44 @ 0x140230B44 (sub_140230B44.c)
 *     sub_14023659C @ 0x14023659C (sub_14023659C.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 *     sub_1405A2E3C @ 0x1405A2E3C (sub_1405A2E3C.c)
 *     sub_1405A70EC @ 0x1405A70EC (sub_1405A70EC.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 *     sub_1406B42F4 @ 0x1406B42F4 (sub_1406B42F4.c)
 */

__int64 __fastcall sub_14031CD90(_QWORD *a1)
{
  __int64 **v1; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  _QWORD *v8; // r14
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v13; // rcx
  signed __int32 v14; // ett
  unsigned __int8 v15; // r9
  _BYTE *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rdi
  struct _KPRCB *v32; // rbp
  __int64 v33; // rcx
  signed __int32 v34; // ett
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned __int64 v37; // r11
  __int64 v38; // rbx
  int v39; // ecx
  __int64 v40; // rbx
  __int64 v41; // r8
  struct _KPRCB *v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // eax
  char v45; // bl
  unsigned int v46; // edi
  int v47; // edx
  __int64 v48; // r9
  unsigned __int64 v49; // rbx
  char v50; // di
  unsigned __int64 v52; // rdx
  __int64 v53; // rbp
  unsigned __int8 v54; // dl
  unsigned __int64 v55; // rdx
  __int64 v56; // rdi
  unsigned __int8 v57; // dl
  _QWORD *v58; // rdx
  __int64 v59; // rbx
  unsigned __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rcx
  ULONG_PTR v63; // rcx
  bool v64; // sf
  bool v65; // of
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r8
  int v69; // eax
  int v70; // eax
  __int64 **v71; // rax
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  unsigned __int64 v78; // rax
  int v79; // eax
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rdi
  __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  __int64 v86[3]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v88; // [rsp+80h] [rbp+8h] BYREF
  int v89; // [rsp+88h] [rbp+10h] BYREF
  __int64 v90; // [rsp+90h] [rbp+18h] BYREF
  __int64 v91; // [rsp+98h] [rbp+20h]

  v1 = 0LL;
  v89 = 0;
  v90 = 0LL;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  a1[7] = v3 + 1664;
  if ( *(_DWORD *)(v3 + 2000) <= 0x10u
    || (*(_DWORD *)(v3 + 2172) & 0x1000) != 0
    || (v4 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v3 + 1838)), *(_DWORD *)(v4 + 1176))
    && *(_QWORD *)(v4 + 1296) == v3 )
  {
    if ( !dword_140C5325C )
      goto LABEL_9;
    goto LABEL_145;
  }
  v5 = *(_QWORD *)(v4 + 17280);
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v3 + 1838));
  if ( (unsigned __int16)word_140D05000 <= 1u
    || (v58 = (_QWORD *)(*(_QWORD *)(v6 + 16)
                       + 24512LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL)),
        v7 = 16LL * (v58[268] + v58[269])
           + ((v58[134] + v58[135]) << 9)
           + ((*v58 + v58[1]) << 18)
           + v58[2820]
           + v58[2821],
        v7 < 0x420)
    && v5 >= v7 >> 4
    || !v7 )
  {
    v7 = *(_QWORD *)(v6 + 16896);
  }
  if ( v7 >= 0x420 || v5 < 0x4000 && v5 < v7 >> 4 )
  {
    if ( !dword_140C5325C )
      goto LABEL_9;
LABEL_145:
    v66 = 3LL;
    goto LABEL_146;
  }
  v65 = __OFSUB__(*(_BYTE *)(v3 + 640), 9);
  v64 = (char)(*(_BYTE *)(v3 + 640) - 9) < 0;
  *(_DWORD *)(v3 + 2000) = 0;
  v66 = (unsigned int)(v64 == v65) + 1;
LABEL_146:
  sub_1405A70EC(v66);
LABEL_9:
  v8 = &unk_140C53D00;
  v9 = *(_BYTE *)(v3 + 1848) & 7;
  if ( v9 <= 4u )
  {
    if ( v9 == 2 )
    {
      v10 = (volatile __int32 *)&unk_140C53D00;
LABEL_12:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v68 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v68 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_140461B20(v10, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v13 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v69 = *(_DWORD *)(v13 + 24);
            *(_DWORD *)(v13 + 24) = v69 + 1;
            if ( v69 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        _m_prefetchw((const void *)v10);
        v14 = *v10 & 0x7FFFFFFF;
        if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
        {
          v61 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v61 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v70 = *(_DWORD *)(v61 + 24) - 1;
              *(_DWORD *)(v61 + 24) = v70;
              if ( !v70 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140366A20(v10, CurrentIrql);
        }
      }
      if ( *((_DWORD *)v10 + 1) )
        _InterlockedExchange(v10 + 1, 0);
      v15 = CurrentIrql;
      goto LABEL_19;
    }
LABEL_11:
    v10 = (volatile __int32 *)(v3 + 1856);
    goto LABEL_12;
  }
  if ( v9 == 5 )
    goto LABEL_11;
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
  {
    v67 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v67 + 20) |= (-1 << (v15 + 1)) & 4;
  }
LABEL_19:
  *((_BYTE *)a1 + 68) = v15;
  v16 = (_BYTE *)*((_QWORD *)KeGetCurrentThread() + 23);
  if ( (v16[1848] & 7) != 2 )
    v8 = v16 + 1856;
  if ( (v16[1851] & 0x60) == 0x60 && v8[4] && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    sub_1402ED128(1);
    v71 = sub_1403126F0((unsigned __int64)a1);
    if ( !v71 || (unsigned int)sub_140580028(v71) )
    {
      sub_1402806E0(1, 0x11u);
      v20 = -1073741819;
      goto LABEL_87;
    }
    sub_1402806E0(1, 0x11u);
  }
  if ( (unsigned __int64)(*a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
  {
    v20 = -1073741819;
    goto LABEL_87;
  }
  v17 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v17 + 1240) && (unsigned int)sub_140201E8C(*a1, (__int64)(a1 + 7))
    || (v18 = *(_QWORD *)(v17 + 2552)) != 0 && (unsigned int)sub_1405A2E3C(v18, a1)
    || (v19 = sub_14031D740(a1), v20 = v19, v19 == -1073740748) )
  {
    v20 = 0;
    goto LABEL_87;
  }
  if ( v19 < 0 )
  {
LABEL_87:
    v55 = a1[9];
    v56 = a1[7];
    if ( v55 )
    {
      if ( *((_WORD *)a1 + 33) )
      {
        sub_14022FC80(a1 + 7);
        v55 = a1[9];
      }
      sub_14020D8D0(v56, v55);
      *((_BYTE *)a1 + 69) |= 2u;
      a1[9] = 0LL;
    }
    v57 = *((_BYTE *)a1 + 68);
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      sub_14030FA80(v56, v57);
    else
      sub_1402B0CE0(v56, v57);
    return v20;
  }
  v21 = a1[3];
  v22 = *(_QWORD *)v21;
  if ( v21 >= 0xFFFFF6FB7DBED000uLL
    && v21 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
  {
    if ( (v22 & 1) == 0 )
      goto LABEL_29;
    if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
    {
      v72 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v72 )
      {
        v73 = *(_QWORD *)(v72 + 8 * ((v21 >> 3) & 0x1FF));
        if ( (v73 & 0x20) != 0 )
          v22 |= 0x20uLL;
        if ( (v73 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
  }
  if ( (v22 & 1) != 0 )
  {
    v20 = sub_140291FC0((__int64)a1, v22);
    goto LABEL_87;
  }
LABEL_29:
  v23 = a1[1];
  if ( (v23 & 2) != 0 && (*(_DWORD *)(v3 + 1124) & 0x10) != 0 && *a1 < 0xFFFF800000000000uLL )
    a1[1] = v23 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v22 )
  {
    v89 = (v22 >> 5) & 0x1F;
    if ( (v22 & 0x400) == 0 )
      goto LABEL_64;
    v24 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL
      && v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v74 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v74 )
      {
        v75 = *(_QWORD *)(v74 + 8 * ((v21 >> 3) & 0x1FF));
        if ( (v75 & 0x20) != 0 )
          v24 |= 0x20uLL;
        if ( (v75 & 0x42) != 0 )
          v24 |= 0x42uLL;
      }
    }
    v25 = (v24 >> 5) & 0x1F;
    v91 = v25;
    if ( (v24 & 0x400) == 0 )
      goto LABEL_102;
    v26 = v24;
    if ( qword_140C50780 && (v24 & 0x10) == 0 )
      v26 = v24 & ~qword_140C50780;
    v27 = 0xFFFFFFFFLL;
    if ( HIDWORD(v26) != 0xFFFFFFFF )
    {
LABEL_102:
      v59 = v24;
      if ( qword_140C50780 && (v24 & 0x10) == 0 )
        v59 = v24 & ~qword_140C50780;
      v40 = v59 >> 16;
      LODWORD(v25) = 256;
      if ( (v24 & 8) != 0 )
        LODWORD(v25) = 1;
LABEL_61:
      v89 = v25;
      v90 = v40;
      if ( v40 )
      {
LABEL_64:
        if ( v89 == 256 )
        {
LABEL_74:
          a1[12] = v90;
          return 3221225494LL;
        }
        v47 = a1[1] & 2;
        v48 = a1[2];
        if ( (a1[10] & 0x40) == 0 || v21 <= 0xFFFFF6BFFFFFFF78uLL && v21 >= 0xFFFFF68000000000uLL )
        {
          v49 = *(_QWORD *)v21;
          if ( v21 >= 0xFFFFF6FB7DBED000uLL
            && v21 <= 0xFFFFF6FB7DBED7F8uLL
            && (dword_140D06880 & 0xC00000) != 0
            && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
          {
            if ( (v49 & 1) == 0 )
              goto LABEL_70;
            if ( (v49 & 0x20) == 0 || (v49 & 0x42) == 0 )
            {
              v80 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v80 )
              {
                v81 = *(_QWORD *)(v80 + 8 * ((v21 >> 3) & 0x1FF));
                if ( (v81 & 0x20) != 0 )
                  v49 |= 0x20uLL;
                if ( (v81 & 0x42) != 0 )
                  v49 |= 0x42uLL;
              }
            }
          }
          if ( (v49 & 1) == 0 )
          {
LABEL_70:
            v50 = v89;
            if ( (a1[1] & 2) != 0 )
              v47 = 1;
            if ( *((char *)qword_1400161F0 + (v89 & 7)) - v47 >= 10 )
            {
              if ( (v89 & 0xFFFFFFF8) != 0x10 || (v48 & 1) != 0 && *(_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                goto LABEL_74;
              if ( sub_140230B44(a1[2]) )
              {
                if ( (v49 & 0x800) == 0 || (v49 & 0x400) != 0 )
                {
                  v60 = v49 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v50 & 0xF));
                  if ( sub_140317A80(v21) )
                  {
                    if ( (unsigned int)sub_140229550() )
                    {
                      if ( !HIBYTE(word_140C51864) && (v60 & 1) != 0 )
                        v60 |= 0x8000000000000000uLL;
                      *(_QWORD *)v21 = v60;
                      sub_1402294F0(v21, v60);
                      goto LABEL_117;
                    }
                    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v60 & 1) != 0 )
                      v60 |= 0x8000000000000000uLL;
                  }
                  *(_QWORD *)v21 = v60;
LABEL_117:
                  sub_14027DA5C((__int64)(a1 + 7), 17, 0LL);
                  return sub_1406B42F4(*a1, 0LL);
                }
                v82 = sub_140315D60(v21, 0LL, 0);
                v83 = v50 & 0xF;
                v84 = sub_140317A10(v21);
                if ( v82 )
                  *(_QWORD *)(v82 + 16) = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v83);
                v85 = (32 * v83) | v84 & 0xFFFFFFFFFFFFFC1FuLL;
                if ( sub_140317A80(v21) )
                {
                  if ( (unsigned int)sub_140229550() )
                  {
                    if ( !HIBYTE(word_140C51864) && (v85 & 1) != 0 )
                      v85 |= 0x8000000000000000uLL;
                    *(_QWORD *)v21 = v85;
                    sub_1402294F0(v21, v85);
                    goto LABEL_246;
                  }
                  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v85 & 1) != 0 )
                    v85 |= 0x8000000000000000uLL;
                }
                *(_QWORD *)v21 = v85;
LABEL_246:
                if ( v82 )
                  _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_117;
              }
            }
            goto LABEL_122;
          }
          if ( (a1[1] & 2) == 0 || (v49 & 0xA00) != 0 )
            goto LABEL_74;
        }
LABEL_122:
        v63 = *a1;
        if ( *a1 < 0xFFFF800000000000uLL )
        {
          sub_1402ED128(1);
          v1 = sub_1403126F0(*a1);
          sub_1402806E0(1, 0x11u);
          v63 = *a1;
        }
        sub_14023659C(v63, (__int64)v1, a1[1], v3);
        a1[11] = v1;
        sub_14027DA5C((__int64)(a1 + 7), 17, 0LL);
        return 3221225477LL;
      }
      goto LABEL_101;
    }
    v28 = (__int64)(v21 << 25) >> 16;
    if ( v28 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
      {
        v29 = v28 & 0x7FFFFFFFF000LL;
        if ( (v28 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        {
          v40 = qword_140C50668;
          goto LABEL_61;
        }
        if ( v29 == qword_140C50678 && v29 )
        {
          v40 = qword_140C50670;
          goto LABEL_61;
        }
      }
      v30 = *((_QWORD *)KeGetCurrentThread() + 23);
      v31 = (_DWORD *)(*(_QWORD *)(v30 + 1680) + 284LL);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        LOBYTE(v27) = -1;
        sub_140461B20(*(_QWORD *)(v30 + 1680) + 284LL, v27);
      }
      else
      {
        v32 = KeGetCurrentPrcb();
        v33 = *((_QWORD *)v32 + 4375);
        if ( v33 )
        {
          if ( *((_BYTE *)v32 + 32) <= 1u )
          {
            v76 = *(_DWORD *)(v33 + 24);
            *(_DWORD *)(v33 + 24) = v76 + 1;
            if ( v76 == -1 )
              sub_140418E4C(v32);
          }
        }
        _m_prefetchw(v31);
        v34 = *v31 & 0x7FFFFFFF;
        if ( v34 != _InterlockedCompareExchange(v31, v34 + 1, v34) )
        {
          v62 = *((_QWORD *)v32 + 4375);
          if ( v62 )
          {
            if ( *((_BYTE *)v32 + 32) <= 1u )
            {
              v77 = *(_DWORD *)(v62 + 24) - 1;
              *(_DWORD *)(v62 + 24) = v77;
              if ( !v77 )
                sub_140418E4C(v32);
            }
          }
          LOBYTE(v27) = -1;
          sub_140366A20(v31, v27);
        }
        LODWORD(v25) = v91;
      }
      v35 = *((_QWORD *)KeGetCurrentThread() + 23);
      v36 = *(_QWORD *)(v35 + 2016);
      if ( v36 )
      {
        v37 = v28 >> 12;
        if ( v28 >> 12 >= (*(unsigned int *)(v36 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32))
          && v37 <= (*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) )
        {
LABEL_50:
          v86[0] = 0LL;
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
          {
            v38 = v28 & 0x7FFFFFFFF000LL;
            if ( v38 == 2147352576 )
            {
              v40 = qword_140C50668;
              goto LABEL_58;
            }
            if ( v38 == qword_140C50678 && v38 )
            {
              v40 = qword_140C50670;
LABEL_58:
              v41 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
              if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
              {
                sub_14063D8E0(v41 + 284, retaddr);
              }
              else
              {
                _InterlockedAnd((volatile signed __int32 *)(v41 + 284), 0xBFFFFFFF);
                _InterlockedDecrement((volatile signed __int32 *)(v41 + 284));
              }
              v42 = KeGetCurrentPrcb();
              v43 = *((_QWORD *)v42 + 4375);
              if ( v43 )
              {
                if ( *((_BYTE *)v42 + 32) <= 1u )
                {
                  v79 = *(_DWORD *)(v43 + 24) - 1;
                  *(_DWORD *)(v43 + 24) = v79;
                  if ( !v79 )
                    sub_140418E4C(v42);
                }
              }
              goto LABEL_61;
            }
          }
          if ( (*(_DWORD *)(v36 + 48) & 0x70) == 0x20
            && (*(_DWORD *)(v36 + 64) & 0x10000000) != 0
            && (v78 = sub_1402EE0E0(v36, 32), v78 && *(struct _KTHREAD **)(v78 + 8) != KeGetCurrentThread()) )
          {
            v40 = 0LL;
          }
          else
          {
            v39 = *(_DWORD *)(v36 + 48);
            if ( (v39 & 4) != 0 )
            {
              v40 = 0LL;
            }
            else if ( (v39 & 0x200000) != 0 )
            {
              if ( (v39 & 0x70) != 0x10 && (v39 & 0x70) != 0x30 )
                sub_14030FBE0(v36);
              v40 = 0LL;
            }
            else if ( (*(_DWORD *)(v36 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v36 + 48) & 0x70) == 0x50 )
            {
              v40 = sub_140319600(v36, v37, 4, v86);
            }
            else
            {
              v40 = 0LL;
            }
          }
          goto LABEL_58;
        }
        v36 = *(_QWORD *)(v35 + 2008);
        while ( v36 )
        {
          if ( v37 > (*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) )
          {
            v36 = *(_QWORD *)(v36 + 8);
          }
          else
          {
            if ( v37 >= (*(unsigned int *)(v36 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32)) )
            {
              *(_QWORD *)(v35 + 2016) = v36;
              goto LABEL_50;
            }
            v36 = *(_QWORD *)v36;
          }
        }
      }
      sub_1402806E0(1, 0x11u);
    }
LABEL_101:
    v20 = -1073741819;
    goto LABEL_87;
  }
  v88 = 0;
  v44 = sub_1402AD610((__int64)a1, &v88, &v89, &v90);
  v45 = v88;
  v46 = v44;
  if ( !v88 )
    goto LABEL_64;
  v52 = a1[9];
  v53 = a1[7];
  if ( v52 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      sub_14022FC80(a1 + 7);
      v52 = a1[9];
    }
    sub_14020D8D0(v53, v52);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v54 = *((_BYTE *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    sub_14030FA80(v53, v54);
  else
    sub_1402B0CE0(v53, v54);
  if ( v45 == 2 )
    return (unsigned int)sub_1406B42F4(*a1, 1LL);
  return v46;
}
