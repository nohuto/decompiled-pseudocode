/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x1406DF860
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1406D27A4 (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140A25A34 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpCompareTwoCompressedNames @ 0x1407BFAA0 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x1407C49B4 (CmpCompareCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v11; // r14d
  unsigned int *v12; // r15
  int v13; // ebx
  __int64 CellFlat; // rax
  bool v15; // zf
  unsigned __int8 *v16; // r10
  unsigned int v17; // edi
  unsigned __int16 v18; // si
  wchar_t *Buffer; // r9
  unsigned __int16 v20; // r11
  unsigned int v21; // ebx
  int v22; // ebx
  __int64 result; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v25; // r11
  LONG v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  int v31; // [rsp+90h] [rbp+28h]

  v28 = 0LL;
  String2 = 0LL;
  HvpGetCellContextReinitialize(&v28);
  if ( a3 )
  {
    v11 = 0;
    v12 = a2;
    v13 = a5 & 0x10000;
    v31 = a5 & 0x10000;
    while ( 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, *v12);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v15 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
      v16 = (unsigned __int8 *)(CellFlat + 20);
      v17 = *(unsigned __int16 *)(CellFlat + 2);
      String2.Buffer = (wchar_t *)(CellFlat + 20);
      String2.Length = v17;
      String2.MaximumLength = v17;
      if ( v15 )
      {
        if ( !v13 )
        {
          v26 = RtlCompareUnicodeString(a4, &String2, 1u);
LABEL_35:
          v22 = v26;
          goto LABEL_15;
        }
        v22 = -(int)CmpCompareCompressedName(&String2, a4->Buffer, a4->Length, 0LL);
      }
      else
      {
        if ( v13 )
        {
          v26 = CmpCompareTwoCompressedNames(
                  a4->Buffer,
                  a4->Length,
                  CellFlat + 20,
                  v17,
                  v28,
                  *(_QWORD *)&String2.Length);
          goto LABEL_35;
        }
        v18 = a4->Length >> 1;
        Buffer = a4->Buffer;
        if ( v18 )
        {
          while ( (_WORD)v17 )
          {
            v20 = *Buffer++;
            v21 = *v16++;
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                {
                  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                  v20 = NLS_UPCASE(CurrentServerSiloGlobals[154], v25);
                }
                else
                {
                  v20 -= 32;
                }
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                {
                  v27 = PsGetCurrentServerSiloGlobals();
                  LOWORD(v21) = NLS_UPCASE(v27[154], v21);
                }
                else
                {
                  LOWORD(v21) = v21 - 32;
                }
              }
              v22 = v20 - (unsigned __int16)v21;
              if ( v22 )
                goto LABEL_15;
            }
            LOWORD(v17) = v17 - 1;
            if ( !--v18 )
              break;
          }
        }
        v22 = v18 - (unsigned __int16)v17;
      }
LABEL_15:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v28);
      if ( !v22 )
      {
        result = 0LL;
        *a7 = a2[v11];
        if ( a6 )
          *a6 = v11;
        return result;
      }
      v13 = v31;
      ++v11;
      ++v12;
      if ( v11 >= a3 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = a3;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
