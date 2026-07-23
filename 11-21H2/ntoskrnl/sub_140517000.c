/*
 * XREFs of sub_140517000 @ 0x140517000
 * Callers:
 *     sub_140511B00 @ 0x140511B00 (sub_140511B00.c)
 * Callees:
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140390C08 @ 0x140390C08 (sub_140390C08.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140504158 @ 0x140504158 (sub_140504158.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 *     sub_140519514 @ 0x140519514 (sub_140519514.c)
 *     sub_140519744 @ 0x140519744 (sub_140519744.c)
 */

__int64 __fastcall sub_140517000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        ULONG *a6,
        char a7,
        _DWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  bool v13; // zf
  __int64 v15; // rsi
  ULONG *v16; // rax
  _DWORD *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // r14d
  unsigned __int64 v24; // r12
  unsigned int v25; // eax
  ULONG *v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG v29; // eax
  __int64 v30; // rax
  unsigned int v31; // r12d
  int v32; // ecx
  __int64 v33; // r10
  unsigned int v34; // r13d
  __int64 v35; // rdx
  __int64 *v36; // r11
  unsigned int v37; // edx
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // edx
  __int16 v44; // bx
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // ebx
  __int64 v48; // rcx
  ULONG *v49; // rax
  char v50; // bl
  PMDL v51; // rsi
  struct _MDL *Next; // rbx
  int v53; // [rsp+40h] [rbp-79h]
  unsigned int v54; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-71h]
  unsigned int v56; // [rsp+4Ch] [rbp-6Dh]
  __int64 v57; // [rsp+50h] [rbp-69h]
  __int64 *v58; // [rsp+58h] [rbp-61h]
  unsigned __int64 v59; // [rsp+60h] [rbp-59h]
  __int64 v60; // [rsp+68h] [rbp-51h]
  PMDL Mdl; // [rsp+70h] [rbp-49h] BYREF
  __int128 v62; // [rsp+78h] [rbp-41h]
  unsigned __int64 v63; // [rsp+88h] [rbp-31h]
  __int64 v64; // [rsp+90h] [rbp-29h]
  __int64 v65; // [rsp+98h] [rbp-21h]
  __int128 v66; // [rsp+A0h] [rbp-19h]
  __int64 v67; // [rsp+B0h] [rbp-9h]
  char v68; // [rsp+100h] [rbp+47h] BYREF
  __int64 v69; // [rsp+110h] [rbp+57h]

  v69 = a3;
  v11 = 0LL;
  v68 = 0;
  Mdl = 0LL;
  v67 = 0LL;
  v13 = *(_DWORD *)(a1 + 512) == 3;
  LODWORD(v63) = 0;
  v15 = a2;
  v58 = 0LL;
  v66 = 0LL;
  v62 = 0LL;
  if ( v13 && !a3 )
    return 3221225485LL;
  v64 = *(_QWORD *)(a1 + 504);
  v16 = a6;
  *(_BYTE *)(a1 + 516) = 1;
  v56 = 0;
  if ( !*v16 )
  {
    v17 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v17 + 1) = 0LL;
      return 0LL;
    }
    if ( !*(_BYTE *)(a1 + 433) )
      return 0LL;
    return 3221225485LL;
  }
  if ( KeGetCurrentIrql() != 15 )
  {
    v19 = *(_QWORD *)(a1 + 352);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 12) & 1) != 0 )
        return 3221225760LL;
    }
  }
  if ( !a2 )
    return 3221225485LL;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v15 + 40);
    if ( a4 < v20 )
      break;
    v15 = *(_QWORD *)v15;
    a4 -= v20;
    if ( !v15 )
      return 3221225485LL;
  }
  v21 = (__int64)a8;
  if ( a8 )
  {
    v22 = a9;
    if ( a9 >= 0x28 )
      goto LABEL_21;
    return 3221225485LL;
  }
  if ( *(_BYTE *)(a1 + 433) )
    return 3221225485LL;
  v22 = *(_DWORD *)(a1 + 620);
  v21 = a1 + 624;
LABEL_21:
  v23 = 0;
  *(_QWORD *)(v21 + 8) = 0LL;
  v24 = ((unsigned __int64)v22 - 16) / 0x18;
  v59 = v24;
  if ( !*(_BYTE *)(a1 + 433) )
  {
    v25 = sub_140519744(*(_QWORD *)(a1 + 360), a1, (unsigned int)v24);
    if ( v25 < (unsigned int)v24 )
      v24 = v25;
    v59 = v24;
  }
  v26 = a6;
  sub_140503D4C(a1, (__int64 *)v15, a4, *a6, &v68, &Mdl);
  v13 = *(_DWORD *)(a1 + 512) == 3;
  v60 = 0LL;
  if ( v13 )
  {
    v29 = *(_DWORD *)(a1 + 244);
    if ( *v26 > v29 )
      *v26 = v29;
    v30 = v69;
    v58 = *(__int64 **)(v69 + 24);
    v11 = *v58;
    *(_QWORD *)(v69 + 40) = 0LL;
    *(_QWORD *)(v30 + 32) = 0LL;
  }
  else
  {
    v30 = v69;
  }
  v31 = *v26;
  v32 = 0;
  v53 = 0;
  if ( v30 )
  {
    LODWORD(v62) = 1;
    while ( v31 )
    {
      v41 = v31;
      v27 = a4 + *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
      if ( *(_DWORD *)(v15 + 40) - (int)a4 <= v31 )
        v41 = *(_DWORD *)(v15 + 40) - a4;
      v31 -= v41;
      while ( 1 )
      {
        v55 = v41;
        v57 = v27;
        if ( !v41 )
          break;
        if ( v23 >= (unsigned int)v59 )
          goto LABEL_73;
        v54 = v41;
        v42 = sub_140390C08(a1, v15, v69, v27, &v54, a7, v68);
        v43 = v54;
        v44 = v42;
        if ( !v54 )
        {
          v32 = v53;
LABEL_73:
          v31 = 0;
          break;
        }
        v28 = -4096LL;
        v65 = v54;
        *((_QWORD *)&v62 + 1) = v42 & 0xFFFFFFFFFFFFF000uLL;
        v13 = *(_DWORD *)(a1 + 512) == 3;
        v63 = ((v42 & 0xFFF) + v54 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
        if ( v13 )
        {
          if ( (((unsigned __int16)v42 | (unsigned __int16)v11) & 0xFFF) != 0 || !v60 )
          {
            if ( (v11 & 0xFFF) != 0 )
              v11 = v11 + 4096 - ((v11 + 4096) & 0xFFF);
            v45 = v21 + 8 * (v23 + 2 * (v23 + 1LL));
            v60 = v45;
            *(_QWORD *)v45 = v11 + (v57 & 0xFFF);
            *(_QWORD *)(v45 + 16) = v15;
            *(_DWORD *)(v45 + 8) = v43;
          }
          else
          {
            --v23;
            *(_DWORD *)(v60 + 8) += v54;
          }
          v46 = sub_14042A5E0(v58, *(_QWORD *)(v69 + 40));
          v47 = v54 + (v44 & 0xFFF);
          v56 = v46;
          *(_QWORD *)(v69 + 40) += v63;
          v11 += v47;
        }
        else
        {
          v48 = 3LL * v23;
          *(_QWORD *)(v21 + 8 * v48 + 32) = v15;
          *(_DWORD *)(v21 + 8 * v48 + 24) = v43;
          *(_QWORD *)(v21 + 8 * v48 + 16) = v42;
        }
        if ( *(_DWORD *)(a1 + 512) == 1 )
          v56 = sub_14042A5E0(*(_QWORD *)(v64 + 40), 3LL);
        v32 = v54 + v53;
        v27 = v65 + v57;
        v41 = v55 - v54;
        v53 += v54;
        ++v23;
      }
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
      if ( !v15 )
        goto LABEL_75;
    }
  }
  else
  {
    v33 = 0LL;
    v57 = 0LL;
    do
    {
      if ( !v31 )
        break;
      v34 = v31;
      v35 = *(unsigned int *)(v15 + 44);
      if ( *(_DWORD *)(v15 + 40) - (int)a4 <= v31 )
        v34 = *(_DWORD *)(v15 + 40) - a4;
      v31 -= v34;
      v28 = ((_WORD)v35 + (_WORD)a4) & 0xFFF;
      v55 = ((_WORD)v35 + (_WORD)a4) & 0xFFF;
      v13 = *(_BYTE *)(a1 + 437) == 0;
      v36 = (__int64 *)(v15 + 8 * (((unsigned __int64)(unsigned int)(v35 + a4) >> 12) + 6));
      v58 = v36;
      if ( v13 )
      {
        sub_140513310(v32, v15, a4 + v35 + *(_QWORD *)(v15 + 32), v34, a7, v68);
        v32 = v53;
        v28 = v55;
        v33 = v57;
        v36 = v58;
      }
      for ( ; v34; v34 -= v37 )
      {
        v37 = v34;
        v27 = (unsigned int)v28 + (*v36 << 12);
        v38 = 4096 - v28;
        v28 = 0LL;
        if ( v38 <= v34 )
          v37 = v38;
        if ( v27 == v33 + 1 && ((v27 ^ v33) & 0x100000000LL) == 0 && v23 )
        {
          *(_DWORD *)(v21 + 24 * (v23 - 1 + 1LL)) += v37;
        }
        else
        {
          if ( v23 >= (unsigned int)v59 )
          {
            v31 = 0;
            break;
          }
          v39 = v23++;
          v40 = 3 * v39;
          *(_QWORD *)(v21 + 8 * v40 + 16) = v27;
          *(_DWORD *)(v21 + 8 * v40 + 24) = v37;
        }
        v32 = v37 + v53;
        v33 = v37 + v27 - 1;
        v53 += v37;
        ++v36;
        v57 = v33;
      }
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
    }
    while ( v15 );
LABEL_75:
    if ( !v15 && v31 && v23 )
    {
      *(_DWORD *)(v21 + 24 * (v23 - 1 + 1LL)) += v31;
      v32 = v31 + v53;
    }
  }
  v49 = a6;
  *(_DWORD *)v21 = v23;
  *v49 = v32;
  if ( v69 )
    *(_DWORD *)(v69 + 16) = v32;
  v50 = a7;
  if ( v68 )
  {
    v51 = Mdl;
    sub_140504158(Mdl, a7 == 0, v27, v28);
    if ( v51 )
    {
      do
      {
        Next = v51->Next;
        IoFreeMdl(v51);
        v51 = Next;
      }
      while ( Next );
      v50 = a7;
    }
  }
  if ( *(_BYTE *)(a1 + 433) )
    return v56;
  else
    return sub_140519514(*(_QWORD *)(a1 + 360), a1, a10, a11, v21, *(_QWORD *)(a1 + 448) + a5, v50);
}
