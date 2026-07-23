/*
 * XREFs of sub_14031FD60 @ 0x14031FD60
 * Callers:
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402E7400 @ 0x1402E7400 (sub_1402E7400.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 */

__int64 __fastcall sub_14031FD60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  int v9; // r10d
  __int64 v10; // rcx
  char v11; // dl
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  __int64 **v16; // rsi
  unsigned __int64 v17; // r8
  int v18; // ebx
  unsigned __int64 v19; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r13
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  int v35; // r13d
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // r15
  __int64 v40; // rbx
  int v41; // r8d
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+30h] [rbp-59h]
  __int64 v53; // [rsp+30h] [rbp-59h]
  __int64 **v54; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-49h] BYREF
  int v56; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v57[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-29h]
  unsigned __int64 v59; // [rsp+68h] [rbp-21h]
  int v60; // [rsp+70h] [rbp-19h]
  int v61; // [rsp+74h] [rbp-15h]
  __int64 v62; // [rsp+78h] [rbp-11h]
  int v63; // [rsp+80h] [rbp-9h]
  int v64; // [rsp+84h] [rbp-5h]
  unsigned __int64 v65; // [rsp+88h] [rbp-1h]
  __int64 **v66; // [rsp+90h] [rbp+7h]
  __int64 v67; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v68; // [rsp+A0h] [rbp+17h]
  __int64 v69; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v70; // [rsp+100h] [rbp+77h]
  __int64 v71; // [rsp+108h] [rbp+7Fh]

  v71 = a4;
  v70 = a3;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0LL;
  v62 = 0LL;
  v64 = 0;
  v57[0] = 0LL;
  v9 = 0;
  v67 = 0LL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    v9 = 64;
    LODWORD(v57[0]) = 64;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10;
  v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = v11 & 1;
  if ( v13 )
  {
    switch ( *(_BYTE *)v12 )
    {
      case 2:
        v9 |= 1u;
        LODWORD(v57[0]) = v9;
        break;
      case 1:
        v9 |= 2u;
        LODWORD(v57[0]) = v9;
        break;
      case 5:
        v9 |= 8u;
        LODWORD(v57[0]) = v9;
        break;
    }
    if ( *(_BYTE *)v12 == 4 )
      goto LABEL_16;
  }
  if ( (v9 & 0xB) != 0 )
  {
LABEL_16:
    v14 = v12;
    if ( v13 && *(_BYTE *)v12 == 4 )
      v67 = *(_QWORD *)(v12 + 48);
    if ( (v9 & 2) != 0 && (*(_DWORD *)(v12 + 80) & 0x4000) != 0 )
    {
      v9 |= 4u;
      LODWORD(v57[0]) = v9;
    }
    if ( (v9 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
    {
      v9 |= 0x10u;
      LODWORD(v57[0]) = v9;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v65 = v14;
  if ( (v9 & 6) != 2 )
  {
    if ( (v9 & 8) != 0 && (*(_DWORD *)(v14 + 56) & 8) != 0 )
    {
      if ( a3 )
      {
        LOBYTE(v13) = 17;
        sub_140334790(a3, v13);
      }
      return 3221225495LL;
    }
    v15 = *(_QWORD *)a1;
    v16 = 0LL;
    v55 = *((_QWORD *)KeGetCurrentThread() + 23);
    v52 = v15;
    v54 = 0LL;
    v17 = 0xFFFFF68000000000uLL;
    if ( v13 && (*(_BYTE *)v12 == 7 || *(_BYTE *)v12 == 4 || *(_BYTE *)v12 == 2 || *(_BYTE *)v12 == 8) )
    {
      v18 = *(_DWORD *)(v12 + 40);
      if ( v18 )
        goto LABEL_73;
    }
    else
    {
      v18 = 0;
    }
    v19 = 0LL;
    if ( v13 )
      v19 = v12;
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
      goto LABEL_34;
    CurrentThread = KeGetCurrentThread();
    v21 = *((_QWORD *)CurrentThread + 23);
    v69 = v21;
    v22 = *(_QWORD *)(v21 + 1680);
    if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v16 = v54;
LABEL_71:
      if ( v19 && *((_BYTE *)CurrentThread + 586) == 1 )
        v18 = *(unsigned __int16 *)(v21 + 2LL * *((unsigned __int16 *)CurrentThread + 292) + 772) + 1;
      if ( v18 )
        goto LABEL_73;
LABEL_34:
      v63 = v18;
      v58 = v15;
      v57[1] = a1;
      if ( !v16 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        v17 = v55;
        v23 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v55 + 1838));
        if ( *(_DWORD *)(v23 + 1176) )
        {
          if ( *(_QWORD *)(v23 + 1296) == v55 )
          {
            sub_1402ED128(1);
            v54 = sub_1403126F0(v52);
            v16 = v54;
            sub_1402806E0(1, 0x11u);
            v15 = v52;
          }
        }
      }
      v24 = *(_QWORD *)a2;
      v66 = v16;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
      {
        if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v17 )
          {
            v48 = *(_QWORD *)(v17 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v48 & 0x20) != 0 )
              v24 |= 0x20uLL;
            if ( (v48 & 0x42) != 0 )
              v24 |= 0x42uLL;
          }
        }
        v16 = v54;
      }
      v25 = v70;
      if ( !v70 )
      {
        v26 = *(_QWORD *)(a1 + 16);
        v27 = (v24 >> 5) & 0x1F;
        if ( (v26 & 1) != 0 && (v26 &= ~1uLL, *(_BYTE *)v26 == 4) || (v24 & 0x400) != 0 )
          LODWORD(v27) = 4;
        v60 = v27;
        v61 = v27;
        v59 = 0LL;
        return sub_1403219B0(v57, v26);
      }
      v29 = v65;
      v59 = a2;
      v55 = 1LL;
      LODWORD(v69) = 24;
      if ( (v57[0] & 0x15) != 0 && (v57[0] & 0x40) != 0 )
      {
        v45 = sub_1403536F0(v15, &v69, &v54);
        v16 = v54;
        v47 = v45;
        if ( v54 )
          sub_1402806E0(1, 0x11u);
      }
      else
      {
        if ( !v16
          || (v49 = *((unsigned int *)v16 + 12), (v49 & 0x200000) != 0)
          || qword_1400161D0[(v49 >> 19) & 3] != 16 )
        {
          v60 = 24;
          v61 = 24;
LABEL_53:
          v30 = sub_14033C5F0(v57, &v55, v17);
          v34 = v70;
          v35 = v30;
          v56 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v56, v31, v32, v33);
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          *(_BYTE *)(v34 + 34) &= ~0x20u;
          if ( (unsigned int)sub_1403377E0(v34) )
            sub_140338500(v34, 0xAAAAAAAAAAAAAAABuLL * ((v34 + 0x220000000000LL) >> 4));
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v35 >= 0 && (v57[0] & 4) == 0 )
          {
            v36 = v58;
            v37 = v52 - v58;
            v53 = 0LL;
            v38 = a2 - 8LL * (unsigned int)(v37 >> 12);
            v39 = *(_QWORD *)a1;
            v68 = *(_QWORD *)a1;
            if ( (v57[0] & 8) != 0 )
              v53 = v29;
            if ( v55 )
            {
              do
              {
                v40 = *(_QWORD *)v38;
                if ( sub_140317A80(v38)
                  && (dword_140D06880 & 0xC00000) != 0
                  && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
                  && (v40 & 1) != 0
                  && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
                {
                  v50 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                  if ( v50 )
                  {
                    v51 = *(_QWORD *)(v50 + 8 * ((v38 >> 3) & 0x1FF));
                    if ( (v51 & 0x20) != 0 )
                      LODWORD(v40) = v40 | 0x20;
                    if ( (v51 & 0x42) != 0 )
                      LODWORD(v40) = v40 | 0x42;
                  }
                }
                v41 = v71;
                *(_QWORD *)a1 = v36;
                v42 = sub_1403203D0(a1, v40, v41, 1, v53);
                v36 += 4096LL;
                if ( !v5 && v42 < 0 )
                  v35 = v42;
                __incgsdword(0x2E9Cu);
                ++v5;
                v38 += 8LL;
              }
              while ( v5 < v55 );
              v39 = v68;
            }
            *(_QWORD *)a1 = v39;
          }
          return (unsigned int)v35;
        }
        v47 = sub_140353858(v15, v16, v17, &v69);
      }
      v61 = v69;
      v60 = v69;
      if ( (v57[0] & 4) != 0 && (unsigned int)v69 >> 3 != 1 && ((unsigned int)v69 >> 3 != 3 || (v69 & 7) == 0) )
      {
        LOBYTE(v46) = 17;
        sub_140334790(v25, v46);
        return 0LL;
      }
      if ( v47 && v16 && (_DWORD)v69 != 24 && (v69 & 0xFFFFFFF8) != 0x10 )
        v55 = sub_1402E7400((__int64)v57);
      goto LABEL_53;
    }
    if ( !v19 && !*(_QWORD *)(v22 + 408) && !*(_QWORD *)(v22 + 416) && !*(_BYTE *)(v22 + 340) )
    {
      v16 = v54;
      goto LABEL_34;
    }
    sub_1402ED128(1);
    v16 = sub_1403126F0(*(_QWORD *)a1);
    sub_1402806E0(1, 0x11u);
    v54 = v16;
    if ( !v16
      || (v43 = *((_DWORD *)v16 + 12), (v18 = (v43 >> 12) & 0x7F) == 0)
      && ((v43 & 0x200000) != 0 || (v44 = *v16[9]) == 0 || (v18 = (*(_DWORD *)(v44 + 56) >> 20) & 0x7F) == 0) )
    {
      v15 = v52;
      v21 = v69;
      goto LABEL_71;
    }
LABEL_73:
    *(_DWORD *)(a1 + 80) |= 0x20000u;
    v15 = v52;
    goto LABEL_34;
  }
  if ( a3 )
  {
    LOBYTE(v13) = 17;
    sub_140334790(a3, v13);
  }
  return 0LL;
}
