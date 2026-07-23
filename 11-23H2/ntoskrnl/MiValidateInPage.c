/*
 * XREFs of MiValidateInPage @ 0x1402DC710
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiValidateImagePfn @ 0x1406B1028 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1406B1240 (SeValidateImageData.c)
 *     MiRelocateImagePfn @ 0x1407444B0 (MiRelocateImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x140A43A44 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r10
  PVOID v4; // r15
  ULONG_PTR v6; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 *v9; // r14
  int v10; // edx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // ebp
  int v19; // ebx
  int v20; // ebp
  int v21; // r12d
  int v22; // edi
  __int64 v23; // rbp
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // r15
  unsigned __int64 v26; // r12
  __int64 v27; // rdi
  BOOL v28; // eax
  __int64 Flink; // rdx
  _KPROCESS *v30; // rcx
  _BOOL8 v31; // r8
  __int64 result; // rax
  __int16 v33; // ax
  PVOID v34; // rax
  int v35; // edi
  int v36; // r8d
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rax
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  ULONG_PTR v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h]
  __int64 v44; // [rsp+50h] [rbp-58h]
  char v45; // [rsp+58h] [rbp-50h]
  char v46; // [rsp+B0h] [rbp+8h]
  unsigned int v47; // [rsp+B8h] [rbp+10h]
  _KPROCESS *Process; // [rsp+C0h] [rbp+18h]
  PVOID v49; // [rsp+C8h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2 + 272;
  v4 = 0LL;
  v47 = 0;
  v46 = 0;
  v6 = **(_QWORD **)(a2 + 208);
  v42 = v6;
  v7 = *(_QWORD *)(v6 + 96);
  if ( *(_QWORD *)(a2 + 256) )
    v3 = *(_QWORD *)(a2 + 256);
  v43 = *(_QWORD *)(v6 + 96);
  v44 = v3;
  v8 = *(unsigned int *)(v3 + 40);
  v9 = (__int64 *)(v3 + 48);
  v10 = *(_DWORD *)(v3 + 44);
  v11 = ((unsigned __int64)(((_WORD)v10 + (unsigned __int16)*(_DWORD *)(v3 + 32)) & 0xFFF) + v8 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = v3 + 8 * ((unsigned int)v11 + 6LL);
  *(_QWORD *)(a2 + 96) += (unsigned int)(v2 - v8 - v10);
  v13 = 2LL;
  v14 = v2 - *(_DWORD *)(v3 + 40) - *(_DWORD *)(v3 + 44);
  *(_DWORD *)(a2 + 188) += ((v14 & 0xFFF) != 0) + (v14 >> 12);
  v15 = *(_QWORD *)(v7 + 40);
  v16 = v15 >> 3;
  if ( v15 >> 3 <= 1 )
    v13 = 0LL;
  v17 = 6 * *v9;
  v18 = (*(_DWORD *)(48 * *v9 - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
  v45 = v18;
  if ( (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 && v16 > 1 )
  {
    v13 = (unsigned int)v13 | 1;
    v19 = v13;
  }
  else
  {
    v19 = v13;
    if ( (MiFlags & 0x20000) != 0 && (v18 & 2) != 0 )
      v46 = 3;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x10000) != 0 )
  {
    v19 |= 4u;
    LOBYTE(v17) = _bittest((const signed __int32 *)&MiFlags, 0xDu);
    if ( ((unsigned __int8)v17 & ((v19 & 1) != 0)) != 0 )
      v19 &= ~4u;
  }
  v20 = v18 & 2;
  if ( v20 && (MiFlags & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
    MiFlushEntireTbDueToAttributeChange(v17, v13, v16);
    v7 = v43;
    v3 = v44;
  }
  v49 = 0LL;
  if ( (v19 & 2) != 0
    && (unsigned int)v11 > 1
    && (v33 = *(_WORD *)(v3 + 10), (v33 & 0x4000) != 0)
    && ((v33 & 5) != 0
      ? (v4 = *(PVOID *)(v3 + 24), v49 = v4)
      : (v34 = MmMapLockedPagesSpecifyCache((PMDL)v3, 0, MmCached, 0LL, 0, 0xC0000010), v7 = v43, v4 = v34, v49 = v34),
        v4) )
  {
    v35 = v15 & 0xFFFFFFF8;
    if ( (v19 & 1) != 0 && !*(_QWORD *)(v7 + 56) )
    {
      result = MiGetSectionStrongImageReference(v7);
      if ( (int)result < 0 )
        return result;
    }
    v36 = (_DWORD)v11 << 12;
    v21 = (int)Process;
    if ( (int)SeValidateImageData(v35, (_DWORD)v4, v36, *(_QWORD *)(a2 + 96), v20 != 0 ? 2 : 0, (__int64)Process) < 0 )
    {
      v4 = 0LL;
      v49 = 0LL;
    }
  }
  else
  {
    v21 = (int)Process;
  }
  if ( (unsigned __int64)v9 >= v12 )
    return v47;
  v22 = v42;
  v23 = 0LL;
  while ( 1 )
  {
    v24 = 48 * *v9 - 0x220000000000LL;
    v19 ^= ((unsigned __int8)v19 ^ (unsigned __int8)(2 * v19)) & 8;
    if ( v24 == qword_140C69700 || (*(_BYTE *)(v24 + 34) & 7) == 7 && *(_QWORD *)(v24 + 8) == -3LL )
      goto LABEL_25;
    if ( v4 )
    {
      MiMarkPfnVerified(v24, v46);
      goto LABEL_19;
    }
    if ( (v19 & 2) != 0 )
    {
      v37 = MiValidateImagePfn(v22, *(_QWORD *)(a2 + 96), v21, -1, BugCheckOnFailure, v45, *v9, 0);
      if ( v37 < 0 )
        break;
    }
LABEL_19:
    if ( (v19 & 8) == 0 )
      goto LABEL_25;
    if ( (*(_BYTE *)(v44 + 10) & 1) != 0 )
    {
      v25 = *(_QWORD *)(v44 + 24) + (v23 >> 3 << 12);
      v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = *(_QWORD *)v26;
      v28 = MiPteInShadowRange(v26);
      v31 = v28;
      if ( v28 )
      {
        if ( (MiFlags & 0x600000) != 0 )
        {
          v30 = KeGetCurrentThread()->ApcState.Process;
          if ( v30->AddressPolicy != 1 && (v27 & 1) != 0 )
          {
            if ( (v27 & 0x20) != 0 && (v27 & 0x42) != 0 )
              goto LABEL_23;
            v30 = KeGetCurrentThread()->ApcState.Process;
            Flink = (__int64)v30[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v39 = *(_QWORD *)(Flink + 8 * ((v26 >> 3) & 0x1FF));
              Flink = v27 | 0x20;
              if ( (v39 & 0x20) == 0 )
                Flink = v27;
              v27 = Flink;
              if ( (v39 & 0x42) != 0 )
                v27 = Flink | 0x42;
            }
          }
        }
      }
      if ( (v27 & 0x42) == 0 )
      {
        v38 = v27 | 0x842;
        if ( !v31 )
          goto LABEL_46;
        if ( (unsigned int)MiPteHasShadow(v30, Flink, v31) )
        {
          if ( !HIBYTE(word_140C66CFC) && (v38 & 1) != 0 )
            v38 |= 0x8000000000000000uLL;
          *(_QWORD *)v26 = v38;
          MiWritePteShadow(v26, v38);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v38 & 1) != 0 )
          {
            v38 |= 0x8000000000000000uLL;
          }
LABEL_46:
          *(_QWORD *)v26 = v38;
        }
        if ( (MiFlags & 0x300) == 0 )
          KeFlushSingleTb(v25, 0LL, 1LL);
      }
    }
    else
    {
      v25 = 0LL;
    }
LABEL_23:
    if ( (int)MiRelocateImagePfn(v42, v25, 0LL, Priority, 33) < 0 )
      goto LABEL_83;
    v22 = v42;
LABEL_25:
    *(_QWORD *)(a2 + 96) += 4096LL;
    ++v9;
    ++*(_DWORD *)(a2 + 188);
    v23 += 8LL;
    if ( (unsigned __int64)v9 >= v12 )
      return v47;
    v4 = v49;
    v21 = (int)Process;
  }
  if ( v37 != -1073741670 )
  {
    v47 = -1073740748;
    if ( (v19 & 1) != 0
      && (((*(_DWORD *)(a2 + 192) & 0x10000) != 0) & _bittest((const signed __int32 *)&MiFlags, 0xDu)) != 0 )
    {
      v19 |= 8u;
    }
    goto LABEL_19;
  }
LABEL_83:
  *(_DWORD *)(a2 + 80) = -1073741670;
  return v47;
}
