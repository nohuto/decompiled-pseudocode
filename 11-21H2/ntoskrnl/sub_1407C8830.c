/*
 * XREFs of sub_1407C8830 @ 0x1407C8830
 * Callers:
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406B98FC @ 0x1406B98FC (sub_1406B98FC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_1407C4930 @ 0x1407C4930 (sub_1407C4930.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407C8830(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  struct _LOOKASIDE_LIST_EX *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ebx
  _PRIVILEGE_SET *v8; // r12
  unsigned int v9; // eax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // rbp
  _WORD *v12; // rax
  _WORD *v13; // r14
  unsigned __int16 v14; // bp
  int *v15; // rax
  unsigned __int16 v16; // dx
  int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // si
  unsigned __int16 v20; // bp
  PPRIVILEGE_SET v21; // rbx
  const void *v22; // rdx
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _WORD *v27; // r9
  unsigned __int8 *v28; // rax
  __int64 v29; // rdx
  __int16 v30; // cx
  __int64 v31; // rcx
  __int64 v33; // r10
  __int16 v34; // dx
  __int64 v35; // r10
  __int16 v36; // dx
  SIZE_T v37; // rsi
  _PRIVILEGE_SET *v38; // rax
  _WORD *v39; // rcx
  __int64 v40; // rdx
  __int128 v41; // [rsp+20h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v44; // [rsp+88h] [rbp+10h]

  v44 = a2;
  v2 = 0;
  v43 = 0LL;
  v41 = 0LL;
  WORD1(v41) = -1;
  *(_OWORD *)Privileges = 0LL;
  sub_1407C97FC(&v43);
  v5 = *(__int16 *)(a1 + 2);
  _mm_lfence();
  if ( (int)v5 >= 2 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v5 - 16);
  else
    v6 = *(_QWORD *)(a1 + 8 * v5 + 8);
  v7 = *(__int16 *)(v6 + 66);
  v8 = 0LL;
  if ( v7 >= 2 )
  {
    v37 = 8LL * (unsigned int)(v7 - 1);
    v38 = (_PRIVILEGE_SET *)Allocate(PagedPool, v37, 0x35364D43u, v4);
    v8 = v38;
    if ( !v38 )
    {
      v8 = Privileges[1];
      v2 = -1073741670;
      goto LABEL_29;
    }
    memset(v38, 0, v37);
  }
  LOWORD(v41) = v7;
  Privileges[1] = v8;
  v9 = sub_1407C4930(v6);
  v11 = v9;
  if ( v9 > 0xFFFF )
  {
    v2 = -1073741811;
  }
  else
  {
    v12 = Allocate(PagedPool, v9 + 16LL, 0x624E4D43u, v10);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11 + 16);
      *v13 = v11;
      v13[1] = v11;
      *((_QWORD *)v13 + 1) = v13 + 8;
      v14 = (unsigned __int16)v11 >> 1;
      while ( (*(_DWORD *)(v6 + 184) & 0x40000) != 0 && *(_QWORD *)(v6 + 72) )
      {
        v6 = *(_QWORD *)(v6 + 72);
LABEL_27:
        if ( !v6 )
        {
          *v44 = v13;
          goto LABEL_29;
        }
      }
      v15 = *(int **)(v6 + 80);
      v16 = *((_WORD *)v15 + 12);
      v17 = *v15;
      v18 = *(_WORD *)(v6 + 66);
      v19 = v16 >> 1;
      WORD1(v41) = v18;
      if ( (v17 & 1) != 0 )
        v19 = v16;
      v20 = v14 - v19;
      if ( v18 )
      {
        v33 = *(_QWORD *)(v6 + 192);
        v34 = v18;
        if ( v33 )
        {
          do
          {
            sub_1406B98FC((__int64)&v41, v34, *(_QWORD *)(v33 + 16));
            v33 = *(_QWORD *)(v35 + 24);
            v34 = v36 - 1;
          }
          while ( v33 );
          v18 = *(_WORD *)(v6 + 66);
          v8 = Privileges[1];
        }
        v21 = 0LL;
        if ( (v18 & 0x8000u) != 0 )
          goto LABEL_17;
      }
      else
      {
        *((_QWORD *)&v41 + 1) = v6;
      }
      do
      {
        if ( v18 >= 2u )
          v21 = (PPRIVILEGE_SET)*((_QWORD *)v8 + v18 - 2);
        else
          v21 = Privileges[v18 - 1];
        if ( *(_QWORD *)&v21[10].PrivilegeCount )
          break;
        if ( v21[2].PrivilegeCount != -1 )
          break;
        --v18;
      }
      while ( (v18 & 0x8000u) == 0 );
LABEL_17:
      v22 = *(const void **)&v21[10].PrivilegeCount;
      if ( v22 )
      {
        v39 = (_WORD *)(*((_QWORD *)v13 + 1) + 2LL * v20);
        if ( v22 == (const void *)1 )
        {
          v40 = *(_QWORD *)&v21[4].PrivilegeCount;
          if ( (*(_DWORD *)v40 & 1) != 0 )
            sub_140718AE8(v39, 2 * v19, (unsigned __int8 *)(v40 + 26), v19);
          else
            memmove(v39, (const void *)(v40 + 26), 2LL * v19);
        }
        else
        {
          memmove(v39, v22, 2LL * v19);
        }
      }
      else
      {
        v23 = *(_QWORD *)&v21[1].Privilege[0].Luid.HighPart;
        if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
          v24 = sub_1406BF400(v23, v21[2].PrivilegeCount, &v43);
        else
          v24 = sub_1407C9820(v23);
        v25 = v24;
        v26 = *((_QWORD *)v13 + 1);
        v27 = (_WORD *)(v26 + 2LL * v20);
        if ( (*(_BYTE *)(v25 + 2) & 0x20) != 0 )
        {
          if ( v19 )
          {
            v28 = (unsigned __int8 *)(v25 + 76);
            v29 = v19;
            do
            {
              v30 = *v28++;
              *v27++ = v30;
              --v29;
            }
            while ( v29 );
          }
        }
        else
        {
          memmove((void *)(v26 + 2LL * v20), (const void *)(v25 + 76), 2LL * v19);
        }
        v31 = *(_QWORD *)&v21[1].Privilege[0].Luid.HighPart;
        if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
          sub_1406BF450(v31, &v43);
        else
          sub_1407C97C0(v31, &v43);
      }
      v14 = v20 - 1;
      *(_WORD *)(*((_QWORD *)v13 + 1) + 2LL * v14) = 92;
      v6 = *(_QWORD *)(v6 + 72);
      goto LABEL_27;
    }
    v2 = -1073741670;
  }
LABEL_29:
  if ( v8 )
    SeFreePrivileges(v8);
  return v2;
}
