/*
 * XREFs of CmpCompareInIndex @ 0x1407C4180
 * Callers:
 *     CmpAddToLeaf @ 0x1407187D4 (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407CD270 (CmpFindSubKeyInLeafWithStatus.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     CmpCompareTwoCompressedNames @ 0x14065C57C (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpDoCompareKeyName @ 0x1407C4460 (CmpDoCompareKeyName.c)
 *     CmpCompareCompressedName @ 0x1407C45A0 (CmpCompareCompressedName.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareInIndex(
        ULONG_PTR BugCheckParameter3,
        PCUNICODE_STRING String1,
        unsigned __int8 **a3,
        int a4,
        __int16 *a5,
        __int64 a6)
{
  _DWORD *v6; // rsi
  __int16 v10; // r10
  __int16 *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r15d
  __int16 *v14; // rbp
  unsigned int v15; // edx
  unsigned int v16; // eax
  _BYTE *v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  __int64 v20; // rsi
  unsigned __int8 *v21; // rbp
  unsigned __int16 v22; // dx
  unsigned int v23; // r11d
  int v24; // r10d
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v26; // dx
  unsigned int v27; // eax
  _QWORD *v28; // rax
  unsigned __int16 v29; // r11
  int v30; // r10d
  ULONG_PTR v31; // rdx
  bool v32; // zf
  __int64 CellPaged; // rax
  __int64 result; // rax
  unsigned __int16 v35; // cx
  unsigned __int8 *v36; // r10
  int v37; // eax
  int v38; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  __int64 v40; // [rsp+30h] [rbp-28h]
  __int64 v41; // [rsp+38h] [rbp-20h]
  __int64 v42; // [rsp+80h] [rbp+28h]

  v6 = (_DWORD *)a6;
  *(_DWORD *)a6 = -1;
  v10 = *a5;
  if ( ((*a5 - 26220) & 0xFDFF) != 0 )
  {
    v11 = &a5[2 * a4];
    v12 = CmpDoCompareKeyName(BugCheckParameter3, String1, a3, *((unsigned int *)v11 + 1));
    v13 = v12;
    if ( v12 != 2 )
    {
      if ( !v12 )
        *v6 = *((_DWORD *)v11 + 1);
      return v13;
    }
    return 2LL;
  }
  v13 = 0;
  v14 = &a5[4 * a4];
  v42 = (__int64)v14;
  if ( v10 != 26220 )
    goto LABEL_34;
  v15 = 4;
  v16 = 0;
  v17 = v14 + 4;
  while ( *v17 )
  {
    ++v16;
    ++v17;
    if ( v16 >= 4 )
      goto LABEL_11;
  }
  v15 = v16;
LABEL_11:
  if ( a3 )
    v18 = *(unsigned __int16 *)a3;
  else
    v18 = String1->Length >> 1;
  v19 = 0;
  if ( v18 >= v15 )
    v18 = v15;
  if ( !v18 )
  {
LABEL_34:
    v31 = *((unsigned int *)v14 + 1);
    a6 = 0xFFFFFFFFLL;
    v32 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    String2 = 0LL;
    if ( v32 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v31, &a6);
    if ( !CellPaged )
      return 2LL;
    v35 = *(_WORD *)(CellPaged + 72);
    v36 = (unsigned __int8 *)(CellPaged + 76);
    if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
    {
      if ( a3 )
        v37 = CmpCompareTwoCompressedNames(a3[1], *(_WORD *)a3, v36, v35);
      else
        v37 = CmpCompareCompressedName(
                String1,
                v36,
                *(unsigned __int16 *)(CellPaged + 72),
                0LL,
                *(_QWORD *)&String2.Length,
                String2.Buffer,
                v40,
                v41);
    }
    else
    {
      String2.Buffer = (wchar_t *)(CellPaged + 76);
      String2.Length = v35;
      String2.MaximumLength = v35;
      if ( a3 )
      {
        v38 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, unsigned __int8 *, _QWORD, _QWORD))CmpCompareCompressedName)(
                      &String2,
                      a3[1],
                      *(unsigned __int16 *)a3,
                      0LL);
LABEL_50:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &a6);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &a6);
        if ( v38 )
        {
          v13 = 1;
          if ( v38 < 0 )
            return (unsigned int)-1;
        }
        else
        {
          *v6 = *((_DWORD *)v14 + 1);
        }
        return v13;
      }
      v37 = RtlCompareUnicodeString(String1, &String2, 1u);
    }
    v38 = v37;
    goto LABEL_50;
  }
  v20 = 0LL;
  v21 = (unsigned __int8 *)(v14 + 4);
  while ( 1 )
  {
    v22 = a3 ? a3[1][v19] : String1->Buffer[v20];
    v23 = *v21;
    if ( v22 >= 0x61u )
    {
      if ( v22 <= 0x7Au )
      {
        v24 = v22 - 32;
      }
      else
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v24 = NLS_UPCASE(CurrentServerSiloGlobals[154], v26);
      }
    }
    else
    {
      v24 = v22;
    }
    if ( v23 >= 0x61 )
    {
      if ( v23 <= 0x7A )
      {
        v27 = v23 - 32;
      }
      else
      {
        v28 = PsGetCurrentServerSiloGlobals();
        v27 = NLS_UPCASE(v28[154], v29);
      }
    }
    else
    {
      v27 = v23;
    }
    v30 = v24 - v27;
    if ( v30 )
      break;
    ++v19;
    ++v20;
    ++v21;
    if ( v19 >= v18 )
    {
      v14 = (__int16 *)v42;
      v6 = (_DWORD *)a6;
      goto LABEL_34;
    }
  }
  result = 1LL;
  if ( v30 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
