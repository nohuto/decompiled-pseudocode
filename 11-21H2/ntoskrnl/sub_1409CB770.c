/*
 * XREFs of sub_1409CB770 @ 0x1409CB770
 * Callers:
 *     sub_1405F4EC8 @ 0x1405F4EC8 (sub_1405F4EC8.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14021F640 @ 0x14021F640 (sub_14021F640.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14064A78C @ 0x14064A78C (sub_14064A78C.c)
 *     sub_1409CBE9C @ 0x1409CBE9C (sub_1409CBE9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CB770(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        __int64 a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r15
  char v21; // r13
  _WORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r14
  char v26; // bp
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  bool v31; // zf
  unsigned int j; // ebx
  int v33; // r15d
  __int64 v34; // rbx
  __int64 v35; // rdi
  char *v36; // rbx
  _DWORD *v37; // rdi
  int v38; // ecx
  unsigned int v39; // ebx
  char v40; // al
  int *v41; // rdi
  int v42; // eax
  _WORD *v43; // rbx
  unsigned int v44; // edi
  unsigned int v45; // ecx
  _QWORD *v46; // rax
  void *v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r10
  __int64 v51; // r9
  int v52; // ecx
  unsigned int i; // ebx
  int v54; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v57; // [rsp+68h] [rbp-70h] BYREF
  int v58; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v59; // [rsp+70h] [rbp-68h]
  _DWORD *v60; // [rsp+78h] [rbp-60h] BYREF
  char *v61; // [rsp+80h] [rbp-58h]
  unsigned int v62; // [rsp+E0h] [rbp+8h]

  v58 = -1;
  v13 = 0LL;
  v14 = a3;
  v60 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v59 = *(unsigned __int16 *)(a1 + 4);
    if ( v59 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = **(_WORD ***)(v14 + 152);
      if ( *v22 == *(_WORD *)qword_140D3CA60 )
      {
        v23 = memcmp(v22, qword_140D3CA60, 4LL * *((unsigned __int8 *)qword_140D3CA60 + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v23 )
          Size = 4 * *((unsigned __int8 *)qword_140C5AFA8 + 1) + 8;
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v62 = 0;
      v61 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_80:
          if ( v13 )
          {
            sub_14028AB90(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) != 0 )
          goto LABEL_79;
        v57 = -1;
        v27 = *v25;
        if ( *v25 == 2 )
          break;
        if ( v27 == 7 )
        {
          v33 = *((_DWORD *)v25 + 1);
          LOBYTE(v16) = 1;
          v34 = *((_DWORD *)v25 + 2) & 1;
          v35 = -(__int64)((_DWORD)v34 != 0);
          v36 = &v25[16 * v34 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
          v37 = (_DWORD *)((unsigned __int64)(v25 + 12) & v35);
          if ( v37 )
          {
            if ( (unsigned __int8)sub_14021F640(v14, a10, (__int64)v36, (__int64)v16, 0, a11)
              || Size && *(_WORD *)qword_140C5AFA8 == *(_WORD *)v36 && !memcmp(qword_140C5AFA8, v36, Size) )
            {
              v40 = sub_14064A78C(v37, a5, a6, &v57);
              v41 = a8;
              if ( !v40 )
                goto LABEL_73;
              v42 = v57;
              goto LABEL_74;
            }
            goto LABEL_76;
          }
          if ( !(unsigned __int8)sub_14021F640(v14, a10, (__int64)v36, (__int64)v16, 0, a11)
            && (!Size || *(_WORD *)qword_140C5AFA8 != *(_WORD *)v36 || memcmp(qword_140C5AFA8, v36, Size)) )
          {
            goto LABEL_76;
          }
          v39 = 0;
          if ( !a6 )
            goto LABEL_76;
          do
          {
            LOBYTE(v38) = v26;
            sub_1409CBE9C(v38, v33, a4, a5, a6, a7, v39++, (__int64)a8, (__int64)a9, (__int64)a12, (__int64)a13);
          }
          while ( v39 < a6 );
LABEL_29:
          v25 = v61;
          v13 = v60;
          v21 = Size_4;
          goto LABEL_76;
        }
        if ( v27 == 13 )
        {
          v33 = *((_DWORD *)v25 + 1);
          v43 = v25 + 8;
          v44 = 4 * (unsigned __int8)v25[9] + 8;
          if ( v17 && !v13 )
          {
            sub_140218B60(v17, (__int64 *)&v60);
            v19 = a12;
            v24 = v62;
            v13 = v60;
          }
          v45 = *((unsigned __int16 *)v25 + 1) - v44;
          if ( (int)(v45 - 8) <= 0 )
            goto LABEL_78;
          v46 = *(_QWORD **)(a3 + 1096);
          if ( v46 )
          {
            v47 = (void *)v46[72];
            v48 = v46[74];
            v49 = v46[73];
            v50 = v46[75];
          }
          else
          {
            v47 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
          }
          sub_140219130(
            (_DWORD *)a3,
            *(void **)(a3 + 776),
            v13,
            v47,
            v48,
            v49,
            v50,
            (_WORD *)((char *)v43 + v44),
            v45 - 8,
            1,
            0,
            &v58);
          if ( v58 != 1 )
            goto LABEL_76;
          LOBYTE(v51) = 1;
          if ( !(unsigned __int8)sub_14021F640(a3, a10, (__int64)(v25 + 8), v51, 0, a11)
            && (!Size || *(_WORD *)qword_140C5AFA8 != *v43 || memcmp(qword_140C5AFA8, v25 + 8, Size)) )
          {
            goto LABEL_76;
          }
          v41 = a8;
          if ( a6 )
          {
            for ( i = 0; i < a6; ++i )
            {
              LOBYTE(v52) = v26;
              sub_1409CBE9C(v52, v33, a4, a5, a6, a7, i, (__int64)a8, (__int64)a9, (__int64)a12, (__int64)a13);
            }
            v25 = v61;
            v13 = v60;
            v21 = Size_4;
LABEL_73:
            v42 = -1;
LABEL_74:
            if ( v42 != -1 )
            {
              v54 = (int)a9;
              LOBYTE(v54) = v26;
              sub_1409CBE9C(v54, v33, a4, a5, a6, a7, v42, (__int64)v41, (__int64)a9, (__int64)a12, (__int64)a13);
            }
LABEL_76:
            v19 = a12;
LABEL_77:
            v24 = v62;
LABEL_78:
            v16 = a13;
            goto LABEL_79;
          }
          if ( *a8 >= 0 )
          {
            if ( (v26 & 0x40) == 0 )
              goto LABEL_76;
            if ( (*a9 & v33) == 0 )
            {
              v30 = v21 == 64;
              goto LABEL_63;
            }
LABEL_64:
            v19 = a12;
            *a12 = 1;
            goto LABEL_77;
          }
          if ( v26 >= 0 )
            goto LABEL_76;
          v31 = (v33 & a4) == 0;
LABEL_67:
          if ( v31 && v21 != (char)0x80 )
            goto LABEL_76;
          v16 = a13;
          v19 = a12;
          v24 = v62;
          *a13 = 1;
        }
LABEL_79:
        ++v24;
        v20 = a8;
        v25 += *((unsigned __int16 *)v25 + 1);
        v14 = a3;
        v17 = a2;
        v62 = v24;
        v61 = v25;
        if ( v24 >= v59 )
          goto LABEL_80;
      }
      LOBYTE(v16) = 1;
      if ( !(unsigned __int8)sub_14021F640(v14, a10, (__int64)(v25 + 8), (__int64)v16, 0, a11)
        && (!Size || *(_WORD *)qword_140C5AFA8 != *((_WORD *)v25 + 4) || memcmp(qword_140C5AFA8, v25 + 8, Size)) )
      {
        goto LABEL_76;
      }
      v29 = *((_DWORD *)v25 + 1);
      if ( a6 )
      {
        for ( j = 0; j < a6; ++j )
        {
          LOBYTE(v28) = v26;
          sub_1409CBE9C(v28, v29, a4, a5, a6, a7, j, (__int64)v20, (__int64)a9, (__int64)a12, (__int64)a13);
        }
        goto LABEL_29;
      }
      if ( *v20 >= 0 )
      {
        if ( (v26 & 0x40) == 0 )
          goto LABEL_76;
        if ( (*a9 & v29) == 0 )
        {
          v30 = v21 == 64;
LABEL_63:
          if ( !v30 )
            goto LABEL_76;
        }
        goto LABEL_64;
      }
      if ( v26 >= 0 )
        goto LABEL_76;
      v31 = (v29 & a4) == 0;
      goto LABEL_67;
    }
  }
}
