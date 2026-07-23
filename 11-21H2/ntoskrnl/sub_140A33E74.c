/*
 * XREFs of sub_140A33E74 @ 0x140A33E74
 * Callers:
 *     sub_14065A018 @ 0x14065A018 (sub_14065A018.c)
 *     sub_140A32B54 @ 0x140A32B54 (sub_140A32B54.c)
 *     sub_140A32B9C @ 0x140A32B9C (sub_140A32B9C.c)
 *     sub_140A32CB0 @ 0x140A32CB0 (sub_140A32CB0.c)
 *     sub_140A32D28 @ 0x140A32D28 (sub_140A32D28.c)
 *     sub_140A32E08 @ 0x140A32E08 (sub_140A32E08.c)
 *     sub_140A32E50 @ 0x140A32E50 (sub_140A32E50.c)
 *     sub_140A32F88 @ 0x140A32F88 (sub_140A32F88.c)
 *     sub_140A33DD0 @ 0x140A33DD0 (sub_140A33DD0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A33D28 @ 0x140A33D28 (sub_140A33D28.c)
 */

__int64 __fastcall sub_140A33E74(_BYTE *a1, unsigned int a2, unsigned int *a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r10
  unsigned int v7; // eax
  char v9; // dl
  int v10; // edi
  _BYTE *v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r12d
  unsigned int *v14; // rax
  int v15; // r13d
  _BYTE *v16; // rcx
  __int64 v17; // rax
  char v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  int v23; // eax
  unsigned int v24; // r8d
  _BYTE *v25; // r9
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  _BYTE *v30; // rax
  char v31; // [rsp+20h] [rbp-C9h]
  char v32; // [rsp+21h] [rbp-C8h]
  unsigned int v33; // [rsp+24h] [rbp-C5h]
  unsigned int v34; // [rsp+28h] [rbp-C1h] BYREF
  __int64 v35; // [rsp+30h] [rbp-B9h]
  unsigned int *v36; // [rsp+38h] [rbp-B1h]
  unsigned int v37; // [rsp+40h] [rbp-A9h]
  _BYTE *v38; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v39; // [rsp+50h] [rbp-99h]
  _QWORD v40[16]; // [rsp+60h] [rbp-89h]

  v6 = a6;
  v7 = *a3;
  v36 = a3;
  v9 = 0;
  v31 = 0;
  v10 = (int)a1;
  v35 = a6;
  v11 = a1;
  v37 = v7;
  v12 = 0;
  v13 = 0;
  if ( a2 >= 0x7FFFFFFF )
  {
LABEL_48:
    v21 = v10 - (_DWORD)v11 - 1;
  }
  else
  {
    if ( v7 )
    {
      v14 = (unsigned int *)(a4 + 4);
      v39 = a4 + 4;
      while ( 1 )
      {
        v15 = *(v14 - 1);
        v16 = *(_BYTE **)(v14 + 1);
        v17 = *v14;
        v33 = v17;
        if ( (v15 & 0xC0000000) == 0 || !v6 || (v18 = 1, (unsigned int)v17 >= a5) )
          v18 = 0;
        v32 = v18;
        v34 = 0;
        v38 = 0LL;
        if ( (unsigned __int8)v15 == 5 )
          break;
        if ( v9 )
          goto LABEL_15;
        if ( !a2 )
        {
          if ( (((unsigned __int8)v15 - 2) & 0xFFFFFFFD) != 0 )
            goto LABEL_47;
          v17 = (unsigned int)v17;
          goto LABEL_15;
        }
        if ( v16 )
        {
          while ( *v16 )
          {
            if ( *v16 == *v11 )
              goto LABEL_32;
            ++v16;
          }
          if ( (((unsigned __int8)v15 - 2) & 0xFFFFFFFD) != 0 )
          {
LABEL_47:
            a3 = v36;
            goto LABEL_48;
          }
          v17 = (unsigned int)v17;
          v9 = v31;
LABEL_15:
          if ( v18 )
          {
            v19 = 2 * v17;
            *(_QWORD *)(v6 + 8 * v19 + 8) = 0LL;
            *(_DWORD *)(v6 + 8 * v19) = 0;
          }
          if ( (unsigned int)(unsigned __int8)v15 - 3 > 1 )
            goto LABEL_21;
          if ( v12 >= 8 )
            goto LABEL_47;
          v20 = 2LL * v12++;
          BYTE4(v40[v20 + 1]) = v9;
          v9 = 1;
          v40[v20] = v11;
          LODWORD(v40[v20 + 1]) = a2;
LABEL_20:
          v31 = v9;
          goto LABEL_21;
        }
LABEL_32:
        v23 = sub_140A33D28(v11, a2, &v34, &v38);
        if ( v23 <= 0 )
          goto LABEL_47;
        v24 = v34;
        v25 = v38;
        v6 = v35;
        v26 = v34 + v23;
        if ( v32 )
        {
          if ( (v15 & 0x40000000) != 0 )
          {
            v27 = 2LL * v33;
            *(_QWORD *)(v35 + 8 * v27 + 8) = v38;
            *(_DWORD *)(v6 + 8 * v27) = v24;
            if ( *v11 == 3 && v24 )
            {
              *(_QWORD *)(v6 + 16LL * v33 + 8) = v25 + 1;
              *(_DWORD *)(v6 + 16LL * v33) = v24 - 1;
            }
          }
          else if ( v15 < 0 )
          {
            v28 = 2LL * v33;
            *(_QWORD *)(v35 + 8 * v28 + 8) = v11;
            *(_DWORD *)(v6 + 8 * v28) = v26;
          }
        }
        if ( !(_BYTE)v15 )
          goto LABEL_47;
        if ( (unsigned __int8)v15 <= 2u )
        {
          v11 += v26;
          a2 -= v26;
        }
        else
        {
          if ( (unsigned __int8)v15 > 4u || v12 >= 8 )
            goto LABEL_47;
          v29 = 2LL * v12;
          v30 = &v11[v26];
          v11 = v25;
          ++v12;
          LODWORD(v40[v29 + 1]) = a2 - v26;
          a2 = v24;
          v40[v29] = v30;
          BYTE4(v40[v29 + 1]) = 0;
        }
        v9 = v31;
LABEL_21:
        ++v13;
        v14 = (unsigned int *)(v39 + 16);
        v39 += 16LL;
        if ( v13 >= v37 )
        {
          a3 = v36;
          goto LABEL_23;
        }
      }
      if ( !v12 )
        goto LABEL_47;
      v11 = (_BYTE *)v40[2 * --v12];
      a2 = v40[2 * v12 + 1];
      v9 = BYTE4(v40[2 * v12 + 1]);
      goto LABEL_20;
    }
LABEL_23:
    v21 = (_DWORD)v11 - v10;
  }
  *a3 = v13;
  return v21;
}
