/*
 * XREFs of MiRevertValidPte @ 0x140278D10
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14033C8C0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 */

__int64 __fastcall MiRevertValidPte(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  int v8; // r14d
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // edi
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  ULONG_PTR v16; // r13
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  int v19; // r15d
  unsigned __int64 LeafVa; // rbx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 result; // rax
  int v26; // r15d
  BOOL v27; // r12d
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rbx
  unsigned __int8 v37; // dl
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rax
  volatile signed __int32 *v44; // rbx
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rbx
  struct _LIST_ENTRY *v48; // r8
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // [rsp+20h] [rbp-78h]
  int v54; // [rsp+24h] [rbp-74h] BYREF
  __int64 v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h]
  ULONG_PTR v59; // [rsp+48h] [rbp-50h]
  unsigned int v62; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp+20h]

  v63 = a4;
  v5 = 0LL;
  v6 = *(unsigned int *)(a1 + 48);
  v53 = 0;
  v7 = a1;
  v8 = a3;
  v9 = a2;
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v40 = (v6 >> 19) & 3;
    v11 = MiVadPageIndices[v40];
    v62 = v11;
    if ( v11 <= 1 )
      v53 = 2 - v11;
    v41 = MiVadPageSizes[v40];
    v57 = v41;
    if ( v41 == 16 )
    {
      v12 = 16LL;
      v10 = 1LL;
    }
    else
    {
      v12 = 1LL;
      v10 = v41;
    }
  }
  else
  {
    v10 = 1LL;
    v11 = 3;
    v62 = 3;
    v12 = 1LL;
    v57 = 1LL;
  }
  v55 = v12;
  v13 = *(_QWORD *)a2;
  v58 = *(_QWORD *)a2;
  v14 = a2 << 25 >> 16;
  v56 = v14;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v43 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v43 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v43 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
      v14 = v56;
    }
    v58 = v13;
  }
  v15 = a3 & 0x18;
  if ( (v13 & 0x18) == 8 )
  {
    v8 = a3 | 0x18;
    if ( v15 == 24 )
      v8 = a3;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      v8 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v8 = a3 & 0xFFFFFFE7;
  }
  if ( a4 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * a4 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v16 = 0LL;
LABEL_106:
    v59 = v16;
    goto LABEL_11;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  v59 = v16;
  if ( (MiFlags & 0x20000) != 0 && (v8 & 2) != 0 )
  {
    if ( v10 )
    {
      v44 = (volatile signed __int32 *)(v16 + 24);
      v45 = v10;
      do
      {
        v54 = 0;
        while ( _interlockedbittestandset64(v44, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)v44 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v16) )
          MiMarkPfnVerified(v16, 7);
        _InterlockedAnd64((volatile signed __int64 *)v44, 0x7FFFFFFFFFFFFFFFuLL);
        v16 += 48LL;
        v44 += 12;
        --v45;
      }
      while ( v45 );
      v9 = a2;
      a4 = v63;
      v14 = v56;
      v12 = v55;
      v7 = a1;
      v11 = v62;
    }
    v16 += -48 * v10;
    goto LABEL_106;
  }
LABEL_11:
  if ( v11 <= 1 )
    v8 |= 0x4000000u;
  v17 = v8 & 0x1F;
  v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x121;
    v19 = v8 & 0x4000000;
  }
  else
  {
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (v8 & 0x4000000) == 0 )
      {
        v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v17] & 0x7FF0000000000E7FLL | 0x21;
      }
      v46 = MiUserPdeOrAbove(v9, v14, a3);
      v14 = v56;
      v12 = v55;
      v7 = a1;
      if ( v46 )
        v18 |= 4uLL;
    }
    if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
      v18 |= 4uLL;
    v19 = v8 & 0x4000000;
    if ( (v8 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(v14);
    else
      LeafVa = v14;
    if ( LeafVa < 0xFFFF800000000000uLL )
    {
      v21 = HIBYTE(word_140C66CFC);
LABEL_22:
      if ( v21 )
        v18 |= 0x100uLL;
      goto LABEL_24;
    }
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 1
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      if ( LeafVa < qword_140C6A558 || (v21 = HIBYTE(word_140C66CFC), LeafVa > qword_140C67070) )
        v21 = (unsigned __int8)word_140C66CFC;
      v7 = a1;
      v12 = v55;
      goto LABEL_22;
    }
    v12 = v55;
    v7 = a1;
  }
LABEL_24:
  if ( v8 < 0 && (v8 & 5) == 4 )
    v18 |= 0x42uLL;
  if ( (v8 & 0x40000000) != 0 )
  {
    v18 &= ~4uLL;
    v22 = v19;
  }
  else
  {
    v22 = v8 & 0x4000000;
  }
  if ( (v8 & 0x20000000) != 0 )
  {
    v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_140C66CFC << 8)) & 0x100;
    v22 = v19;
  }
  if ( (v8 & 0x8000000) != 0 )
  {
    v18 &= ~0x100uLL;
    v22 = v19;
  }
  if ( v22 )
    v18 |= 0x80uLL;
  v23 = v18 & 0xFAFFFFFFFFFFFFFFuLL;
  v24 = v23 | 0xA00000000000000LL;
  if ( v16 )
  {
    if ( (MiFlags & 0x1000000) != 0 && (v13 & 0x42) == 0x40 )
      v24 = v23 | 0xA00000000000040LL;
  }
  else
  {
    v47 = 0xA00000000000042LL;
    if ( (v8 & 4) == 0 )
      v47 = 0xA00000000000000LL;
    v24 = v23 | v47;
  }
  result = *(_DWORD *)(v7 + 48) & 0x600000;
  v26 = 0;
  v27 = result == 6291456;
  if ( !v12 )
  {
    v36 = a2;
    v35 = v57;
    goto LABEL_50;
  }
  v28 = a2;
  v29 = v63;
  do
  {
    if ( v27 && (MI_READ_PTE_LOCK_FREE(v28) & 0x42) != 0 )
    {
      v39 = MiGetLeafVa(v28);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v39, a1);
      v27 = 0;
    }
    v24 ^= (v24 ^ (v29 << 12)) & 0xFFFFFFFFFF000LL;
    if ( !v26 )
    {
      if ( (MiFlags & 0x300) == 0 )
        goto LABEL_40;
      v38 = *(_QWORD *)v28;
      if ( v28 >= 0xFFFFF6FB7DBED000uLL
        && v28 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v38 & 1) != 0
        && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v48 )
        {
          v49 = *((_QWORD *)&v48->Flink + ((v28 >> 3) & 0x1FF));
          if ( (v49 & 0x20) != 0 )
            v38 |= 0x20uLL;
          if ( (v49 & 0x42) != 0 )
            v38 |= 0x42uLL;
        }
      }
      if ( (v38 & 0x40) != 0 && (v24 & 0x40) == 0 || (v38 & 2) != 0 && (v24 & 2) == 0 || v24 < 0 && v38 >= 0 )
LABEL_40:
        v26 = 1;
    }
    ++v29;
    if ( v62 <= 1 )
    {
      result = MiRewritePteWithLockBit(
                 &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
                 v28,
                 v24,
                 0x7000000000000000LL);
    }
    else
    {
      v30 = *(_QWORD *)v28;
      if ( v28 >= 0xFFFFF6FB7DBED000uLL
        && v28 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v50 )
        {
          v51 = *((_QWORD *)&v50->Flink + ((v28 >> 3) & 0x1FF));
          if ( (v51 & 0x20) != 0 )
            v30 |= 0x20uLL;
          if ( (v51 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
      }
      v31 = v24 ^ (v24 ^ v30) & 0xF00000000000000LL ^ (v30 ^ v24 ^ (v24 ^ v30) & 0xF00000000000000LL) & 0x7000000000000000LL;
      result = MiPteInShadowRange(v28);
      if ( !(_DWORD)result )
        goto LABEL_44;
      if ( !(unsigned int)MiPteHasShadow(v33, v32, v34) )
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (v31 & 1) != 0 )
        {
          result = 0x8000000000000000uLL;
          v31 |= 0x8000000000000000uLL;
        }
LABEL_44:
        *(_QWORD *)v28 = v31;
        goto LABEL_45;
      }
      if ( !HIBYTE(word_140C66CFC) && (v31 & 1) != 0 )
        v31 |= 0x8000000000000000uLL;
      *(_QWORD *)v28 = v31;
      result = MiWritePteShadow(v28, v31);
    }
LABEL_45:
    v28 += 8LL;
    --v55;
  }
  while ( v55 );
  LOBYTE(v13) = v58;
  v16 = v59;
  if ( !v26 )
  {
    v35 = v57;
    goto LABEL_48;
  }
  if ( v53 )
  {
    v36 = a2;
    result = MiInsertLargeTbFlushEntry(a5, v53, a2);
    v35 = v57;
  }
  else
  {
    v35 = v57;
    result = MiInsertTbFlushEntry(a5, v56, v57, 0LL);
LABEL_48:
    v36 = a2;
  }
  v7 = a1;
LABEL_50:
  if ( v35 == 1 && (v13 & 0x42) != 0 )
  {
    if ( v16 )
    {
      if ( (*(_DWORD *)(v7 + 48) & 0x70) != 0x40 || (result = MiRotatedToFrameBuffer(v36), (_DWORD)result) )
      {
        v62 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v62);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        v37 = *(_BYTE *)(v16 + 34);
        if ( (v37 & 0x10) != 0 )
          goto LABEL_67;
        if ( (!_bittest64((const signed __int64 *)(v16 + 16), 0xAu) & (unsigned __int8)~(v37 >> 3)) != 0 )
          v5 = MiCapturePageFileInfoInline(v16 + 16, 1LL, 0LL);
        *(_BYTE *)(v16 + 34) |= 0x10u;
        if ( v5 )
        {
          v52 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return MiReleasePageFileInfo(v52, v5, 1LL);
        }
        else
        {
LABEL_67:
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  return result;
}
