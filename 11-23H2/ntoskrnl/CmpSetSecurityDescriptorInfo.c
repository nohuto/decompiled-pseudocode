/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x14070D128
 * Callers:
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14022D0C0 (CmpFindSecurityCellCacheIndex.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1402977A4 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpRemoveSecurityCellList @ 0x14036208C (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x140419CF0 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x140419D30 (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x140419D84 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x1406D57F0 (CmGetKCBCacheSecurity.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpAddSecurityCellToCache @ 0x14070D8E8 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070DAFC (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14070DEBC (CmpTraceSecurityChanging.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FDD0 (SeCheckForCriticalAceRemoval.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     HvMarkCellDirty @ 0x1408ABF46 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, _DWORD *a2, ...)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // r12d
  bool v7; // zf
  __int64 CellPaged; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  __int64 CellFlat; // rax
  unsigned int *v14; // r15
  int Cell; // esi
  __int64 v16; // rbx
  struct _PRIVILEGE_SET *v17; // rax
  struct _PRIVILEGE_SET *Pool; // rax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // r12d
  __int64 v25; // rbx
  __int64 v26; // rax
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v28; // rdx
  _DWORD *v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  bool v34; // al
  ULONG_PTR v35; // r12
  __int64 v36; // rcx
  bool v37; // bl
  int v38; // eax
  ULONG_PTR v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // eax
  bool v42; // r12
  __int64 v43; // rcx
  _DWORD *v44; // rdx
  __int64 v45; // [rsp+48h] [rbp-81h]
  unsigned int v46; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v48[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v49[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v50; // [rsp+70h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-51h]
  ULONG_PTR v52; // [rsp+80h] [rbp-49h] BYREF
  __int64 v53; // [rsp+88h] [rbp-41h]
  unsigned int v54[2]; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v55[2]; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp-29h]
  _DWORD *v57; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  size_t Size; // [rsp+128h] [rbp+5Fh] BYREF
  va_list Sizea; // [rsp+128h] [rbp+5Fh]
  __int64 v63; // [rsp+130h] [rbp+67h] BYREF
  va_list va1; // [rsp+130h] [rbp+67h]
  __int64 v65; // [rsp+138h] [rbp+6Fh]
  __int64 v66; // [rsp+140h] [rbp+77h]
  __int64 v67; // [rsp+148h] [rbp+7Fh]
  __int64 v68; // [rsp+150h] [rbp+87h]
  __int64 v69; // [rsp+158h] [rbp+8Fh]
  va_list va2; // [rsp+160h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(Sizea, a2);
  Size = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v63 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _QWORD);
  v66 = va_arg(va2, _QWORD);
  v67 = va_arg(va2, _QWORD);
  v68 = va_arg(va2, _QWORD);
  v69 = va_arg(va2, _QWORD);
  P = 0LL;
  v48[1] = 0;
  v49[1] = 0;
  v48[0] = -1;
  v49[0] = -1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 40);
  v54[0] = -1;
  v55[0] = -1;
  v54[1] = 0;
  v55[1] = 0;
  DestinationString = 0LL;
  v7 = (*(_BYTE *)(v4 + 140) & 1) == 0;
  v52 = 0LL;
  v46 = 0;
  v57 = 0LL;
  LOBYTE(v63) = 0;
  v45 = 0LL;
  v50 = 0LL;
  Privileges = 0LL;
  v56 = v6;
  if ( v7 )
    CellPaged = HvpGetCellPaged(v4, v6, v55);
  else
    CellPaged = HvpGetCellFlat(v4, v6);
  v53 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, CellPaged, v6);
  v12 = *(_DWORD *)CmGetKCBCacheSecurity(a1, v67, v10, v11);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v12);
  else
    CellFlat = HvpGetCellPaged(v4, v12, v48);
  v14 = (unsigned int *)CellFlat;
  if ( !CellFlat
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, *(unsigned int *)(CellFlat + 16), 909659459LL),
        (Privileges = Pool) == 0LL) )
  {
    Cell = -1073741670;
    goto LABEL_11;
  }
  memmove(Pool, v14 + 5, v14[4]);
  v19 = *a2;
  v20 = v69;
  if ( (v19 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(Privileges, Size, v69, (__int64 *)va1);
    if ( (_BYTE)v63 )
    {
      Size = 0LL;
      CmpConstructNameWithStatus(a1, (size_t *)Sizea, v21);
      if ( Size )
      {
        Cell = -1073741822;
        CmpFreeTransientPoolWithTag((void *)Size, 0x624E4D43u);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        Cell = -1073741822;
      }
      goto LABEL_11;
    }
  }
  P = Privileges;
  Cell = RtlpSetSecurityObject(0, *a2, Size, (unsigned int)&P, 0, v65, v66, v20);
  if ( Cell >= 0 )
  {
    Cell = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *a2, Size, (__int64)P);
    if ( Cell >= 0 )
    {
      v22 = RtlLengthSecurityDescriptorStrict();
      v23 = v67;
      LODWORD(Size) = v22;
      if ( v67 )
        v24 = 1;
      else
        v24 = v6 >> 31;
      v25 = MEMORY[0xFFFFF78000000014];
      if ( v67 )
      {
        Cell = HvMarkCellDirty(v4, v12, 0LL);
        if ( Cell < 0 )
          goto LABEL_43;
        v26 = v68;
        *(_DWORD *)(v68 + 96) = -1;
        *(_QWORD *)(v26 + 88) = 0LL;
        *(_DWORD *)(v26 + 68) = 9;
        *(_BYTE *)(v26 + 100) = 0;
      }
      else
      {
        Cell = HvMarkCellDirty(v4, v56, 0LL);
        if ( Cell < 0 )
          goto LABEL_43;
        Cell = HvMarkCellDirty(v4, v12, 0LL);
        if ( Cell < 0 )
          goto LABEL_43;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, P, v24, &v52, &v57) )
      {
        BugCheckParameter4 = (unsigned int)v52;
        if ( (_DWORD)v52 == v12 )
        {
          if ( v23 )
          {
            Cell = CmpKeySecurityIncrementReferenceCount((__int64)v14, v4, v52, 0);
            if ( Cell >= 0 )
            {
              v28 = v68;
              v29 = v57;
              *(_DWORD *)(v68 + 96) = BugCheckParameter4;
              *(_QWORD *)(v28 + 88) = v29;
            }
          }
          else
          {
            *(_QWORD *)(v53 + 4) = v25;
            *(_QWORD *)(a1 + 168) = v25;
          }
          goto LABEL_43;
        }
        Cell = HvMarkCellDirty(v4, (unsigned int)v52, 0LL);
        if ( Cell >= 0 )
        {
          if ( v23 )
          {
            v30 = v57;
            v31 = v68;
            *(_DWORD *)(v68 + 96) = *v57;
            *(_QWORD *)(v31 + 88) = v30;
            goto LABEL_52;
          }
          Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v14, v4, v12);
          if ( Cell >= 0 )
          {
LABEL_52:
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              v32 = HvpGetCellFlat(v4, (unsigned int)BugCheckParameter4);
            else
              v32 = HvpGetCellPaged(v4, BugCheckParameter4, v49);
            v5 = v32;
            if ( !v32 )
            {
              if ( !v67 )
                KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, BugCheckParameter4);
              goto LABEL_57;
            }
            Cell = CmpKeySecurityIncrementReferenceCount(v32, v4, BugCheckParameter4, 0);
            if ( Cell < 0 )
              goto LABEL_44;
            if ( !v67 )
            {
              v34 = CmpKeySecurityDecrementReferenceCount((__int64)v14, v4, v12);
              v7 = (*(_BYTE *)(v4 + 140) & 1) == 0;
              LOBYTE(Size) = v34;
              if ( v7 )
                HvpReleaseCellPaged(v4, v48);
              else
                HvpReleaseCellFlat(v4, v48);
              v14 = 0LL;
              if ( (_BYTE)Size )
              {
                CmpRemoveSecurityCellList(v4, v12);
                HvFreeCell(v4, v12);
              }
              *(_DWORD *)(v53 + 44) = BugCheckParameter4;
            }
            v45 = 0LL;
            LODWORD(v35) = v12;
            if ( v67 )
            {
              v36 = v68;
LABEL_68:
              v46 = 0;
              Cell = CmAddLogForAction(v36, 1u, v33);
              if ( Cell < 0 )
              {
                v37 = CmpKeySecurityDecrementReferenceCount(v5, v4, v12);
                if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v4, v49);
                else
                  HvpReleaseCellPaged(v4, v49);
                v5 = 0LL;
                v46 = 0;
                if ( v37 )
                {
                  CmpRemoveSecurityCellList(v4, (unsigned int)v35);
                  HvFreeCell(v4, (unsigned int)v35);
                  v46 = 0;
                }
              }
              goto LABEL_44;
            }
            goto LABEL_90;
          }
        }
      }
      else
      {
        v38 = RtlLengthSecurityDescriptorStrict();
        Cell = HvAllocateCell(v4, v38 + 20, v24, (_DWORD *)&v52 + 1, (__int64)&v50, (__int64)v49);
        if ( Cell >= 0 )
        {
          v35 = HIDWORD(v52);
          v46 = HIDWORD(v52);
          if ( v23 )
          {
            v5 = v50;
            *(_DWORD *)(v50 + 8) = HIDWORD(v52);
            *(_DWORD *)(v5 + 4) = v35;
          }
          else
          {
            Cell = HvMarkCellDirty(v4, v14[1], 0LL);
            if ( Cell < 0 )
              goto LABEL_43;
            Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v14, v4, v12);
            if ( Cell < 0 )
              goto LABEL_43;
            v39 = v14[1];
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              v40 = HvpGetCellFlat(v4, v39);
            else
              v40 = HvpGetCellPaged(v4, v39, v54);
            v5 = v50;
            v45 = v40;
            if ( !v40 )
            {
LABEL_57:
              Cell = -1073741670;
              goto LABEL_44;
            }
            *(_DWORD *)(v50 + 4) = v14[1];
            *(_DWORD *)(v5 + 8) = v12;
            v14[1] = v35;
            *(_DWORD *)(v40 + 8) = v35;
          }
          *(_WORD *)v5 = 27507;
          v41 = Size;
          *(_DWORD *)(v5 + 12) = 1;
          *(_DWORD *)(v5 + 16) = v41;
          memmove((void *)(v5 + 20), P, v41);
          Cell = CmpAddSecurityCellToCache(v4, (unsigned int)v35);
          if ( Cell < 0 )
          {
            v16 = v45;
            if ( !v67 )
            {
              v14[1] = *(_DWORD *)(v5 + 4);
              *(_DWORD *)(v45 + 8) = *(_DWORD *)(v5 + 8);
            }
LABEL_12:
            if ( P )
              ExFreePoolWithTag(P, 0);
            v17 = Privileges;
            if ( !Privileges )
              goto LABEL_16;
            goto LABEL_15;
          }
          if ( v67 )
          {
            LODWORD(Size) = 0;
            if ( !CmpFindSecurityCellCacheIndex(v4, v35, (size_t *)Sizea) )
              KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v35);
            v36 = v68;
            v44 = *(_DWORD **)(*(_QWORD *)(v4 + 1888) + 16LL * (unsigned int)Size + 8);
            *(_QWORD *)(v68 + 88) = v44;
            *(_DWORD *)(v36 + 96) = *v44;
            goto LABEL_68;
          }
          *(_DWORD *)(v53 + 44) = v35;
          v42 = CmpKeySecurityDecrementReferenceCount((__int64)v14, v4, v12);
          if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v4, v48);
          else
            HvpReleaseCellPaged(v4, v48);
          v14 = 0LL;
          if ( v42 )
          {
            CmpRemoveSecurityCellList(v4, v12);
            HvFreeCell(v4, v12);
          }
LABEL_90:
          v43 = v53;
          *(_QWORD *)(v53 + 4) = v25;
          ++*(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 168) = v25;
          CmpAssignSecurityToKcb(a1, *(unsigned int *)(v43 + 44), 0);
          v46 = 0;
          goto LABEL_44;
        }
      }
LABEL_43:
      v5 = v50;
LABEL_44:
      v16 = v45;
      goto LABEL_12;
    }
LABEL_11:
    v16 = 0LL;
    goto LABEL_12;
  }
  P = 0LL;
  v16 = 0LL;
  v17 = Privileges;
LABEL_15:
  CmSiFreeMemory(v17);
LABEL_16:
  if ( v46 )
    HvFreeCell(v4, v46);
  if ( v16 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v54);
    else
      HvpReleaseCellPaged(v4, v54);
  }
  if ( v5 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v49);
    else
      HvpReleaseCellPaged(v4, v49);
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v48);
    else
      HvpReleaseCellPaged(v4, v48);
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, v55);
  else
    HvpReleaseCellPaged(v4, v55);
  return (unsigned int)Cell;
}
