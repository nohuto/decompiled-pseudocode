/*
 * XREFs of sub_1403CEDC4 @ 0x1403CEDC4
 * Callers:
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_1405DD354 @ 0x1405DD354 (sub_1405DD354.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_14099E10C @ 0x14099E10C (sub_14099E10C.c)
 *     sub_14099E20C @ 0x14099E20C (sub_14099E20C.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405DA184 @ 0x1405DA184 (sub_1405DA184.c)
 *     sub_1405DA3B4 @ 0x1405DA3B4 (sub_1405DA3B4.c)
 */

unsigned __int64 sub_1403CEDC4()
{
  unsigned __int64 result; // rax
  int v1; // ebx
  __int64 *v2; // r13
  __int64 v3; // r15
  unsigned int v4; // r8d
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // ett
  __int64 v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  unsigned __int8 v11; // r8
  __int64 v12; // rdi
  int v13; // edx
  int v14; // esi
  unsigned __int8 v15; // r8
  _QWORD *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int8 *v20; // r13
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  unsigned __int8 v24; // r11
  unsigned int v25; // r12d
  unsigned __int8 v26; // r12
  char v27; // cl
  unsigned __int8 v28; // cl
  __int16 v29; // ax
  __int64 v30; // rax
  char *v31; // rdx
  unsigned __int16 v32; // si
  __int64 v33; // rdi
  __int64 v34; // r8
  char v35; // cl
  unsigned __int8 v36; // cl
  char v37; // cl
  char v38; // cl
  char v39; // al
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // al
  char v44; // cl
  char v45; // al
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  unsigned __int8 v48; // r9
  unsigned __int8 v49; // al
  unsigned __int16 v50; // dx
  __int64 v51; // rcx
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // al
  char v54; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v58; // [rsp+28h] [rbp-41h] BYREF
  int v59; // [rsp+2Ch] [rbp-3Dh]
  int v60; // [rsp+30h] [rbp-39h]
  int v61; // [rsp+34h] [rbp-35h]
  unsigned int v62; // [rsp+38h] [rbp-31h]
  unsigned int v63; // [rsp+3Ch] [rbp-2Dh]
  __int64 v64; // [rsp+40h] [rbp-29h]
  __int64 v65; // [rsp+50h] [rbp-19h]
  _QWORD *v66; // [rsp+58h] [rbp-11h]
  __int64 *v67; // [rsp+60h] [rbp-9h]
  __int128 v68; // [rsp+68h] [rbp-1h] BYREF
  __int64 v69; // [rsp+78h] [rbp+Fh]
  char v70; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v71; // [rsp+D8h] [rbp+6Fh]
  __int16 v72; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int16 v73; // [rsp+E8h] [rbp+7Fh]

  result = 0LL;
  v1 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v58 = 0;
  if ( qword_140C1CF38 )
  {
    v2 = &off_140C03040[534 * dword_140C232CC];
    v67 = v2;
    v72 = *((_WORD *)v2 + 90);
    LOWORD(v57) = *((_WORD *)v2 + 91);
    LODWORD(v3) = 64;
    if ( !*(_QWORD *)(sub_140348800(0) + 33968) )
    {
      v35 = dword_140D06BF0;
      if ( (unsigned int)dword_140D06BF0 > 0x40 )
        v35 = 64;
      HIBYTE(v72) = 0;
      LOBYTE(v3) = v35;
    }
    v4 = dword_140C1CF34;
    v5 = dword_140D01530;
    v6 = dword_140D01534;
    v59 = v3;
    v73 = 0;
    v7 = dword_140D01530 / (unsigned int)dword_140C1CF34;
    v8 = v7 - v7 % (unsigned __int8)byte_140C1CF31;
    v63 = v7 - v7 % (unsigned __int8)byte_140C1CF31;
    result = dword_140D01534 / (unsigned int)dword_140C1CF34 / (unsigned __int8)byte_140C1CF31;
    v9 = 0;
    v10 = dword_140D01534 / (unsigned int)dword_140C1CF34
        - dword_140D01534 / (unsigned int)dword_140C1CF34 % (unsigned __int8)byte_140C1CF31;
    v62 = v10;
    if ( dword_140C1CF34 )
    {
      do
      {
        v11 = v8;
        v12 = qword_140C1CF38 + 336LL * v9;
        v13 = *(unsigned __int8 *)(v12 + 6);
        if ( (unsigned __int8)v8 > v13 - (unsigned __int8)byte_140C1CF31 )
          v11 = v13 - byte_140C1CF31;
        *(_BYTE *)(v12 + 134) = v11;
        v14 = v5 - v11;
        v15 = v10;
        v60 = v14;
        if ( (unsigned __int8)v10 > v13 - (unsigned __int8)byte_140C1CF31 )
          v15 = v13 - byte_140C1CF31;
        v16 = (_QWORD *)(v12 + 56);
        *(_BYTE *)(v12 + 136) = v15;
        v61 = v6 - v15;
        v70 = 0;
        v64 = 0LL;
        v65 = 0LL;
        v17 = 0LL;
        HIDWORD(v57) = 0;
        v18 = 0LL;
        v66 = (_QWORD *)(v12 + 56);
        v19 = 0;
        v20 = (unsigned __int8 *)(v12 + 132);
        do
        {
          v21 = *(v20 - 4);
          if ( (_BYTE)v21 )
          {
            v22 = *(v20 - 4);
            v23 = v21 * v20[(_QWORD)&v57 - v12 - 132];
            v24 = (v22 - (unsigned __int8)((v23 + 50) / 0x64u)) % (unsigned __int8)byte_140C1CF31 + (v23 + 50) / 0x64u;
            v25 = (v22 * (unsigned int)v20[(_QWORD)&v72 - v12 - 132] + 50) / 0x64;
            v26 = (v22 - (unsigned __int8)v25) % (unsigned __int8)byte_140C1CF31 + v25;
            if ( HIDWORD(v57) )
            {
              v36 = (v22 - (unsigned __int8)((v23 + 50) / 0x64u)) % (unsigned __int8)byte_140C1CF31 + (v23 + 50) / 0x64u;
              if ( v24 >= (unsigned __int8)v3 )
                v36 = v3;
              v24 = v36;
            }
            if ( v26 )
            {
              v27 = v26;
              if ( (unsigned __int8)byte_140C1CF31 > v26 )
                v27 = byte_140C1CF31;
              v26 = v27;
            }
            v28 = v26;
            v3 = 0LL;
            *(_QWORD *)&v68 = 0LL;
            if ( v24 >= v26 )
              v28 = v24;
            v29 = *(_WORD *)(v12 + 4);
            v71 = v28;
            *((_QWORD *)&v68 + 1) = *(v16 - 5);
            LOWORD(v69) = v29;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v68) )
            {
              v30 = sub_140348800(v58);
              if ( *(_BYTE *)(v30 + 34124) )
                v3 |= *(_QWORD *)(v30 + 200);
            }
            v16 = v66;
            v18 = v3 | v65;
            v17 = *v66 | v64;
            v70 += v26;
            *v66 = v3;
            LOBYTE(v3) = v59;
            *v20 = v71;
            v19 = HIDWORD(v57);
            *(v20 - 2) = v26;
            v64 = v17;
            v65 = v18;
          }
          ++v19;
          ++v16;
          ++v20;
          HIDWORD(v57) = v19;
          v66 = v16;
        }
        while ( v19 < 2 );
        v5 = v60;
        v6 = v61;
        if ( v17 != v18 )
          sub_1405DA3B4(*(unsigned __int16 *)(v12 + 4), *(_QWORD *)(v12 + 8), v18);
        v31 = (char *)(v12 + 132);
        if ( !v70 )
        {
          *(_BYTE *)(v12 + 130) = byte_140C1CF31;
          v37 = byte_140C1CF31;
          if ( (unsigned __int8)byte_140C1CF31 <= (unsigned __int8)*v31 )
            v37 = *v31;
          *v31 = v37;
        }
        if ( dword_140D05054 == 2 )
        {
          v38 = *(_BYTE *)(v12 + 130);
          v39 = 1;
          *(_BYTE *)(v12 + 139) = 0;
          *(_BYTE *)(v12 + 131) = 0;
          if ( (unsigned __int8)v38 > 1u )
            v39 = v38;
          *(_BYTE *)(v12 + 133) = 0;
          v40 = *v31;
          *(_BYTE *)(v12 + 130) = v39;
          v41 = 1;
          if ( (unsigned __int8)v40 > 1u )
            v41 = v40;
          *v31 = v41;
          *(_BYTE *)(v12 + 146) |= 4u;
        }
        else if ( dword_140D05054 == 3 && *(_BYTE *)(v12 + 129) )
        {
          v42 = *(_BYTE *)(v12 + 131);
          v43 = 1;
          *(_BYTE *)(v12 + 138) = 0;
          *(_BYTE *)(v12 + 130) = 0;
          if ( (unsigned __int8)v42 > 1u )
            v43 = v42;
          *v31 = 0;
          v44 = *(_BYTE *)(v12 + 133);
          *(_BYTE *)(v12 + 131) = v43;
          v45 = 1;
          if ( (unsigned __int8)v44 > 1u )
            v45 = v44;
          *(_BYTE *)(v12 + 146) |= 2u;
          *(_BYTE *)(v12 + 133) = v45;
        }
        v4 = dword_140C1CF34;
        v9 = v73 + 1;
        LOBYTE(v10) = v62;
        v8 = v63;
        result = ++v73;
      }
      while ( v73 < (unsigned int)dword_140C1CF34 );
      v2 = v67;
    }
    do
    {
LABEL_30:
      if ( !v5 )
        goto LABEL_31;
      v46 = 0;
    }
    while ( !v4 );
    while ( v5 )
    {
      v47 = qword_140C1CF38 + 336LL * v46;
      v48 = *(_BYTE *)(v47 + 6);
      if ( v48 )
      {
        v49 = *(_BYTE *)(v47 + 134) + byte_140C1CF31;
        if ( v49 < v48 )
        {
          *(_BYTE *)(v47 + 134) = v49;
          v5 -= (unsigned __int8)byte_140C1CF31;
        }
      }
      result = ++v46;
      if ( v46 >= v4 )
        goto LABEL_30;
    }
LABEL_31:
    while ( v6 )
    {
      v50 = 0;
      if ( v4 )
      {
        while ( v6 )
        {
          v51 = qword_140C1CF38 + 336LL * v50;
          v52 = *(_BYTE *)(v51 + 6);
          if ( v52 )
          {
            v53 = byte_140C1CF31 + *(_BYTE *)(v51 + 136);
            if ( v53 < v52 )
            {
              *(_BYTE *)(v51 + 136) = v53;
              v6 -= (unsigned __int8)byte_140C1CF31;
            }
          }
          result = ++v50;
          if ( v50 >= v4 )
            goto LABEL_31;
        }
        break;
      }
    }
    v32 = 0;
    if ( v4 )
    {
      do
      {
        v33 = qword_140C1CF38 + 336LL * v32;
        v34 = *(unsigned __int8 *)(v33 + 134);
        if ( *(unsigned __int8 *)(v33 + 135) != *(unsigned __int8 *)(v33 + 6) - (_DWORD)v34
          || *(unsigned __int8 *)(v33 + 137) != *(unsigned __int8 *)(v33 + 6) - *(unsigned __int8 *)(v33 + 136) )
        {
          LOBYTE(v8) = *(_BYTE *)(v33 + 136);
          sub_1405DA184(*(unsigned __int16 *)(v33 + 4), *(_QWORD *)(v33 + 8), v34, v8, v57);
          v54 = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 134);
          *(_BYTE *)(v33 + 137) = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 136);
          *(_BYTE *)(v33 + 135) = v54;
        }
        result = ++v32;
      }
      while ( v32 < (unsigned int)dword_140C1CF34 );
    }
    if ( *((_DWORD *)v2 + 46) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v56 = *((unsigned int *)v2 + 46);
      byte_140D069A7 = 1;
      result = sub_14029394C(1000000LL * *((unsigned int *)CurrentPrcb + 17), 0xF4240uLL, v56);
      v1 = result;
    }
    else
    {
      byte_140D069A7 = 0;
    }
  }
  dword_140C2B998 = v1;
  return result;
}
