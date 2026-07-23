/*
 * XREFs of MiTerminateWsleCluster @ 0x140279430
 * Callers:
 *     MiAppendWsleCluster @ 0x140273400 (MiAppendWsleCluster.c)
 *     MiDeleteVaTail @ 0x1402793B0 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x140280940 (MiDeletePteWsleCluster.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x140317F90 (MiCountWslesInPageTable.c)
 *     MiCompressTbFlushList @ 0x14033E668 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x1403482A4 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 *a1)
{
  unsigned __int64 v2; // r15
  __int64 result; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  char v7; // al
  unsigned __int8 v8; // al
  __int64 Process; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // cl
  __int64 v23; // r14
  unsigned __int64 v24; // r15
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int8 *v28; // rbx
  _DWORD *v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 *v32; // rbx
  __int64 v33; // rbx
  char v34; // r11
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // al
  int v38; // edx
  unsigned int v39; // r14d
  unsigned __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // r14
  __int64 v55; // rdi
  unsigned __int64 v56; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  signed __int32 v60[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v61; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-B8h]
  _OWORD v65[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+90h] [rbp-70h] BYREF
  __int16 v68; // [rsp+94h] [rbp-6Ch]
  __int16 v69; // [rsp+96h] [rbp-6Ah]
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v73[8]; // [rsp+150h] [rbp+50h] BYREF

  v69 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = a1[1];
  result = 0LL;
  v63 = v2;
  v66 = 0LL;
  memset(v65, 0, sizeof(v65));
  if ( !v2 )
    return result;
  v4 = 0xFFFFF68000000000uLL;
  v5 = *a1;
  v62 = v5;
  v6 = (__int64)(v2 << 25) >> 16;
  v7 = *(_BYTE *)(v5 + 184);
  v64 = v6;
  v8 = v7 & 7;
  if ( v8 )
  {
    Process = 2LL;
    if ( v8 >= 2u )
      Process = 0LL;
  }
  else
  {
    Process = 1LL;
  }
  v70 = 20LL;
  v67 = Process;
  v68 = 0;
  v71 = 0LL;
  Base[0] = 0LL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  v11 = 0xFFFFF6FB40000000uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v28 = (unsigned __int8 *)a1 + 28;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 8 )
    {
      v54 = 0LL;
      if ( a1[2] )
      {
        v55 = (__int64)(v2 << 25) >> 16;
        v56 = v2;
        do
        {
          MI_READ_PTE_LOCK_FREE(v56);
          MiUnlockWsle(v62, v55);
          ++v54;
          v56 += 8LL;
          v55 += 4096LL;
        }
        while ( v54 < a1[2] );
        v2 = v63;
        v28 = (unsigned __int8 *)a1 + 28;
        v6 = v64;
        v5 = v62;
      }
    }
    v29 = a1 + 3;
    if ( (a1[3] & 4) == 0 )
      MiInsertTbFlushEntry(&v67, v6, a1[2], 0LL);
    goto LABEL_28;
  }
  v12 = 0LL;
  if ( !a1[2] )
    goto LABEL_27;
  v13 = v64;
  v14 = v2;
  v15 = 0xFFFFF6FB7FFFFFFFuLL;
  do
  {
    v16 = *(_QWORD *)v14;
    if ( v14 < 0xFFFFF6FB7DBED000uLL || v14 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v17 = *(_QWORD *)v14;
      v18 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v61 = v18;
    }
    else
    {
      if ( (MiFlags & 0x600000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 && (v16 & 1) != 0 && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v49 = *(_QWORD *)(Process + 1928);
          if ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 8 * ((v14 >> 3) & 0x1FF));
            v51 = v16 | 0x20;
            if ( (v50 & 0x20) == 0 )
              v51 = *(_QWORD *)v14;
            v16 = v51;
            if ( (v50 & 0x42) != 0 )
              v16 = v51 | 0x42;
          }
        }
      }
      v52 = *(_QWORD *)v14;
      v18 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v61 = v18;
      if ( (unsigned int)MiPteHasShadow(Process, v52, v4) )
        goto LABEL_13;
    }
    Process = ((unsigned int)MiFlags >> 26) & 3;
    if ( (unsigned int)Process <= 1 )
    {
      if ( !(_DWORD)Process )
        goto LABEL_13;
      if ( v14 >= v11 && v14 <= v15 && (v17 & 0x80u) == 0LL )
        LOBYTE(v17) = 32;
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v17 & 0x20) == 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v34 = _InterlockedExchange64((volatile __int64 *)v14, v18);
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= v10 )
      {
        MiWritePteShadow(v14, v18);
        v4 = 0xFFFFF68000000000uLL;
        v11 = 0xFFFFF6FB40000000uLL;
      }
      if ( (v34 & 0x20) == 0 )
        goto LABEL_25;
      goto LABEL_16;
    }
LABEL_13:
    if ( MiPteInShadowRange(v14) && (unsigned int)MiPteHasShadow(v20, v19, v21) )
    {
      *(_QWORD *)v14 = v18;
      MiWritePteShadow(v14, v18);
    }
    else
    {
      *(_QWORD *)v14 = v18;
    }
    v4 = 0xFFFFF68000000000uLL;
LABEL_16:
    v22 = v68;
    v23 = 1LL;
    v24 = v13;
    if ( v67 != 1 && (v68 & 8) == 0 && v13 >= v4 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v22 = v68 | 8;
      LOBYTE(v68) = v68 | 8;
    }
    v25 = HIDWORD(v70);
    if ( HIDWORD(v70) )
    {
      if ( (v22 & 4) == 0 )
      {
        v26 = Base[HIDWORD(v70) - 1];
        if ( (v26 & 0xC00) == 0 )
        {
          v27 = Base[HIDWORD(v70) - 1] & 0x3FFLL;
          if ( (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) == v13 && v27 + 1 >= v27 && v27 + 1 <= 0x3FF )
          {
            ++v71;
            Process = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(v26 + 1)) & 0x3FF;
            Base[HIDWORD(v70) - 1] = Process;
LABEL_24:
            v11 = 0xFFFFF6FB40000000uLL;
            v4 = 0xFFFFF68000000000uLL;
            goto LABEL_25;
          }
        }
      }
    }
    if ( (unsigned int)MiCanMergeTbFlushEntryBackwards(&v67, v13, 1LL, 0LL) )
    {
      v53 = Base[v25 - 1];
      ++v71;
      Process = (v53 - 4096) ^ ((unsigned __int16)(v53 - 4096) ^ (unsigned __int16)(v53 - 4096 + 1)) & 0x3FF;
      Base[v25 - 1] = Process;
      goto LABEL_24;
    }
    if ( v25 >= (unsigned int)v70 )
    {
      HIBYTE(v68) = 1;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v35 = (unsigned __int64)(v23 - 1) > 0x3FF ? 1024LL : v23;
      v36 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
      v23 -= v35;
      v24 += v35 << 12;
      Process = v25;
      Base[v25] = v36;
      v71 += v35;
      v25 = HIDWORD(v70) + 1;
      HIDWORD(v70) = v25;
      if ( v25 == (_DWORD)v70 && (v68 & 4) == 0 )
      {
        qsort(Base, v25, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(&v67);
        v25 = HIDWORD(v70);
        if ( HIDWORD(v70) == (_DWORD)v70 )
          break;
      }
      if ( !v23 )
        goto LABEL_24;
    }
    v4 = 0xFFFFF68000000000uLL;
    v11 = 0xFFFFF6FB40000000uLL;
    if ( v23 )
    {
      HIBYTE(v68) = 1;
      v71 = HIDWORD(v70);
    }
LABEL_25:
    ++v12;
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    v14 += 8LL;
    v15 = 0xFFFFF6FB7FFFFFFFuLL;
    v13 += 4096LL;
  }
  while ( v12 < a1[2] );
  v2 = v63;
  v5 = v62;
LABEL_27:
  v6 = v64;
  v28 = (unsigned __int8 *)a1 + 28;
  v29 = a1 + 3;
LABEL_28:
  MiRemoveWsle(v5, v6, a1[2], *v28, 10, *v29 & 1);
  v30 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v31 = *(_QWORD *)v30;
  if ( v30 >= 0xFFFFF6FB7DBED000uLL
    && v30 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v58 = *((_QWORD *)&Flink->Flink + ((v30 >> 3) & 0x1FF));
      v59 = v31 | 0x20;
      if ( (v58 & 0x20) == 0 )
        v59 = v31;
      v31 = v59;
      if ( (v58 & 0x42) != 0 )
        v31 = v59 | 0x42;
    }
  }
  v63 = v31;
  v32 = (unsigned __int64 *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL);
  if ( ((*(_DWORD *)v32 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(0xFFFFFFFFFFLL, v6, v73);
    v37 = 8;
    while ( 1 )
    {
      v38 = v73[(unsigned __int8)--v37];
      if ( v38 )
        break;
      if ( !v37 )
        goto LABEL_30;
    }
    *v32 = *v32 & 0xFFFFFFFFFFFE000FuLL | (16 * (v38 & 0x3FF | ((unsigned __int64)(v37 & 7) << 10)));
  }
LABEL_30:
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v39 = (2 * (*v29 & 8)) | 4;
    if ( (*(_BYTE *)v29 & 0x10) == 0 )
      v39 = 2 * (*v29 & 8);
    v40 = 0LL;
    if ( a1[2] )
    {
      while ( 2 )
      {
        MiDeleteValidSystemPage(v62, v2, v39, v65);
        if ( (*v29 & 4) != 0 )
        {
          v61 = 0LL;
          MiPteInShadowRange((unsigned __int64)&v61);
          _InterlockedOr(v60, 0);
          v41 = MiSwizzleInvalidPte((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
          if ( !(_DWORD)v43 )
            goto LABEL_56;
          if ( (unsigned int)MiPteHasShadow(v42, v41, v43) )
          {
            if ( !HIBYTE(word_140C66CFC) && (v41 & 1) != 0 )
              v41 |= 0x8000000000000000uLL;
            v61 = v41;
            MiWritePteShadow(&v61, v41);
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v41 & 1) != 0 )
            {
              v41 |= 0x8000000000000000uLL;
            }
LABEL_56:
            v61 = v41;
          }
          v44 = v61;
          if ( MiPteInShadowRange(v2) )
          {
            if ( !(unsigned int)MiPteHasShadow(v46, v45, v47) )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v44 & 1) != 0 )
              {
                v44 |= 0x8000000000000000uLL;
              }
              goto LABEL_58;
            }
            if ( !HIBYTE(word_140C66CFC) && (v44 & 1) != 0 )
              v44 |= 0x8000000000000000uLL;
            *(_QWORD *)v2 = v44;
            MiWritePteShadow(v2, v44);
          }
          else
          {
LABEL_58:
            *(_QWORD *)v2 = v44;
          }
          v48 = v61;
          if ( qword_140C65B40 && (v61 & 0x10) == 0 )
            v48 = v61 & ~qword_140C65B40;
          if ( (v48 & 0xFFFFFFFF00000000uLL) == 0 )
            MiInsertTbFlushEntry(&v67, v6, 1LL, 0LL);
        }
        ++v40;
        v2 += 8LL;
        v6 += 4096LL;
        if ( v40 >= a1[2] )
          break;
        continue;
      }
    }
  }
  v33 = 0LL;
  if ( (*(_BYTE *)v29 & 1) != 0 )
    v33 = *((_QWORD *)&v65[0] + 1);
  MiFlushTbList(&v67);
  result = v33;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
