/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1407B3DD0
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 *     sub_14067A4C4 @ 0x14067A4C4 (sub_14067A4C4.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_1406BCC20 @ 0x1406BCC20 (sub_1406BCC20.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140753F64 @ 0x140753F64 (sub_140753F64.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, int a3, char a4, _QWORD *a5)
{
  unsigned int v6; // r12d
  unsigned int v7; // r9d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // r14
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // r8
  unsigned __int16 *v14; // r13
  unsigned __int16 *v15; // rsi
  unsigned int v16; // r15d
  unsigned int v17; // r11d
  unsigned int v18; // r9d
  unsigned int v19; // edi
  __int16 v20; // r14
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned int v24; // edi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  int v28; // r9d
  unsigned int v29; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v31; // rdi
  ACL *v32; // rbx
  char v33; // r13
  int v34; // ecx
  int v35; // ebx
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  unsigned int v39; // ecx
  size_t Size; // [rsp+20h] [rbp-D8h]
  unsigned int v41; // [rsp+28h] [rbp-D0h]
  unsigned int v42; // [rsp+30h] [rbp-C8h]
  int v43; // [rsp+34h] [rbp-C4h]
  unsigned int v44; // [rsp+38h] [rbp-C0h]
  unsigned int v45; // [rsp+3Ch] [rbp-BCh]
  _BYTE *v46; // [rsp+48h] [rbp-B0h]
  void *v47; // [rsp+50h] [rbp-A8h]
  int v48; // [rsp+58h] [rbp-A0h]
  __int128 v49; // [rsp+60h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-88h]
  unsigned __int16 *v51; // [rsp+78h] [rbp-80h]
  unsigned __int16 *Src; // [rsp+80h] [rbp-78h]
  unsigned int v53; // [rsp+88h] [rbp-70h]
  unsigned int v54; // [rsp+8Ch] [rbp-6Ch]
  __int128 v55; // [rsp+90h] [rbp-68h]
  __int16 v56; // [rsp+100h] [rbp+8h]

  DWORD1(v49) = 0;
  v6 = 0;
  LOBYTE(v48) = 0;
  v41 = 0;
  LOBYTE(v43) = 0;
  Size = 0LL;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v55 = *(_OWORD *)a1;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    LOBYTE(v43) = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v55 = *(_OWORD *)a1;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v55 != 1 )
    return 3221225560LL;
  LOBYTE(v49) = 1;
  BYTE1(v49) = BYTE1(v8);
  v9 = v8 >> 16;
  v10 = BYTE2(v8);
  WORD1(v49) = WORD1(v8) & 0x7FFF;
  if ( (v8 & 0x80000000) == 0 )
  {
    v12 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    v11 = HIDWORD(v8);
    if ( (_DWORD)v11 )
      v12 = (_BYTE *)(a1 + v11);
    else
      v12 = 0LL;
  }
  v47 = v12;
  *((_QWORD *)&v49 + 1) = v12;
  if ( (v9 & 0x8000u) == 0LL )
  {
    v13 = *(_BYTE **)(a1 + 16);
    goto LABEL_16;
  }
  if ( DWORD2(v55) )
  {
    v13 = (_BYTE *)(a1 + DWORD2(v55));
LABEL_16:
    v46 = v13;
    goto LABEL_17;
  }
  v13 = 0LL;
  v46 = 0LL;
LABEL_17:
  v50 = (unsigned __int64)v13;
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x8000u) == 0LL )
    {
      v14 = *(unsigned __int16 **)(a1 + 24);
    }
    else
    {
      if ( HIDWORD(v55) )
        v14 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v55 + 1)));
      else
        v14 = 0LL;
      v13 = v46;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v51 = v14;
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 0x8000u) == 0LL )
    {
      v15 = *(unsigned __int16 **)(a1 + 32);
    }
    else if ( v7 )
    {
      v15 = (unsigned __int16 *)(a1 + v7);
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  Src = v15;
  v42 = 0;
  v44 = 0;
  v16 = 0;
  v45 = 0;
  v17 = 0;
  v53 = 0;
  v18 = 0;
  v19 = 0;
  v54 = 0;
  v56 = v10 & 0x10;
  if ( (v10 & 0x10) != 0 && v14 )
  {
    if ( a2 )
    {
      v37 = (unsigned __int64)(v14 + 1);
      if ( v37 >= 0x7FFFFFFF0000LL )
        v37 = 0x7FFFFFFF0000LL;
      v38 = *(unsigned __int16 *)v37;
      v39 = *(unsigned __int16 *)v37;
      v42 = v39;
      v44 = v39;
      if ( *(_WORD *)v37 )
      {
        if ( ((unsigned __int8)v51 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = v51;
        if ( (unsigned __int64)v51 + v38 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v51 + v38) < v51 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v14 = v51;
      }
      v13 = (_BYTE *)v50;
      v46 = (_BYTE *)v50;
      v47 = v12;
      v10 = BYTE2(v49);
      v16 = 0;
      LOBYTE(v43) = 0;
      Size = 0LL;
    }
    else
    {
      v39 = v14[1];
      v42 = v39;
      v44 = v39;
    }
    v17 = (v39 + 3) & 0xFFFFFFFC;
    v53 = v17;
    if ( v17 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v14 = 0LL;
    v51 = 0LL;
  }
  v20 = v10 & 4;
  if ( v20 && v15 )
  {
    if ( a2 )
    {
      v21 = (unsigned __int64)(v15 + 1);
      if ( v21 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v22 = *(unsigned __int16 *)v21;
      v16 = *(unsigned __int16 *)v21;
      v45 = v16;
      if ( *(_WORD *)v21 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = Src;
        if ( (unsigned __int64)Src + v22 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v22) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v15 = Src;
      }
      v14 = v51;
      v13 = (_BYTE *)v50;
      v46 = (_BYTE *)v50;
      v47 = v12;
      v42 = v44;
      LOBYTE(v43) = 0;
      Size = 0LL;
    }
    else
    {
      v16 = v15[1];
      v45 = v16;
    }
    v6 = (v16 + 3) & 0xFFFFFFFC;
    if ( v6 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v15 = 0LL;
    Src = 0LL;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v23 = (unsigned __int64)(v12 + 1);
      if ( v23 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v48 = *(unsigned __int8 *)v23;
      v24 = 4 * v48 + 8;
      HIDWORD(Size) = v24;
      v41 = v24;
      if ( 4 * v48 == -8 )
      {
        v47 = (void *)*((_QWORD *)&v49 + 1);
      }
      else
      {
        if ( (BYTE8(v49) & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = (void *)*((_QWORD *)&v49 + 1);
        v25 = *((_QWORD *)&v49 + 1) + v24;
        if ( v25 > 0x7FFFFFFF0000LL || v25 < *((_QWORD *)&v49 + 1) )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v15 = Src;
      v14 = v51;
      v13 = (_BYTE *)v50;
      v46 = (_BYTE *)v50;
      v42 = v44;
      v16 = v45;
      LOBYTE(v43) = 0;
      LODWORD(Size) = 0;
    }
    else
    {
      LOBYTE(v48) = v12[1];
      v24 = 4 * (unsigned __int8)v48 + 8;
      v41 = v24;
      HIDWORD(Size) = v24;
    }
    v19 = (v24 + 3) & 0xFFFFFFFC;
    v54 = v19;
  }
  if ( v13 )
  {
    if ( a2 )
    {
      v26 = (unsigned __int64)(v13 + 1);
      if ( v26 >= 0x7FFFFFFF0000LL )
        v26 = 0x7FFFFFFF0000LL;
      v43 = *(unsigned __int8 *)v26;
      LODWORD(Size) = 4 * v43 + 8;
      if ( 4 * v43 == -8 )
      {
        v46 = (_BYTE *)v50;
      }
      else
      {
        if ( (v50 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v46 = (_BYTE *)v50;
        v27 = v50 + (unsigned int)(4 * v43 + 8);
        if ( v27 > 0x7FFFFFFF0000LL || v27 < v50 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v15 = Src;
      v14 = v51;
      v47 = (void *)*((_QWORD *)&v49 + 1);
      v42 = v44;
      v16 = v45;
      HIDWORD(Size) = v41;
      v28 = 4 * v43 + 8;
    }
    else
    {
      LOBYTE(v43) = v13[1];
      v28 = 4 * (unsigned __int8)v43 + 8;
      LODWORD(Size) = v28;
    }
    v18 = (v28 + 3) & 0xFFFFFFFC;
  }
  v29 = v17 + 20 + v6 + v18 + v19;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a3 | 0x400), v29, 0x63536553u);
  v31 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v29);
  *(_OWORD *)v31 = v49;
  v31[4] = v50;
  v32 = (ACL *)(v31 + 5);
  *((_WORD *)v31 + 1) |= 0x8000u;
  if ( v56 && v14 )
  {
    memmove(v31 + 5, v14, v42);
    v33 = a2;
    if ( a2 && !sub_140753F64((ACL *)(v31 + 5), v42) )
      goto LABEL_126;
    v31[3] = 20;
    *((_WORD *)v31 + 11) = v53;
    v32 = (ACL *)((char *)v32 + v53);
  }
  else
  {
    v31[3] = 0;
    v33 = a2;
  }
  if ( v20 && v15 )
  {
    memmove(v32, v15, v16);
    if ( !v33 || v16 >= 8 && v16 == v32->AclSize && RtlValidAcl(v32) )
    {
      v31[4] = (_DWORD)v32 - (_DWORD)v31;
      v32->AclSize = v6;
      v32 = (ACL *)((char *)v32 + v6);
      goto LABEL_88;
    }
LABEL_126:
    ExFreePoolWithTag(v31, 0);
    return 3221225591LL;
  }
  v31[4] = 0;
LABEL_88:
  if ( !v47 )
  {
    v34 = 0;
    goto LABEL_92;
  }
  memmove(v32, v47, HIDWORD(Size));
  v32->Sbz1 = v48;
  if ( !v33 || RtlValidSid(v32) )
  {
    v34 = (_DWORD)v32 - (_DWORD)v31;
    v32 = (ACL *)((char *)v32 + v54);
LABEL_92:
    v31[1] = v34;
    if ( !v46 )
    {
      v35 = 0;
      goto LABEL_96;
    }
    memmove(v32, v46, (unsigned int)Size);
    v32->Sbz1 = v43;
    if ( !v33 || RtlValidSid(v32) )
    {
      v35 = (_DWORD)v32 - (_DWORD)v31;
LABEL_96:
      v31[2] = v35;
      *a5 = v31;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v31, 0);
  return 3221225592LL;
}
