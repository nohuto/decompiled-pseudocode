/*
 * XREFs of sub_14021FD60 @ 0x14021FD60
 * Callers:
 *     sub_14021FCD0 @ 0x14021FCD0 (sub_14021FCD0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

int __fastcall sub_14021FD60(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // r10d
  unsigned __int8 v3; // r8
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 *v7; // rsi
  char v8; // al
  bool v9; // al
  int v10; // edx
  _BOOL8 v11; // rdi
  unsigned int v12; // ecx
  char v13; // r8
  char v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  unsigned __int8 v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // r8d
  int v24; // r15d
  unsigned int v25; // eax
  bool v26; // cf
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  const GUID *ActivityId; // r9
  const EVENT_DESCRIPTOR *v31; // r11
  int *v32; // rax
  REGHANDLE v33; // r10
  ULONGLONG Keyword; // r8
  UCHAR v35; // cl
  unsigned int v36; // ecx
  unsigned int v37; // eax
  char v38; // r8
  unsigned int v39; // r10d
  bool v40; // cc
  char v41; // al
  char v42; // al
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v46; // [rsp+50h] [rbp-79h]
  char v47; // [rsp+54h] [rbp-75h]
  char v48; // [rsp+55h] [rbp-74h]
  int v49; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v51; // [rsp+68h] [rbp-61h]
  unsigned int v52; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v53; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-49h] BYREF
  _BOOL8 v55; // [rsp+88h] [rbp-41h]
  __int64 v56; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int *v58; // [rsp+B0h] [rbp-19h]
  __int64 v59; // [rsp+B8h] [rbp-11h]
  unsigned int *v60; // [rsp+C0h] [rbp-9h]
  __int64 v61; // [rsp+C8h] [rbp-1h]
  unsigned int *v62; // [rsp+D0h] [rbp+7h]
  __int64 v63; // [rsp+D8h] [rbp+Fh]
  unsigned int *v64; // [rsp+E0h] [rbp+17h]
  __int64 v65; // [rsp+E8h] [rbp+1Fh]

  v1 = a1[1];
  v2 = 0;
  v3 = dword_140D06BEC;
  v5 = *a1;
  v6 = a1[2];
  v56 = *(_QWORD *)(v1 + 8);
  v46 = 0;
  v51 = 0;
  v49 = 1;
  if ( (unsigned int)dword_140D06BEC > 0x64 )
    v3 = 100;
  v7 = &off_140C03040[534 * dword_140C232CC + 5];
  if ( v6 && off_140C03040 == (__int64 *)qword_140C1D028 && byte_140C2330C && *(_BYTE *)(v6 + 233) < v3 )
  {
    v2 = 4096;
    v7 = (__int64 *)((char *)&unk_140C1D088 + 4272 * dword_140C232CC);
    v46 = 4096;
  }
  if ( (unsigned __int8)byte_140D06992 > 1u )
  {
    if ( *a1 )
    {
      v8 = *(_BYTE *)(*a1 + 301);
      goto LABEL_8;
    }
  }
  else if ( *((_BYTE *)a1 + 64) )
  {
    v8 = *((_BYTE *)a1 + 88);
LABEL_8:
    v9 = v8 != 0;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  v10 = *((_DWORD *)v7 + 14);
  v11 = v9;
  v55 = v9;
  v12 = *((unsigned __int8 *)v7 + v9 + 38);
  v13 = *((_BYTE *)v7 + v9 + 34);
  v14 = *((_BYTE *)v7 + v9 + 121);
  v54 = *((unsigned __int8 *)v7 + v9 + 30);
  v53 = *((unsigned __int8 *)v7 + v9 + 32);
  v48 = *((_BYTE *)v7 + v9 + 36);
  v47 = v13;
  v52 = *((unsigned __int8 *)v7 + v9 + 40);
  v50 = v12;
  v15 = (v12 + v52) >> 1;
  if ( !v6 )
    goto LABEL_12;
  v16 = *((_DWORD *)v7 + v9 + 23);
  v17 = *((_DWORD *)v7 + v11 + 21);
  if ( v16 == v17 )
  {
    *(_BYTE *)(v1 + 60) = 0;
    goto LABEL_12;
  }
  v38 = *(_BYTE *)(v1 + 60);
  v39 = *(_DWORD *)(v6 + 240);
  if ( !v38 )
  {
    v26 = v39 < v16;
    v2 = v46;
    if ( v26 )
    {
      *(_BYTE *)(v1 + 61) = 0;
    }
    else
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v46 | 0x100000;
      v46 |= 0x100000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 102) )
      {
        *(_WORD *)(v1 + 60) = 1;
        v38 = 1;
      }
    }
    goto LABEL_79;
  }
  v40 = v39 <= v17;
  v2 = v46;
  if ( v40 )
  {
    ++*(_BYTE *)(v1 + 61);
    v2 = v46 | 0x80000;
    v46 |= 0x80000u;
    if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 100) )
    {
      *(_WORD *)(v1 + 60) = 0;
      v38 = 0;
    }
LABEL_79:
    if ( !v38 )
      goto LABEL_83;
    goto LABEL_82;
  }
  *(_BYTE *)(v1 + 61) = 0;
LABEL_82:
  v2 |= 0x200000u;
  v46 = v2;
LABEL_83:
  v13 = v47;
LABEL_12:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || dword_140D06AB4 )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v5 + 444);
  }
  if ( !*(_BYTE *)(v5 + 505) )
  {
    v21 = v18;
    v24 = v2 | 0x40000;
    goto LABEL_39;
  }
  if ( *((_BYTE *)a1 + 64) && *((_BYTE *)a1 + 92) && v14 )
  {
    v21 = v18;
    v24 = v2 | 1;
    if ( v14 == 1 )
      v21 = 1;
    goto LABEL_39;
  }
  v19 = byte_140D05248;
  if ( (unsigned __int8)byte_140D05248 > 0x64u )
    v19 = 100;
  if ( !(_BYTE)v15 )
  {
    v41 = v48;
    if ( !v48 )
      v41 = 2;
    v48 = v41;
    v42 = v13;
    if ( !v13 )
      v42 = 2;
    v47 = v42;
  }
  v20 = *((_DWORD *)a1 + 10);
  v21 = *(_DWORD *)(v1 + 56);
  if ( dword_140D05150 )
  {
    v51 = v20 / *((unsigned __int16 *)a1 + 29);
    v22 = v51;
    if ( dword_140D05150 == 2 )
      v21 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v22 = v20 / v21;
    v51 = v20 / v21;
  }
  v23 = v21;
  if ( v22 > v52 )
  {
    if ( v21 < v18 )
    {
      switch ( v48 )
      {
        case 2:
          v21 = v18;
          v24 = v46 | 0x40;
          break;
        case 0:
          v37 = v20 / (unsigned __int8)v15;
          v24 = v46 | 0x10;
          v21 = v37;
          if ( v37 >= v18 )
            v21 = v18;
          goto LABEL_33;
        case 1:
          v21 += dword_140D050DC;
          v24 = v46 | 0x20;
          break;
        case 3:
          if ( v22 < v19 )
            v43 = v20 / (unsigned __int8)v15;
          else
            v43 = v20 / v50;
          v21 = v43;
          v24 = v46 | 0x80;
          break;
        default:
          v24 = v46;
          break;
      }
      if ( v21 >= v18 )
        v21 = v18;
      goto LABEL_33;
    }
LABEL_32:
    v24 = v46;
    goto LABEL_33;
  }
  if ( v22 >= v50 || v21 <= 1 )
    goto LABEL_32;
  if ( v47 == 1 )
  {
    v24 = v46 | 0x200;
    if ( v21 > dword_140D050DC )
    {
      v21 -= dword_140D050DC;
      goto LABEL_33;
    }
LABEL_106:
    v21 = 1;
    v24 |= 0x400u;
    goto LABEL_33;
  }
  if ( !v47 )
  {
    v36 = (unsigned __int8)v15;
    v24 = v46 | 0x100;
    v21 = v20 / v36;
    goto LABEL_33;
  }
  v24 = v46;
  if ( v47 == 2 )
    goto LABEL_106;
LABEL_33:
  if ( dword_140C204A8 == 5 )
    goto LABEL_36;
  v25 = *(_DWORD *)(v5 + 984);
  v26 = v21 < v23;
  if ( v21 > v23 )
  {
    if ( v25 < v53 )
    {
LABEL_107:
      v24 |= 0x800u;
      v21 = v23;
      goto LABEL_36;
    }
    v26 = v21 < v23;
  }
  if ( v26 && v25 < v54 )
    goto LABEL_107;
LABEL_36:
  if ( v6 )
  {
    v27 = *(unsigned __int8 *)(v6 + 237);
    if ( (_BYTE)v27 )
    {
      v24 |= 0x10000u;
      *(_BYTE *)(v6 + 237) = 0;
      if ( v21 <= v27 )
        v21 = v27;
    }
    v28 = *(unsigned __int8 *)(v6 + 238);
    if ( (_BYTE)v28 )
    {
      v24 |= 0x20000u;
      *(_BYTE *)(v6 + 238) = 0;
      if ( v21 <= v28 )
        v21 = v28;
    }
  }
LABEL_39:
  v29 = sub_14042A5E0(v56, v21, *(unsigned int *)(v5 + 452));
  ActivityId = 0LL;
  *(_DWORD *)(v1 + 56) = v29;
  v52 = v29;
  v50 = v24;
  v53 = v21;
  v54 = v51;
  v49 = 0;
  if ( *((_BYTE *)a1 + 64) )
  {
    v31 = &stru_14000E728;
    LOWORD(v49) = *((unsigned __int8 *)a1 - 33760);
    BYTE2(v49) = *((_BYTE *)a1 - 33759);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  else
  {
    v31 = (const EVENT_DESCRIPTOR *)(&stru_140014918.decVal + 1);
    v49 = *(_DWORD *)(a1[1] + 20);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  v32 = &v49;
  UserData.Ptr = (ULONGLONG)&v49;
  if ( byte_140C5AE30 )
  {
    v33 = qword_140C1F580;
    if ( qword_140C1F580 )
    {
      if ( (v32 = *(int **)(qword_140C1F580 + 32), Keyword = v31->Keyword, v32[24])
        && ((v35 = *((_BYTE *)v32 + 100), v31->Level <= v35) || !v35)
        && ((v32[26] & 0x40) != 0 && !Keyword
         || (Keyword & *((_QWORD *)v32 + 14)) != 0
         && (v44 = *((_QWORD *)v32 + 15), LODWORD(v32) = v44 & Keyword, (v44 & Keyword) == v44))
        || *(_BYTE *)(qword_140C1F580 + 101)
        && (LODWORD(v32) = sub_1403031F0(*(_QWORD *)(qword_140C1F580 + 40) + 96LL, v31->Level, Keyword), (_BYTE)v32) )
      {
        v59 = 4LL;
        v58 = &v54;
        v61 = 4LL;
        v60 = &v53;
        v63 = 4LL;
        v62 = &v52;
        v65 = 4LL;
        v64 = &v50;
        LODWORD(v32) = EtwWriteEx(v33, v31, 0LL, (ULONG)ActivityId, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (int)v32;
}
