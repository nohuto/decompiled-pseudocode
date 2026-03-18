/*
 * XREFs of MiBuildReservationCluster @ 0x14059B62C
 * Callers:
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiReferencePageForModifiedWrite @ 0x14028C14C (MiReferencePageForModifiedWrite.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14037E128 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14037E3A0 (MiRefPageFileSpaceBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiGetPageForWriteCluster @ 0x14045C0E8 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14059AAF8 (MiAddToReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14059C8C8 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x14059D028 (MiReleasePageFileSectionInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(unsigned __int64 *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int16 v5; // bx
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  unsigned int v22; // esi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  __int64 v27; // rdi
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  _QWORD *v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 ValidPte; // rbx
  int v37; // r14d
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // r8
  __int64 v42; // r14
  unsigned __int64 v43; // rdi
  __int64 v44; // r14
  __int64 updated; // rbx
  unsigned __int64 v46; // r13
  __int64 v47; // r13
  int v48; // r12d
  __int64 v49; // r9
  ULONG_PTR v50; // r9
  unsigned __int64 v51; // rax
  unsigned int v52; // ecx
  __int64 v53; // r15
  unsigned __int64 v54; // rbx
  __int64 v55; // r15
  __int64 v56; // rbx
  unsigned __int64 *v57; // r14
  ULONG_PTR v58; // r13
  unsigned __int64 v59; // rax
  unsigned __int64 *v60; // r15
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  int v66; // eax
  _DWORD *v67; // r8
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  int v70; // eax
  _DWORD *v71; // r8
  __int64 v72; // rcx
  unsigned int v73; // r8d
  __int64 v74; // rdi
  _DWORD *v75; // rax
  int v77; // [rsp+50h] [rbp-71h]
  __int64 v79; // [rsp+60h] [rbp-61h] BYREF
  __int64 v80; // [rsp+68h] [rbp-59h]
  unsigned int v81; // [rsp+70h] [rbp-51h]
  __int64 v82; // [rsp+78h] [rbp-49h]
  __int128 v83; // [rsp+80h] [rbp-41h] BYREF
  __int128 v84; // [rsp+90h] [rbp-31h]
  __int64 v85; // [rsp+A0h] [rbp-21h]
  _QWORD *v86; // [rsp+A8h] [rbp-19h]
  __int128 v87; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v88; // [rsp+C0h] [rbp-1h]
  __int64 v89; // [rsp+D0h] [rbp+Fh]
  unsigned __int64 *v90; // [rsp+128h] [rbp+67h]

  v90 = a1;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = *(_WORD *)(a2 + 204);
  v77 = 0;
  v85 = 0LL;
  v89 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  MiRefPageFileSpaceBitmaps((int *)a2, (__int64)&v83);
  LODWORD(v79) = 0;
  v6 = 88LL * (v5 & 0xF);
  v7 = *(_QWORD *)(v4 + v6 + 3728);
  if ( v7 == 0x3FFFFFFFFFLL )
    goto LABEL_112;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 == *(_QWORD *)(v4 + v6 + 3728) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
LABEL_24:
    v7 = *(_QWORD *)(v4 + v6 + 3728);
    if ( v7 == 0x3FFFFFFFFFLL )
      goto LABEL_112;
  }
  v15 = *(_QWORD *)(v8 + 16);
  if ( qword_140C50780 && (v15 & 0x10) == 0 )
    v15 &= ~qword_140C50780;
  v16 = HIDWORD(v15);
  if ( (unsigned int)v16 < DWORD2(v83) )
  {
    if ( _bittest64((const signed __int64 *)v84, v16) )
    {
      MiUnlinkPageFromListEx(v8, 0);
      v17 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = v17 & 0xFFFFFFFFFFFFFFFDuLL;
      MiInsertPageInList(v8, 8u);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
        }
      }
      __writecr8(v9);
      MiReleasePageFileInfo(v4, v17, 0);
      goto LABEL_24;
    }
    MiReferencePageForModifiedWrite(v8, 1);
    v22 = 1;
    *v90 = v7;
    if ( *a3 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v26 = v24->SchedulerAssist;
            v14 = (v25 & v26[5]) == 0;
            v26[5] &= v25;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v9);
      goto LABEL_113;
    }
    v27 = *(_QWORD *)(v8 + 16);
    v28 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
    v80 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
    v82 = 48 * v80 - 0x220000000000LL;
    MiLockNestedPageAtDpcInline(v82);
    MiAddLockedPageCharge(v82, 1LL, v29);
    _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
      }
    }
    __writecr8(v9);
    if ( *(__int64 *)(v8 + 40) < 0
      && (!(unsigned int)MiGetPageFileSectionForReservation(v28, &v87, 0LL)
       || (v77 = 1, (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0))
      || (v34 = (_QWORD *)MiReservePtes((__int64)&qword_140C534C0, 1u), v86 = v34, (v35 = (unsigned __int64)v34) == 0) )
    {
      v60 = a1;
LABEL_95:
      v62 = (unsigned __int8)MiLockPageInline(v82);
      MiRemoveLockedPageChargeAndDecRef(v82);
      _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v64 = KeGetCurrentIrql();
          if ( v64 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
            v67 = v65->SchedulerAssist;
            v14 = (v66 & v67[5]) == 0;
            v63 = (unsigned int)v66 & v67[5];
            v67[5] = v63;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v65);
          }
        }
      }
      __writecr8(v62);
      if ( v77 )
        MiReleasePageFileSectionInfo(&v87, v63);
      goto LABEL_114;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v34, v80, 536870913);
    v37 = 0;
    if ( MiPteInShadowRange(v35) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v37 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
LABEL_51:
          if ( (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_51;
      }
    }
    *(_QWORD *)v35 = ValidPte;
    if ( v37 )
      MiWritePteShadow(v35, ValidPte);
    v38 = (v28 >> 3) & 0x1FF;
    v39 = (__int64)(v35 << 25) >> 16;
    v40 = 8 * v38;
    v41 = 8 * v38 + v39;
    v80 = v41;
    if ( v77 )
      v42 = 8 * ((*((_QWORD *)&v88 + 1) >> 3) & 0x1FFLL);
    else
      v42 = 4088LL;
    v43 = v27 & 0xFFFFFFFFFC00FC1FuLL;
    v44 = (v42 - 8 * v38) >> 3;
    updated = v43;
    v46 = v43;
    v81 = *a3;
    if ( (unsigned int)v44 >= v81 - 1 )
      LODWORD(v44) = v81 - 1;
    if ( qword_140C50780 && (v43 & 0x10) == 0 )
      v46 = v43 & ~qword_140C50780;
    v47 = HIDWORD(v46);
    if ( v47 + (unsigned __int64)(unsigned int)v44 >= DWORD2(v83) )
      LODWORD(v44) = DWORD2(v83) - v47 - 1;
    v48 = v79;
    v49 = v41;
    if ( (_DWORD)v44 )
    {
      do
      {
        ++v47;
        v79 = v49 + 8;
        updated = MiUpdatePageFileHighInPte(updated, v47);
        v51 = MiGetPageForWriteCluster((__int64)&v83 + 8, v50, updated);
        if ( v51 == -1LL )
          break;
        LODWORD(v44) = v44 - 1;
        ++v22;
        *++v90 = v51;
        if ( v51 == qword_140C53278 )
          ++v48;
        v49 = v79;
      }
      while ( (_DWORD)v44 );
      LOWORD(v41) = v80;
    }
    v52 = v81 - v22;
    LODWORD(v79) = v48;
    if ( v77 )
      v53 = v40 - 8 * (((unsigned __int64)v88 >> 3) & 0x1FF);
    else
      v53 = v41 & 0xFFF;
    v54 = v43;
    v55 = v53 >> 3;
    if ( (unsigned int)v55 >= v52 )
      v55 = v52;
    if ( qword_140C50780 && (v43 & 0x10) == 0 )
      v54 = v43 & ~qword_140C50780;
    v56 = HIDWORD(v54);
    if ( (unsigned int)v55 > (unsigned __int64)(v56 - 1) )
      v55 = (unsigned int)(v56 - 1);
    if ( (_DWORD)v55 )
    {
      v57 = &a1[v55];
      memmove(v57, a1, 8LL * v22);
      v58 = v80;
      do
      {
        --v56;
        v58 -= 8LL;
        v43 = MiUpdatePageFileHighInPte(v43, v56);
        v59 = MiGetPageForWriteCluster((__int64)&v83 + 8, v58, v43);
        if ( v59 == -1LL )
          break;
        --v57;
        LODWORD(v55) = v55 - 1;
        ++v22;
        *v57 = v59;
        if ( v59 == qword_140C53278 )
          ++v48;
      }
      while ( (_DWORD)v55 );
      v60 = a1;
      LODWORD(v79) = v48;
      if ( a1 != v57 )
        memmove(a1, v57, 8LL * v22);
    }
    else
    {
      v60 = a1;
    }
    v61 = *(_QWORD *)(48 * *v60 - 0x220000000000LL + 16);
    if ( qword_140C50780 && (v61 & 0x10) == 0 )
      v61 &= ~qword_140C50780;
    v16 = HIDWORD(v61);
    MiReleasePtes((__int64)&qword_140C534C0, v86, 1u);
    goto LABEL_95;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v71 = v69->SchedulerAssist;
        v14 = (v70 & v71[5]) == 0;
        v71[5] &= v70;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v69);
      }
    }
  }
  __writecr8(v9);
LABEL_112:
  v22 = 0;
  LODWORD(v16) = 0;
LABEL_113:
  v60 = a1;
LABEL_114:
  v72 = *a3;
  if ( v22 < (unsigned int)v72 && v22 && v22 + (unsigned __int64)(unsigned int)v16 < DWORD2(v83) )
  {
    if ( (unsigned __int64)(unsigned int)v16 + v72 <= DWORD2(v83) )
      v73 = *a3;
    else
      v73 = DWORD2(v83) - v16;
    v74 = a2;
    v22 += MiAddToReservationCluster(a2, (__int64)&v83 + 8, v73 - v22, (unsigned int)v16 + v22, &v60[v22], &v79);
  }
  else
  {
    v74 = a2;
  }
  v75 = MiDerefPageFileSpaceBitmaps(v74, (_DWORD **)&v83, 0);
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  *a3 = v22;
  *a4 = v22 - v79;
  return (unsigned int)v16;
}
