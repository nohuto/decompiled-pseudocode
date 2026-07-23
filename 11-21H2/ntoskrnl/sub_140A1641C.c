/*
 * XREFs of sub_140A1641C @ 0x140A1641C
 * Callers:
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryDirectoryFile @ 0x14041BE00 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140649BD4 @ 0x140649BD4 (sub_140649BD4.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A17288 @ 0x140A17288 (sub_140A17288.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1641C(_WORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int *FileInformation; // r15
  signed int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr10_8
  unsigned __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  const char *v27; // rdx
  NTSTATUS v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r12
  size_t v39; // r13
  size_t v40; // r14
  void *v41; // r15
  PVOID PoolWithTag; // rax
  void *v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // r14
  int v46; // eax
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r15
  unsigned __int128 v54; // rax
  size_t v55; // r14
  void *v56; // r12
  PVOID v57; // rax
  void *v58; // rsi
  unsigned __int64 v59; // rcx
  _OWORD *v60; // rax
  __int64 v61; // rdx
  _WORD *v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  char *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  signed __int64 v68; // r8
  __int16 v69; // r9
  char *v70; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  __int128 v73; // [rsp+80h] [rbp-9h] BYREF
  __int128 v74; // [rsp+90h] [rbp+7h]
  unsigned int *P; // [rsp+F8h] [rbp+6Fh]
  size_t Size; // [rsp+100h] [rbp+77h]
  __int64 v78; // [rsp+108h] [rbp+7Fh]

  if ( a3 == (unsigned __int64 *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  P = (unsigned int *)sub_14075B444((__int64)a1, 0x268uLL);
  FileInformation = P;
  if ( !P )
    return (unsigned int)-1073741801;
  v7 = a3[4];
  if ( !v7 )
  {
LABEL_110:
    v6 = -2147483642;
    goto LABEL_111;
  }
  v8 = a3[4];
  v6 = -1073741595;
  while ( 1 )
  {
    v9 = v7 - 1;
    if ( v9 >= v8
      || (v11 = v9, v10 = a3[3] * v9, !is_mul_ok(a3[3], v11))
      || (v12 = a3[7], v13 = (unsigned __int16 *)(v12 + v10), v12 + v10 < v12)
      || !v13 )
    {
      sub_1406E0C3C(1LL, (__int64)"AslpPathWildcardPeekNode");
      goto LABEL_109;
    }
    if ( !*((_QWORD *)v13 + 3) )
    {
      sub_1406E0C3C(1LL, (__int64)"AslPathWildcardFindNext");
      v14 = a3[4];
      if ( !v14 )
        goto LABEL_27;
      v15 = v14 - 1;
      v16 = a3[3] * (v14 - 1);
      if ( !is_mul_ok(a3[3], v15) || (v17 = a3[7], v18 = v17 + v16, v17 + v16 < v17) || !v18 )
      {
LABEL_26:
        sub_1406E0C3C(1LL, (__int64)"AslpPathWildcardPeekNode");
LABEL_27:
        v27 = "AslpPathWildcardPopNode";
LABEL_28:
        sub_1406E0C3C(1LL, (__int64)v27);
        goto LABEL_86;
      }
      sub_140A17288(v18);
      v19 = a3[4];
      if ( !v19 )
        goto LABEL_86;
      v20 = a3[3];
      v21 = v20 * (v19 - 1);
      if ( !is_mul_ok(v20, v19 - 1) )
        goto LABEL_86;
      v22 = a3[7];
      if ( v22 + v21 < v22 )
        goto LABEL_86;
      memset((void *)(v22 + v21), 0, v20);
      v23 = --a3[4];
      if ( v23 <= 0x10 )
        goto LABEL_86;
      v24 = a3[3];
      v25 = a3[5];
      v26 = v25 * v24;
      goto LABEL_42;
    }
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v13 + 2));
    v28 = ZwQueryDirectoryFile(
            *((HANDLE *)v13 + 3),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            FileInformation,
            0x268u,
            FileBothDirectoryInformation,
            1u,
            &DestinationString,
            0);
    if ( v28 >= 0 )
      break;
    if ( v28 != -2147483642 && v28 != -1073741809 )
    {
      sub_1406E0C3C(1LL, (__int64)"AslPathWildcardFindNext");
      sub_1406E0C3C(2LL, (__int64)"AslPathWildcardFindNext");
    }
    v29 = a3[4];
    if ( !v29 )
      goto LABEL_27;
    v30 = v29 - 1;
    v31 = a3[3] * (v29 - 1);
    if ( !is_mul_ok(a3[3], v30) )
      goto LABEL_26;
    v32 = a3[7];
    v33 = v32 + v31;
    if ( v32 + v31 < v32 || !v33 )
      goto LABEL_26;
    sub_140A17288(v33);
    v34 = a3[4];
    if ( !v34 )
      goto LABEL_86;
    v35 = a3[3];
    v36 = v35 * (v34 - 1);
    if ( !is_mul_ok(v35, v34 - 1) )
      goto LABEL_86;
    v37 = a3[7];
    if ( v37 + v36 < v37 )
      goto LABEL_86;
    memset((void *)(v37 + v36), 0, v35);
    v23 = --a3[4];
    if ( v23 <= 0x10 )
      goto LABEL_86;
    v25 = a3[5];
    v24 = a3[3];
    v26 = v24 * v25;
LABEL_42:
    if ( v26 >= 0x400 && v23 < v25 >> 2 )
    {
      v38 = v25 >> 1;
      v39 = v25 * v24;
      if ( is_mul_ok(v25, v24) )
      {
        v40 = v38 * v24;
        if ( is_mul_ok(v38, v24) )
        {
          v41 = (void *)a3[7];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v38 * v24, 0x72615452u);
          v43 = PoolWithTag;
          if ( v41 )
          {
            if ( !PoolWithTag )
              goto LABEL_86;
            memset(PoolWithTag, 0, v40);
            if ( v39 >= v40 )
              v39 = v40;
            memmove(v43, v41, v39);
            ExFreePoolWithTag(v41, 0x72615452u);
LABEL_55:
            a3[7] = (unsigned __int64)v43;
            a3[5] = v38;
            goto LABEL_86;
          }
          if ( PoolWithTag )
            memset(PoolWithTag, 0, v40);
          if ( v43 )
            goto LABEL_55;
        }
      }
    }
LABEL_86:
    v7 = a3[4];
    v8 = v7;
    if ( !v7 )
      goto LABEL_110;
    FileInformation = P;
  }
  v44 = FileInformation[15];
  if ( v44 == 4 )
  {
    v45 = (__int64)FileInformation + 94;
    if ( *((_WORD *)FileInformation + 47) == 46 )
    {
      if ( *((_WORD *)FileInformation + 48) == 46 )
        goto LABEL_86;
LABEL_59:
      v45 = (__int64)FileInformation + 94;
    }
  }
  else
  {
    if ( v44 != 2 )
      goto LABEL_59;
    v45 = (__int64)FileInformation + 94;
    if ( *((_WORD *)FileInformation + 47) == 46 )
      goto LABEL_86;
  }
  v46 = sub_140A16F94(
          (unsigned int)&v73,
          (_DWORD)v13,
          *((_QWORD *)v13 + 2),
          (FileInformation[14] >> 4) & 1,
          v45,
          FileInformation[15]);
  if ( v46 != -1073741197 )
  {
    if ( v46 != -1073741565 && v46 != -1073741638 )
    {
      if ( v46 < 0 )
      {
        v27 = "AslPathWildcardFindNext";
        goto LABEL_28;
      }
      v47 = a3[4];
      v48 = a3[5];
      if ( v47 >= v48 )
      {
        v49 = v47 + 1;
        if ( v47 + 1 <= v48 )
        {
          v6 = -2147024809;
          goto LABEL_109;
        }
        v50 = a3[6] - 1;
        v51 = v50 + v49;
        if ( v50 + v49 < v49
          || (v52 = a3[3], v53 = v51 & ~v50, v54 = v48 * (unsigned __int128)v52, Size = v54, !is_mul_ok(a3[5], v52))
          || (v78 &= *((_QWORD *)&v54 + 1), v55 = v53 * v52, !is_mul_ok(v53, v52)) )
        {
LABEL_89:
          v6 = -2147483637;
          goto LABEL_109;
        }
        v56 = (void *)a3[7];
        v57 = ExAllocatePoolWithTag(PagedPool, v53 * v52, 0x72615452u);
        v58 = v57;
        if ( v56 )
        {
          if ( !v57 )
            goto LABEL_73;
          memset(v57, 0, v55);
          if ( Size < v55 )
            v55 = Size;
          memmove(v58, v56, v55);
          ExFreePoolWithTag(v56, 0x72615452u);
        }
        else
        {
          if ( v57 )
            memset(v57, 0, v55);
          if ( !v58 )
          {
LABEL_73:
            v6 = -2147024882;
            goto LABEL_109;
          }
        }
        a3[7] = (unsigned __int64)v58;
        a3[5] = v53;
      }
      if ( !is_mul_ok(a3[3], v47) )
        goto LABEL_89;
      v59 = a3[7];
      v60 = (_OWORD *)(v59 + a3[3] * v47);
      if ( (unsigned __int64)v60 < v59 )
        goto LABEL_89;
      *v60 = v73;
      v60[1] = v74;
      ++a3[4];
    }
    goto LABEL_86;
  }
  v6 = sub_140248A04(a1, 0x208uLL, *((_QWORD *)v13 + 1), *v13);
  if ( v6 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1) - 2) == 92 )
      goto LABEL_106;
    v61 = 260LL;
    v62 = a1;
    v63 = 260LL;
    do
    {
      if ( !*v62 )
        break;
      ++v62;
      --v63;
    }
    while ( v63 );
    v64 = (260 - v63) & -(__int64)(v63 != 0);
    v6 = v63 == 0 ? 0xC000000D : 0;
    if ( v63 )
    {
      v65 = (char *)&a1[v64];
      v66 = 260 - v64;
      if ( 260 != v64 )
      {
        v67 = 1LL;
        v68 = (char *)&dword_1400126A8 - v65;
        do
        {
          if ( !v67 )
            break;
          v69 = *(_WORD *)&v65[v68];
          if ( !v69 )
            break;
          *(_WORD *)v65 = v69;
          --v67;
          v65 += 2;
          --v66;
        }
        while ( v66 );
      }
      v70 = v65 - 2;
      if ( v66 )
        v70 = v65;
      v61 = -v66;
      v6 = v61 == 0 ? 0x80000005 : 0;
      *(_WORD *)v70 = 0;
    }
    if ( v6 >= 0 )
    {
LABEL_106:
      v6 = sub_140649BD4(a1, v61, v45, FileInformation[15]);
      if ( v6 >= 0 )
      {
        v6 = 0;
        goto LABEL_111;
      }
    }
  }
LABEL_109:
  sub_1406E0C3C(1LL, (__int64)"AslPathWildcardFindNext");
LABEL_111:
  ExFreePoolWithTag(P, 0x74705041u);
  return (unsigned int)v6;
}
