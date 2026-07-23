/*
 * XREFs of sub_1409246D8 @ 0x1409246D8
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14091A344 @ 0x14091A344 (sub_14091A344.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14092503C @ 0x14092503C (sub_14092503C.c)
 *     sub_140925070 @ 0x140925070 (sub_140925070.c)
 *     sub_14092512C @ 0x14092512C (sub_14092512C.c)
 *     sub_140925284 @ 0x140925284 (sub_140925284.c)
 *     sub_1409255A4 @ 0x1409255A4 (sub_1409255A4.c)
 *     sub_1409256A0 @ 0x1409256A0 (sub_1409256A0.c)
 *     sub_140925768 @ 0x140925768 (sub_140925768.c)
 *     sub_140925900 @ 0x140925900 (sub_140925900.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_1409246D8(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // esi
  __int128 *v9; // rdi
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r14d
  _QWORD *v15; // r12
  __int128 *v16; // rbx
  unsigned int *v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // r14
  int v20; // edi
  __int64 v21; // r9
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  __int64 result; // rax
  char *v28; // r15
  __int64 v29; // r13
  __int64 v30; // r12
  _BOOL8 v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // rdx
  _OWORD *v34; // rcx
  __int128 v35; // xmm1
  int v36; // edi
  __int128 *v37; // rbx
  unsigned int v38; // r14d
  signed __int64 v39; // rsi
  _DWORD *v40; // rcx
  bool v41; // zf
  int v42; // eax
  __int64 v43; // xmm1_8
  unsigned __int8 *v44; // rdx
  __int128 v45; // xmm1
  int v46; // eax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  char v51; // [rsp+31h] [rbp-CFh] BYREF
  char v52; // [rsp+32h] [rbp-CEh] BYREF
  char v53; // [rsp+33h] [rbp-CDh] BYREF
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v57; // [rsp+50h] [rbp-B0h] BYREF
  char *v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  _OWORD v60[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v61[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+100h] [rbp+0h] BYREF
  char *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  char *v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+138h] [rbp+38h]
  int v71; // [rsp+13Ch] [rbp+3Ch]
  char *v72; // [rsp+140h] [rbp+40h]
  int v73; // [rsp+148h] [rbp+48h]
  int v74; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v75; // [rsp+150h] [rbp+50h]
  int v76; // [rsp+158h] [rbp+58h]
  int v77; // [rsp+15Ch] [rbp+5Ch]
  _QWORD *v78; // [rsp+160h] [rbp+60h]
  int v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+16Ch] [rbp+6Ch]

  v54 = a2;
  v57 = a1;
  v58 = (char *)a4;
  v55 = a6;
  v59 = a7;
  memset((char *)v60 + 4, 0, 0x58uLL);
  v8 = 0;
  LODWORD(v60[0]) = a5;
  v56 = 0LL;
  if ( !a5 )
    goto LABEL_52;
  v9 = &v56;
  v10 = a4 + 4;
  do
  {
    v11 = sub_14042A5E0(*v10, 0LL);
    v14 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned __int8)sub_1409255A4((unsigned int)v11) )
        return 3221225805LL;
      sub_140925900(*((unsigned int *)v10 - 4), v14);
      *(_QWORD *)v9 = 0LL;
    }
    ++v8;
    v10 += 3;
    v9 = (__int128 *)((char *)v9 + 8);
  }
  while ( v8 < a5 );
  v15 = v57;
  v16 = &v56;
  v17 = a4;
  v18 = v54;
  v19 = a5;
  v20 = 0;
  do
  {
    v21 = *(_QWORD *)v16;
    if ( !*(_QWORD *)v16 )
      goto LABEL_24;
    if ( *(_DWORD *)v21 == 1718052210
      && *(_DWORD *)(v21 + 4) == *(_DWORD *)(v21 + 8)
      && *(_QWORD *)(v21 + 12) == *v15
      && ((v22 = *(_DWORD *)(v21 + 28), v22 == 6) || v22 == 1)
      && (v23 = *(_DWORD *)(v21 + 40), (unsigned int)(v23 - 1) <= 0x7FFFDFFF)
      && (v23 & 0xFFF) == 0
      && (v24 = sub_140AB41B0(*(_QWORD *)v16, v12, v13), *(_DWORD *)(v21 + 508) == v24) )
    {
      if ( a3 || (int)sub_14092503C(v25, v18) >= 0 )
      {
        ++v20;
        goto LABEL_24;
      }
      sub_1409256A0(*v17, v18, v26);
    }
    else
    {
      sub_140925768(v15, *v17, v21);
    }
    *(_QWORD *)v16 = 0LL;
LABEL_24:
    v17 += 6;
    v16 = (__int128 *)((char *)v16 + 8);
    --v19;
  }
  while ( v19 );
  v28 = v58;
  v29 = v59;
  v30 = v55;
  if ( !v20 )
  {
LABEL_52:
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v44 = (unsigned __int8 *)&byte_14002A3AF;
LABEL_55:
      v62 = &v55;
      v64 = 0;
      v55 = 0x1000000LL;
      v63 = 8;
      sub_14020A9C4((__int64)&dword_140C03868, v44, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)v61);
    }
    return 3221225804LL;
  }
  if ( v59 )
  {
    if ( v20 == 1 )
      v31 = v56 == 0;
    else
      v31 = (int)sub_14092503C(*(unsigned int *)(v56 + 4), *(unsigned int *)(*((_QWORD *)&v56 + 1) + 8LL)) < 0;
    v32 = (_OWORD *)*((_QWORD *)&v56 + v31);
    v33 = 4LL;
    v34 = (_OWORD *)v29;
    do
    {
      *v34 = *v32;
      v34[1] = v32[1];
      v34[2] = v32[2];
      v34[3] = v32[3];
      v34[4] = v32[4];
      v34[5] = v32[5];
      v34[6] = v32[6];
      v34 += 8;
      v35 = v32[7];
      v32 += 8;
      *(v34 - 1) = v35;
      --v33;
    }
    while ( v33 );
    memset((void *)(v29 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v29 + 28) = 0;
  }
  v36 = 0;
  v37 = &v56;
  v38 = 0;
  v39 = (char *)v60 + 4 - v28;
  while ( 2 )
  {
    v40 = *(_DWORD **)v37;
    if ( *(_QWORD *)v37 )
    {
      v41 = v40[7] == 6;
      *(_DWORD *)&v61[4] = *(_DWORD *)v28;
      v42 = v40[1];
      *(_OWORD *)&v61[8] = 0LL;
      *(_DWORD *)&v61[8] = v42;
      if ( !v41 )
      {
        *(_DWORD *)&v61[16] = 0;
        *(_DWORD *)&v61[12] = v42;
        *(_DWORD *)&v61[20] = v40[10];
        *(_DWORD *)v61 = 3;
        goto LABEL_39;
      }
      *(_DWORD *)v61 = 1;
      result = sub_140925070((_DWORD)v28, v42, (unsigned int)&v61[12], (unsigned int)&v61[20], (__int64)&v61[16]);
      if ( (int)result >= 0 )
      {
LABEL_39:
        result = 0LL;
        v43 = *(_QWORD *)&v61[16];
        *(_OWORD *)&v28[v39] = *(_OWORD *)v61;
        *(_QWORD *)&v28[v39 + 16] = v43;
      }
      *(_QWORD *)v37 = 0LL;
      if ( (_DWORD)result != -2147483614 )
      {
        if ( (int)result < 0 )
          return result;
        ++v36;
      }
    }
    ++v38;
    v28 += 24;
    v37 = (__int128 *)((char *)v37 + 8);
    if ( v38 < a5 )
      continue;
    break;
  }
  if ( !v36 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v44 = (unsigned __int8 *)&word_14002A29E;
      goto LABEL_55;
    }
    return 3221225804LL;
  }
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 8LL) )
  {
    v68 = 0;
    v71 = 0;
    v74 = 0;
    v77 = 0;
    v80 = 0;
    v66 = &v51;
    v52 = BYTE8(v60[0]);
    v69 = &v52;
    v53 = v60[2];
    v72 = &v53;
    v54 = HIDWORD(v60[0]);
    v75 = &v54;
    LODWORD(v57) = DWORD1(v60[2]);
    v78 = &v57;
    v51 = v36;
    v67 = 1;
    v70 = 1;
    v73 = 1;
    v76 = 4;
    v79 = 4;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_14002A241, 0LL, 0LL, 7u, &v65);
  }
  LOBYTE(v12) = a3;
  sub_14092512C(v60, v12);
  sub_140925284(v60);
  v45 = v60[1];
  v46 = DWORD2(v60[5]);
  *(_OWORD *)v30 = v60[0];
  v47 = v60[2];
  *(_OWORD *)(v30 + 16) = v45;
  v48 = v60[3];
  *(_OWORD *)(v30 + 32) = v47;
  v49 = v60[4];
  *(_OWORD *)(v30 + 48) = v48;
  *(_QWORD *)&v48 = *(_QWORD *)&v60[5];
  *(_OWORD *)(v30 + 64) = v49;
  *(_QWORD *)(v30 + 80) = v48;
  *(_DWORD *)(v30 + 88) = v46;
  return 0LL;
}
