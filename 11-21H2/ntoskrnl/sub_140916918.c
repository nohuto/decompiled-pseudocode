/*
 * XREFs of sub_140916918 @ 0x140916918
 * Callers:
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14069F004 @ 0x14069F004 (sub_14069F004.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D404C @ 0x1406D404C (sub_1406D404C.c)
 *     sub_1406D407C @ 0x1406D407C (sub_1406D407C.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C07F4 @ 0x1407C07F4 (sub_1407C07F4.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_1409C6B8C @ 0x1409C6B8C (sub_1409C6B8C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140916918(__int64 a1, unsigned int a2, ULONG_PTR a3, __int64 a4, int a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  unsigned int v13; // r14d
  _DWORD *v14; // r15
  __m128i *v15; // r12
  __int64 v16; // rdi
  int v17; // eax
  int v18; // eax
  ULONG_PTR v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // r15d
  ULONG_PTR v23; // r12
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG_PTR v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h] BYREF
  int v40[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h]
  int v42[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45[38]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v46[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v47[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v6 = a2;
  v37 = a2;
  v7 = a1;
  v38 = a1;
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v35 = 0xFFFFFFFFLL;
  LOBYTE(v34) = 0;
  BugCheckParameter4 = 0LL;
  sub_140AB4534((char *)&v35 + 4);
  v36 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v36 + 4);
  memset(v45, 0, 0x128uLL);
  LODWORD(v45[12]) = -1;
  v45[19] = (__int64)&v45[18];
  v45[18] = (__int64)&v45[18];
  memset(&v45[27], 0, 0x50uLL);
  *(_OWORD *)v40 = 0LL;
  HIWORD(v40[0]) = -1;
  *(_OWORD *)v42 = 0LL;
  HIWORD(v42[0]) = -1;
  v41 = 0LL;
  v43 = 0LL;
  sub_140AB4550(&v45[21]);
  LODWORD(v45[20]) |= 1u;
  v10 = sub_1409C6B8C(a5, (unsigned int)v46, (unsigned int)v47, 4, (__int64)CmKeyObjectType + 76);
  if ( v10 >= 0 )
  {
    v13 = 0;
    if ( v6 )
    {
      v14 = (_DWORD *)(v7 + 40);
      while ( 1 )
      {
        LODWORD(v45[3]) = 0;
        *(_OWORD *)v42 = 0LL;
        *(_OWORD *)v40 = 0LL;
        v43 = 0LL;
        HIWORD(v42[0]) = -1;
        v41 = 0LL;
        HIWORD(v40[0]) = -1;
        v15 = (__m128i *)(v7 + 48LL * v13);
        v16 = *((_QWORD *)v14 - 3);
        v44 = v16;
        v10 = sub_1407C07F4((__int64)v42, *(_WORD *)(v16 + 66), v11, v12);
        if ( v10 < 0 )
          break;
        v10 = sub_1407C05F4((__int64)v40, v16);
        if ( v10 < 0 )
          break;
        v17 = sub_140718B68(v15);
        LODWORD(v33) = v17 + 37 * *(_DWORD *)(v16 + 16);
        v18 = sub_1407C8AE0(
                v16,
                (__int64)v40,
                &BugCheckParameter4,
                (__int64)v42,
                (bool *)&v34,
                v15,
                v17,
                v33,
                0LL,
                1,
                (__int64)v45);
        v19 = BugCheckParameter4;
        v10 = v18;
        if ( v18 < 0 )
          goto LABEL_22;
        if ( *(_DWORD *)(BugCheckParameter4 + 40) == -1 )
        {
          if ( *v14 == 1 || *(int *)(v44 + 40) < 0 )
            LODWORD(v45[3]) = 1;
          LODWORD(v45[0]) = 1;
          sub_14071F6D0((__int64)v40);
          sub_14071F6D0((__int64)v42);
          v10 = sub_140719278(
                  (__int64)v40,
                  (__int64)v42,
                  (__int64)v46,
                  (unsigned __int16 *)v15,
                  (__int64)v45,
                  512,
                  3,
                  0,
                  0LL);
          if ( v10 < 0 )
          {
            sub_140721BAC((__int64)v42);
            sub_140721BAC((__int64)v40);
LABEL_22:
            if ( v19 )
              sub_14071BF40(v19);
            break;
          }
          sub_140721BAC((__int64)v42);
          sub_140721BAC((__int64)v40);
        }
        sub_14071C050(v19);
        v6 = v37;
        *((_QWORD *)v14 - 2) = v19;
        *(v14 - 1) = *(_DWORD *)(v19 + 40);
        if ( v13 >= v6 - 1 )
        {
          v7 = v38;
        }
        else
        {
          v20 = 6LL * (v13 + 1);
          *(_QWORD *)(v38 + 8 * v20 + 16) = v19;
          v21 = *(_DWORD *)(v19 + 40);
          v7 = v38;
          *(_DWORD *)(v38 + 8 * v20 + 32) = v21;
        }
        BugCheckParameter4 = 0LL;
        sub_14069F004((__int64)v42);
        sub_14069F004((__int64)v40);
        ++v13;
        v14 += 12;
        if ( v13 >= v6 )
          goto LABEL_17;
      }
      sub_14069F004((__int64)v42);
      sub_14069F004((__int64)v40);
    }
    else
    {
LABEL_17:
      v22 = *(_DWORD *)(v7 + 48LL * (v6 - 1) + 36);
      v23 = *(_QWORD *)(v7 + 48LL * (v6 - 1) + 24);
      v10 = sub_14087D6D0(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40), 0);
      if ( v10 >= 0 )
      {
        v10 = sub_14087D6D0(a3, v22, 0);
        if ( v10 >= 0 )
        {
          v24 = *(_QWORD *)(a4 + 32);
          v25 = *(unsigned int *)(a4 + 40);
          if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
            v26 = sub_1406BF400(v24, v25, &v35);
          else
            v26 = sub_1407C9820(v24, v25, (unsigned int *)&v35);
          v27 = v26;
          if ( v26 )
          {
            if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
              v28 = sub_1406BF400(a3, v22, &v36);
            else
              v28 = sub_1407C9820(a3, v22, (unsigned int *)&v36);
            v29 = v28;
            if ( v28 )
            {
              sub_1406D407C(a3, *(_QWORD *)(a4 + 32));
              v10 = sub_14091822C(*(_QWORD *)(a4 + 32), v22);
              sub_1406D404C(a3, *(_QWORD *)(a4 + 32));
              if ( v10 >= 0 )
              {
                sub_14071B640(v23, *(unsigned int *)(v29 + 44), 0LL, 0, 0);
                *(_WORD *)(v23 + 186) |= 0x100u;
                *(_WORD *)(v29 + 2) |= 0x100u;
                *(_WORD *)(a4 + 186) |= 0x80u;
                *(_WORD *)(v27 + 2) |= 0x80u;
                v10 = 0;
              }
            }
            else
            {
              v10 = -1073741670;
            }
            v30 = *(_QWORD *)(a4 + 32);
            if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
              sub_1406BF450(v30, &v35);
            else
              sub_1407C97C0(v30, (unsigned int *)&v35);
            if ( v29 )
            {
              v31 = *(_QWORD *)(v23 + 32);
              if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
                sub_1406BF450(v31, &v36);
              else
                sub_1407C97C0(v31, (unsigned int *)&v36);
            }
          }
          else
          {
            v10 = -1073741670;
          }
        }
      }
    }
    SeDeleteAccessState(v46);
  }
  if ( (v45[20] & 1) != 0 )
  {
    sub_140AB4580(&v45[21]);
    LODWORD(v45[20]) &= ~1u;
  }
  LOBYTE(v9) = 1;
  sub_14067FE98(v45, v9);
  return (unsigned int)v10;
}
