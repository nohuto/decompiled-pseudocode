/*
 * XREFs of CmpGetValueForAudit @ 0x140921930
 * Callers:
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetValueForAudit(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        ULONG a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r12d
  PVOID v9; // r14
  __int64 CellFlat; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  struct _LOOKASIDE_LIST_EX *v13; // r9
  PVOID TransientPoolWithTag; // rax
  int v15; // eax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  v19 = 0LL;
  v18 = 0LL;
  Src = 0LL;
  LOBYTE(v21) = 0;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v19);
  v9 = 0LL;
  HvpGetCellContextReinitialize(&v18);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v18);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, (unsigned int *)&v18);
  v11 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  LODWORD(NumberOfBytes) = 0;
  if ( !*(_DWORD *)(CellFlat + 4) )
    goto LABEL_12;
  if ( CmpGetValueData(
         BugCheckParameter3,
         v8,
         CellFlat,
         (unsigned int *)&NumberOfBytes,
         (__int64)&Src,
         (__int64)&v21,
         &v19) )
  {
    v4 = NumberOfBytes;
    if ( (_DWORD)NumberOfBytes )
    {
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (unsigned int)NumberOfBytes, a4, v13);
      v9 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
        goto LABEL_8;
      memmove(TransientPoolWithTag, Src, v4);
    }
LABEL_12:
    v15 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(a3 + 4) = v4;
    v12 = 0;
    *(_DWORD *)a3 = v15;
    *(_QWORD *)(a3 + 8) = v9;
    goto LABEL_13;
  }
LABEL_8:
  v12 = -1073741670;
LABEL_13:
  if ( Src )
  {
    if ( (_BYTE)v21 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    }
    else
    {
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
  return v12;
}
