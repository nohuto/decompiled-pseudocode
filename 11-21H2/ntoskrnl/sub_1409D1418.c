/*
 * XREFs of sub_1409D1418 @ 0x1409D1418
 * Callers:
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409CFE78 @ 0x1409CFE78 (sub_1409CFE78.c)
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3E10 @ 0x1409D3E10 (sub_1409D3E10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D1418(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v12; // edi
  unsigned __int8 v13; // al
  unsigned int v14; // r12d
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  wchar_t *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r13d
  _WORD *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  __int64 v26; // r9
  char *v27; // r10
  __int16 v28; // r11
  unsigned int v29; // ecx
  _WORD *v30; // r8
  SIZE_T v31; // rdx
  __int64 v32; // rcx
  wchar_t *v33; // rax
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned int v36; // r12d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  _WORD *v40; // rax
  unsigned int v41; // r11d
  __int64 v42; // r13
  int v43; // r9d
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  unsigned int v46; // r13d
  _WORD *v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // r13
  char v50; // r12
  char v51; // bl
  wchar_t *v52; // rax
  wchar_t *v53; // r10
  __int16 v54; // ax
  wchar_t *v55; // rdx
  __int64 v56; // rcx
  wchar_t v57; // ax
  wchar_t *v58; // rax
  wchar_t v59; // ax
  wchar_t v60; // ax
  __int64 v61; // r9
  int v63; // [rsp+20h] [rbp-D1h]
  PVOID P; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int v65; // [rsp+48h] [rbp-A9h] BYREF
  unsigned int v66; // [rsp+4Ch] [rbp-A5h]
  unsigned int v67; // [rsp+50h] [rbp-A1h]
  unsigned int v68; // [rsp+54h] [rbp-9Dh]
  unsigned int v69; // [rsp+58h] [rbp-99h]
  __int64 v70; // [rsp+60h] [rbp-91h]
  __int64 v71; // [rsp+68h] [rbp-89h]
  int v72[2]; // [rsp+70h] [rbp-81h]
  wchar_t v73[12]; // [rsp+78h] [rbp-79h] BYREF
  _BYTE Sid[80]; // [rsp+90h] [rbp-61h] BYREF

  v71 = a6;
  v70 = a7;
  *(_QWORD *)v72 = a5;
  v12 = 0;
  P = 0LL;
  v65 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1;
    if ( !*a1 )
    {
LABEL_89:
      v12 = 1336;
      goto LABEL_90;
    }
    if ( v13 > 4u )
    {
      switch ( v13 )
      {
        case 0x10u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v46 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 < v46 )
            return 1336;
          if ( v46 + 6 >= v46 )
          {
            v47 = sub_14067757C(v46 + 6);
            *(_QWORD *)a3 = v47;
            if ( v47 )
            {
              *v47 = 34;
              memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v46);
              v48 = (unsigned __int64)v46 >> 1;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v48 + 2) = 34;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v48 + 4) = 0;
              *a4 += v46;
              goto LABEL_90;
            }
            goto LABEL_58;
          }
          break;
        case 0x18u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v36 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 < v36 || !v36 )
            return 1336;
          v37 = 2LL * v36;
          if ( v37 <= 0xFFFFFFFF && (int)v37 + 2 >= (unsigned int)v37 )
          {
            v38 = 2LL * (unsigned int)(v37 + 2);
            if ( v38 <= 0xFFFFFFFF )
            {
              v39 = (unsigned int)v38;
              v40 = sub_14067757C((unsigned int)v38);
              v41 = 0;
              *(_QWORD *)a3 = v40;
              if ( v40 )
              {
                v42 = 0LL;
                *v40 = 35;
                do
                {
                  v43 = 2 * v41;
                  v44 = v42 + *a4;
                  ++v41;
                  ++v42;
                  v45 = (unsigned __int8)a1[v44];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v43 + 1)) = a0123456789abcd_0[v45 >> 4];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v43 + 2)) = a0123456789abcd_0[v45 & 0xF];
                }
                while ( v41 < v36 );
                v12 = 0;
                *(_WORD *)(*(_QWORD *)a3 + 2 * (v39 >> 1) - 2) = 0;
                *a4 += v36;
                goto LABEL_90;
              }
              goto LABEL_58;
            }
          }
          break;
        case 0x50u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v21 = *(_DWORD *)(a1 + 1);
            v67 = v21;
            *a4 = 5;
            if ( v21 )
            {
              if ( a2 - 5 >= v21 )
              {
                v22 = 6;
                v23 = sub_14067757C(6uLL);
                *(_QWORD *)a3 = v23;
                if ( !v23 )
                  goto LABEL_58;
                *v23 = 123;
                v24 = 0;
                v25 = *a4;
                v69 = v25;
                v26 = v25;
                v66 = 0;
                while ( 1 )
                {
                  v27 = &a1[v26 + v24];
                  if ( *v27 == 80 )
                    goto LABEL_89;
                  v12 = sub_1409D1418(
                          (_DWORD)v27,
                          a2 - v24 - v25,
                          (unsigned int)&P,
                          (_DWORD)a4,
                          *(__int64 *)v72,
                          v71,
                          v70,
                          a8);
                  if ( v12 )
                    goto LABEL_90;
                  v66 += *a4;
                  if ( (int)sub_1409D3E10(v22, P, &v65) < 0 )
                    goto LABEL_22;
                  v29 = v65 + 4;
                  v68 = v65 + 4;
                  if ( v65 + 4 < v65 )
                    goto LABEL_22;
                  v30 = *(_WORD **)a3;
                  v65 += 4;
                  v31 = v29;
                  v32 = -1LL;
                  do
                    ++v32;
                  while ( v30[v32] != v28 );
                  v33 = (wchar_t *)sub_1409CFE78(2 * v32, v31, v30);
                  *(_QWORD *)a3 = v33;
                  if ( !v33 )
                    goto LABEL_58;
                  if ( (int)sub_1402E0198(
                              &v33[((unsigned __int64)v22 >> 1) - 2],
                              (unsigned __int64)(v68 - v22 + 4) >> 1,
                              L"%ls, ",
                              P) < 0 )
                    goto LABEL_72;
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  v34 = v67;
                  v24 = v66;
                  v25 = v69;
                  v22 = v68;
                  v26 = v69;
                  P = 0LL;
                  if ( v67 <= v66 )
                  {
                    v35 = (unsigned __int64)v68 >> 1;
                    *(_WORD *)(*(_QWORD *)a3 + 2 * v35 - 8) = 125;
                    *(_WORD *)(*(_QWORD *)a3 + 2 * v35 - 6) = 0;
                    *a4 = v34 + v69;
                    goto LABEL_90;
                  }
                }
              }
            }
          }
          return 1336;
        case 0x51u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v14 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v14 <= 0x44 && a2 - 5 >= v14 )
            {
              memmove(Sid, a1 + 5, v14);
              v12 = sub_140676AC0(Sid, (wchar_t **)&P, a5, v15, v63, a8);
              if ( v12 )
                goto LABEL_90;
              *a4 += v14;
              v16 = -1LL;
              do
                ++v16;
              while ( *((_WORD *)P + v16) );
              v17 = (unsigned int)(v16 + 6);
              if ( (unsigned int)v17 < (unsigned int)v16 || (v18 = 2 * v17, v18 > 0xFFFFFFFF) )
              {
LABEL_22:
                v12 = 534;
                goto LABEL_90;
              }
              v19 = (unsigned int)v18;
              v20 = (wchar_t *)sub_14067757C((unsigned int)v18);
              *(_QWORD *)a3 = v20;
              if ( v20 )
              {
                if ( (int)sub_1402E0198(v20, v19 >> 1, L"SID(%ls)", P) >= 0 )
                  goto LABEL_90;
                goto LABEL_72;
              }
LABEL_58:
              v12 = 8;
              goto LABEL_90;
            }
          }
          return 1336;
        default:
          goto LABEL_89;
      }
      return 534;
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v49 = *(_QWORD *)(a1 + 1);
    v50 = a1[9];
    v51 = a1[10];
    v52 = (wchar_t *)sub_14067757C(0x40uLL);
    *(_QWORD *)a3 = v52;
    v53 = v52;
    if ( !v52 )
      goto LABEL_58;
    if ( v50 == 1 )
    {
      v54 = 43;
    }
    else
    {
      if ( v50 != 2 )
      {
LABEL_64:
        v55 = v73;
        v56 = 8LL;
        if ( v51 == 1 )
        {
          *v53++ = 48;
          do
          {
            if ( v56 == -2147483638 )
              break;
            v57 = *(wchar_t *)((char *)v55 + (char *)L"%I64o" - (char *)v73);
            if ( !v57 )
              break;
            *v55++ = v57;
            --v56;
          }
          while ( v56 );
        }
        else if ( v51 == 3 )
        {
          *(_DWORD *)v53 = 7864368;
          v53 += 2;
          do
          {
            if ( v56 == -2147483638 )
              break;
            v59 = *(wchar_t *)((char *)v55 + (char *)L"%I64x" - (char *)v73);
            if ( !v59 )
              break;
            *v55++ = v59;
            --v56;
          }
          while ( v56 );
        }
        else
        {
          do
          {
            if ( v56 == -2147483638 )
              break;
            v60 = *(wchar_t *)((char *)v55 + (char *)L"%I64u" - (char *)v73);
            if ( !v60 )
              break;
            *v55++ = v60;
            --v56;
          }
          while ( v56 );
        }
        v58 = v55 - 1;
        if ( v56 )
          v58 = v55;
        *v58 = 0;
        if ( !v56 )
          goto LABEL_72;
        if ( v49 || v51 != 1 )
        {
          v61 = -v49;
          if ( v50 != 2 )
            v61 = v49;
          if ( (int)sub_1402E0198(v53, 32 - (((__int64)v53 - *(_QWORD *)a3) >> 1), v73, v61) < 0 )
          {
LABEL_72:
            v12 = 50;
            goto LABEL_90;
          }
        }
        *a4 += 10;
LABEL_90:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v12;
      }
      v54 = 45;
    }
    *v53++ = v54;
    goto LABEL_64;
  }
  return 87LL;
}
