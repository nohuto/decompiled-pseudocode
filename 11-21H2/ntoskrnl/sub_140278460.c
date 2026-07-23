/*
 * XREFs of sub_140278460 @ 0x140278460
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14045CC5A @ 0x14045CC5A (sub_14045CC5A.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 *     sub_14096B768 @ 0x14096B768 (sub_14096B768.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_14025408C @ 0x14025408C (sub_14025408C.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     sub_14027924C @ 0x14027924C (sub_14027924C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045DB90 @ 0x14045DB90 (sub_14045DB90.c)
 */

__int64 __fastcall sub_140278460(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  int v5; // ebp
  _DWORD *v9; // r13
  __int16 v10; // dx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  int v16; // r11d
  int v17; // r8d
  __int64 v18; // rdi
  char v19; // cl
  __int64 v20; // r8
  unsigned __int64 v21; // rbp
  __int64 v22; // r9
  __int64 *v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v30; // rcx
  __int64 v31; // r9
  PVOID *v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int16 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  bool v42; // zf
  unsigned __int64 v43; // rcx
  int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rbx
  unsigned __int64 v51; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int16 v60; // [rsp+70h] [rbp+8h]
  int v61; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp+18h]
  int v63; // [rsp+88h] [rbp+20h]

  v63 = a4;
  v5 = a4;
  if ( (dword_140C29CB0 & 2) != 0 )
    memset(&dword_140C29CC0, 0, 0x2E4uLL);
  v9 = a5;
  v10 = *(_WORD *)a1;
  v11 = -1LL;
  v12 = a2 + 48 * a3;
  v60 = *(_WORD *)a1;
  *a5 = 0;
  v62 = 0LL;
  if ( a2 >= v12 )
    return 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    v14 = 0xFFFFDE0000000000uLL;
    v15 = 0xAAAAAAAAAAAAAAABuLL;
    if ( ((v13 >> 43) & 0x3FF) != v10 )
    {
      v55 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      v56 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      v57 = sub_14027924C(&StartContext, v55);
      if ( v57 != -1 )
      {
        v58 = qword_14001C780[v57];
        v55 &= ~(v58 - 1);
        v59 = sub_14025408C((__int64)&StartContext, v55, v58);
        if ( v59 >= v55 )
        {
          ++dword_140C29EC4;
        }
        else
        {
          ++dword_140C29EC8;
          v55 = v59;
        }
      }
      ++dword_140C29EA4;
      return v56 - v55;
    }
    v16 = *(_BYTE *)(a2 + 34) & 7;
    v17 = -1;
    LODWORD(a5) = v16;
    if ( (v13 & 0x10000000000LL) != 0 )
    {
      v61 = 0;
      v44 = sub_140235D34(a2, (int *)&a5, &v61);
      v17 = v44;
      if ( v44 == -1 )
        goto LABEL_36;
      v45 = qword_14001C780[v44];
      v14 = 0xFFFFDE0000000000uLL;
      v16 = (int)a5;
      v18 = a2 + 0x220000000000LL;
      v15 = 0xAAAAAAAAAAAAAAABuLL;
      if ( (_DWORD)a5 == 6 )
      {
        v46 = ~(v45 - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        v47 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
        v48 = sub_14025408C(a1, v46, v45);
        if ( v48 >= v46 )
        {
          ++dword_140C29EA8;
        }
        else
        {
          ++dword_140C29EAC;
          v46 = v48;
        }
        return v47 - v46;
      }
      v5 = v63;
    }
    else
    {
      v18 = a2 + 0x220000000000LL;
    }
    if ( v16 != 5 )
      break;
    if ( sub_140273354(a2) )
    {
      ++dword_140C29EB8;
      return v31 * ((__int64)(v12 - a2) >> 4);
    }
    if ( sub_140277C50(v30) )
    {
      ++dword_140C29F30;
LABEL_100:
      v53 = 3 * ((v15 * (v18 >> 4)) & 0xFFFFFFFFFFFFFE00uLL);
LABEL_101:
      v39 = v12 - 16 * v53 - v14;
      return v15 * (v39 >> 4);
    }
    if ( v17 != -1 )
      goto LABEL_49;
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v32 = &qword_140C532D8;
      v33 = v15 * (v18 >> 4);
      v34 = 0;
      while ( (PVOID)v33 != *v32 )
      {
        ++v34;
        ++v32;
        if ( v34 >= 4 )
        {
          v35 = 0;
          v36 = &qword_140C532B8;
          while ( v33 != *v36 )
          {
            ++v35;
            ++v36;
            if ( v35 >= 4 )
              goto LABEL_36;
          }
          break;
        }
      }
      ++dword_140C29F60;
      return v15 * ((__int64)(v12 - a2) >> 4);
    }
LABEL_36:
    a2 += 48LL;
    if ( a2 >= v12 )
      return 0LL;
    v10 = v60;
  }
  if ( v16 <= 1 )
  {
    if ( v17 == -1 )
      goto LABEL_36;
LABEL_49:
    v40 = v15 * (v18 >> 4);
    v41 = qword_14001C780[v17];
    if ( v41 >= 0x200 )
      v42 = (v5 & 0x2000000) == 0;
    else
      v42 = (v5 & 0x1000000) == 0;
    if ( !v42 )
    {
      ++dword_140C29F44;
      v53 = 3 * (v40 & -(__int64)v41);
      goto LABEL_101;
    }
    v43 = v41 - (v40 & (v41 - 1));
    if ( v43 > v15 * ((__int64)(v12 - a2) >> 4) )
      v43 = v15 * ((__int64)(v12 - a2) >> 4);
    a2 = 48 * v43 + a2 - 48;
    goto LABEL_36;
  }
  v19 = *(_BYTE *)(a2 + 35);
  v20 = 0LL;
  LODWORD(a5) = 0;
  if ( v19 < 0 )
  {
    if ( v16 == 2 )
    {
      if ( *(_WORD *)(a2 + 32) )
        goto LABEL_72;
      goto LABEL_36;
    }
    if ( v16 != 6
      || (*(_BYTE *)(a2 + 34) & 0x10) != 0
      || *(_WORD *)(a2 + 32) != 1
      || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
      || (v19 & 8) != 0
      || (*(_BYTE *)a2 & 1) == 0 )
    {
LABEL_72:
      ++dword_140C29F40;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    goto LABEL_22;
  }
  if ( v16 <= 4 )
  {
    if ( sub_140277C50(a2) )
    {
      ++dword_140C29F34;
      goto LABEL_100;
    }
    if ( *(_WORD *)(a2 + 32) != v38
      || (v5 & 0x4000000) == 0 && (v37 & *(_QWORD *)(a2 + 40)) == 0 && *(__int64 *)(a2 + 8) > 0 )
    {
      ++dword_140C29EBC;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    goto LABEL_36;
  }
  v21 = 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4);
  if ( (v21 & 0xFFFFFFFFFFFFFE00uLL) == v11
    || (v11 = (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4)) & 0xFFFFFFFFFFFFFE00uLL, !*(_BYTE *)(a1 + 15590)) )
  {
LABEL_18:
    v20 = 2LL;
    if ( v16 != 6 )
    {
      ++dword_140C29EC0;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2 )
    {
      v5 = v63;
      if ( (v63 & 8) != 0 )
      {
        ++dword_140C29ED0;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      v49 = sub_14024A35C((_QWORD *)a2);
      if ( v49 == -32LL )
      {
        ++dword_140C29ECC;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      if ( !v49 )
        *v9 = 1;
      goto LABEL_36;
    }
    if ( (v63 & 0x800000) == 0 )
      goto LABEL_21;
    if ( *(__int64 *)(a2 + 40) < 0 )
    {
      v5 = v63;
      if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (v63 & 0x8000000) == 0 )
      {
        ++dword_140C29ED4;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      goto LABEL_22;
    }
    if ( (v63 & 0x8000000) == 0 || a3 == 16 )
    {
      v51 = 16LL;
    }
    else
    {
      if ( a3 != 512 )
      {
        v62 = 0LL;
        goto LABEL_21;
      }
      v51 = 512LL;
    }
    v62 = v51;
    if ( v21 == (v21 & ~(v51 - 1)) )
    {
      v5 = v63;
      if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) >= v51 )
        LODWORD(a5) = 1;
      goto LABEL_22;
    }
LABEL_21:
    v5 = v63;
LABEL_22:
    v25 = sub_140278960(a1, a2, v20);
    if ( v25 )
    {
      v26 = ~(v25 - 1) & (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
      v27 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      if ( v25 >= 0x200 )
      {
        v54 = sub_14025408C(a1, v26, v25);
        if ( v54 >= v26 )
        {
          ++dword_140C29EB4;
        }
        else
        {
          ++dword_140C29EB0;
          v26 = v54;
        }
      }
      return v27 - v26;
    }
    if ( (v5 & 8) != 0 )
    {
      ++dword_140C29ED0;
      v50 = v12 - a2;
      return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
    }
    if ( (_DWORD)a5 )
    {
      if ( (unsigned int)sub_14045DB90(a2, v62, 0LL) )
      {
        ++dword_140C29F74;
        v50 = v12 - a2;
        return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
      }
    }
    goto LABEL_36;
  }
  v22 = 0LL;
  v23 = qword_14001C780;
  v24 = a1 + 15816;
  while ( !*(_QWORD *)v24 || !_bittest64(*(const signed __int64 **)(v24 + 8), v21 / *v23) )
  {
    v22 = (unsigned int)(v22 + 1);
    v24 += 16LL;
    ++v23;
    if ( (unsigned int)v22 >= 2 )
    {
      v15 = 0xAAAAAAAAAAAAAAABuLL;
      goto LABEL_18;
    }
  }
  ++dword_140C29EC4;
  v50 = v12 - 48 * (v21 & -qword_14001C780[v22]) + 0x220000000000LL;
  return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
}
