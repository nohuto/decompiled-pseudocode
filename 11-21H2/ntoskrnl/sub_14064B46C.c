/*
 * XREFs of sub_14064B46C @ 0x14064B46C
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14064C418 @ 0x14064C418 (sub_14064C418.c)
 *     sub_14064C4AC @ 0x14064C4AC (sub_14064C4AC.c)
 *     sub_14064C900 @ 0x14064C900 (sub_14064C900.c)
 *     sub_1406EB810 @ 0x1406EB810 (sub_1406EB810.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14064B46C(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r10d
  __int64 v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // ebx
  char v14; // di
  unsigned int v15; // ecx
  __int64 v16; // r13
  char v17; // r12
  char *v18; // r14
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char v24; // dl
  __int64 *v25; // r14
  unsigned int v26; // r12d
  unsigned int v27; // ecx
  unsigned __int8 v28; // dl
  unsigned int v29; // eax
  _DWORD *v30; // r8
  unsigned __int16 *v31; // rdi
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // r9
  int *v36; // r12
  int v37; // r14d
  __int64 v38; // rdi
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // al
  __int64 Pool2; // rax
  unsigned int v45; // r12d
  unsigned __int16 *v46; // r14
  const void *v47; // rdx
  PVOID *v48; // rbx
  __int64 v49; // rdi
  int v51; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+62h] [rbp-9Eh]
  char v54; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  int v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  _DWORD *v59; // [rsp+80h] [rbp-80h]
  _DWORD *v60; // [rsp+88h] [rbp-78h]
  char *v61; // [rsp+90h] [rbp-70h]
  _DWORD *v62; // [rsp+98h] [rbp-68h]
  __int128 v63; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  _DWORD *v68; // [rsp+D8h] [rbp-28h]
  char *v69; // [rsp+E0h] [rbp-20h]
  _OWORD v70[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v58 = a1;
  v11 = (__int64)a8;
  v69 = a9;
  v12 = 0;
  v13 = 0;
  v67 = a7;
  v14 = 1;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v59 = a3;
  v57 = a2;
  v68 = a8;
  v56 = 0;
  v54 = 0;
  v53 = 0;
  v61 = 0LL;
  v63 = 0LL;
  P = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      sub_1406EB810(a6, a2, v11);
    goto LABEL_71;
  }
  v18 = (char *)(a3 + 36);
  v55 = 0;
  v19 = a3 + 1;
  v62 = v19;
  v60 = v19;
  do
  {
    v20 = *v19 & 0xFF0000;
    if ( !v20 )
      goto LABEL_20;
    if ( v20 != 0x10000 && v20 != 0x20000 )
    {
      if ( v20 == 196608 || v20 == 0x40000 )
        goto LABEL_13;
      if ( v20 != 327680 )
      {
        if ( v20 != 393216 )
        {
          v14 = 0;
          goto LABEL_20;
        }
LABEL_13:
        v14 = 0;
        v21 = sub_14064C900(v18);
        v9 = 0;
        if ( v21 != -1073741736
          || (v61 = &v18[RtlLengthSecurityDescriptor(v18)], v22 = sub_14064C900(v61), v9 = 0, v12 = v22, v22 < 0) )
        {
LABEL_14:
          v12 = -1073741811;
          goto LABEL_71;
        }
        v17 = 1;
        v53 = 1;
        goto LABEL_19;
      }
    }
    v14 = 0;
    v23 = sub_14064C900(v18);
    v9 = 0;
    if ( v23 < 0 )
      goto LABEL_14;
    v17 = 1;
LABEL_19:
    v15 = v55;
LABEL_20:
    ++v15;
    v19 = v60 + 1;
    v55 = v15;
    ++v60;
  }
  while ( v15 < 0x20 );
  if ( v14 == 1 )
    goto LABEL_2;
  memset(v70, 0, sizeof(v70));
  if ( v17 == 1 )
    sub_14064C418(v18, &v63);
  if ( v53 == 1 )
    sub_14064C418(v61, &v65);
  v24 = a4;
  v25 = qword_1400472E8;
  v9 = 0;
  v26 = 0;
  while ( 2 )
  {
    v27 = *(_DWORD *)v25;
    if ( v24 == 1 )
    {
      v28 = 0;
      v29 = *(_DWORD *)v25;
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 )
          break;
        ++v28;
      }
      v30 = v59;
      if ( (int)v59[v28 + 1] < 0 )
      {
        v31 = (unsigned __int16 *)&v70[(unsigned int)v16];
        v32 = sub_14064C4AC(v58, v57, (unsigned int)&v63, (unsigned int)&v65, v27, v51, (__int64)v62, (__int64)v31);
        goto LABEL_35;
      }
      goto LABEL_37;
    }
    v30 = v59;
    v33 = *v59 & v27;
    if ( v33 )
    {
      v31 = (unsigned __int16 *)&v70[(unsigned int)v16];
      LOBYTE(v51) = *((_BYTE *)v59 + 136);
      v32 = sub_14064B9D8(v58, v57, v33, v51, (__int64)(v59 + 1), (__int64)v31, 0, 0, 0, (__int64)&v54);
LABEL_35:
      v9 = 0;
      v12 = v32;
      if ( v32 < 0 )
        goto LABEL_66;
      v30 = v59;
      v13 += *v31;
      v16 = (unsigned int)(v16 + 1);
      v56 = v16;
LABEL_37:
      v24 = a4;
    }
    ++v26;
    v25 = (__int64 *)((char *)v25 + 4);
    if ( v26 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v30 )
  {
    v34 = 0;
    v35 = (__int64)(v30 + 1);
    v55 = 0;
    v36 = v30 + 1;
    v37 = 1;
    while ( v24 == 1 )
    {
      if ( *v36 < 0 )
      {
        v38 = (unsigned int)v16;
        v39 = sub_14064C4AC(
                v58,
                v57,
                (unsigned int)&v63,
                (unsigned int)&v65,
                v37,
                v51,
                v35,
                (__int64)&v70[(unsigned int)v16]);
        goto LABEL_46;
      }
LABEL_49:
      ++v34;
      ++v36;
      v37 *= 2;
      v55 = v34;
      if ( v34 >= 0x10 )
        goto LABEL_50;
    }
    if ( (*v30 & v37) != 0 )
    {
      v38 = (unsigned int)v16;
      LOBYTE(v51) = *((_BYTE *)v30 + 136);
      v39 = sub_14064B9D8(
              v58,
              v57,
              *v30 & (unsigned int)v37,
              v51,
              v35,
              (__int64)&v70[(unsigned int)v16],
              0,
              0,
              0,
              (__int64)&v54);
LABEL_46:
      v9 = 0;
      v12 = v39;
      if ( v39 < 0 )
        goto LABEL_66;
      v30 = v59;
      v35 = (__int64)v62;
      v13 += LOWORD(v70[v38]);
      v34 = v55;
      v16 = (unsigned int)(v16 + 1);
      v56 = v16;
    }
    v24 = a4;
    goto LABEL_49;
  }
LABEL_50:
  v40 = (v13 >> 1) + 1;
  if ( v67 )
  {
    if ( v68 )
    {
      v41 = (unsigned int)*v68;
      if ( (unsigned int)v41 + v40 < 0x400 )
      {
        v42 = v67 + 2 * v41;
        *v68 = v41 + v40;
        v43 = 0;
        goto LABEL_57;
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, 2LL * v40, 1799447891LL);
  v9 = 0;
  v42 = Pool2;
  if ( Pool2 )
  {
    v43 = 1;
LABEL_57:
    v45 = 0;
    *v69 = v43;
    if ( (_DWORD)v16 )
    {
      v46 = (unsigned __int16 *)v70;
      do
      {
        v47 = (const void *)*((_QWORD *)v46 + 1);
        if ( v47 )
        {
          memmove((void *)(v42 + v45), v47, *v46);
          v45 += *v46;
          v9 = 0;
        }
        v46 += 8;
        --v16;
      }
      while ( v16 );
      LODWORD(v16) = v56;
    }
    *(_WORD *)(v42 + 2LL * (v40 - 1)) = 0;
    if ( a6 )
    {
      *a6 = v42;
      a6[1] = 2 * v40;
    }
    else
    {
      MEMORY[8] = v42;
      MEMORY[2] = 2 * v40;
      MEMORY[0] = 2 * v40 - 2;
    }
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_66:
  if ( (_DWORD)v16 )
  {
    v48 = (PVOID *)v70 + 1;
    v49 = (unsigned int)v16;
    do
    {
      if ( *v48 )
      {
        ExFreePoolWithTag(*v48, 0);
        v9 = 0;
      }
      v48 += 2;
      --v49;
    }
    while ( v49 );
  }
LABEL_71:
  if ( DWORD2(v63) != v9 && P )
  {
    ExFreePoolWithTag(P, 0);
    v9 = 0;
  }
  if ( DWORD2(v65) != v9 && v66 )
    ExFreePoolWithTag(v66, 0);
  return v12;
}
