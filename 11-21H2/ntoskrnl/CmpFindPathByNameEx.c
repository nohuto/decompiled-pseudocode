/*
 * XREFs of CmpFindPathByNameEx @ 0x140657398
 * Callers:
 *     CmpFindPathByName @ 0x14071F2D8 (CmpFindPathByName.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByNameEx(
        __int64 a1,
        __m128i *a2,
        UNICODE_STRING *a3,
        int a4,
        unsigned int *a5,
        ULONG_PTR *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v7; // r15
  ULONG_PTR *v11; // rcx
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int16 v15; // r14
  ULONG_PTR v16; // rsi
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  __int64 CellFlat; // rax
  unsigned int v20; // r12d
  ULONG_PTR v21; // rcx
  ULONG_PTR *v23; // rax
  unsigned __int64 v24; // rax
  UNICODE_STRING v25; // [rsp+20h] [rbp-20h]
  int v26; // [rsp+90h] [rbp+50h] BYREF
  int v27; // [rsp+94h] [rbp+54h]
  int v28; // [rsp+98h] [rbp+58h]

  v28 = a4;
  v6 = a5;
  v7 = 0;
  v26 = -1;
  *a5 = -1;
  v11 = a6;
  v27 = 0;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v25 = (UNICODE_STRING)v12;
  if ( v13 )
  {
    v15 = v12.m128i_i16[1];
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 32);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 40);
      v18 = (wchar_t *)v12.m128i_i64[1];
      *v6 = v17;
    }
    else
    {
      v16 = CmpMasterHive;
      v18 = (wchar_t *)v12.m128i_i64[1];
      v17 = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v25.Length = v13;
      }
      while ( v13 );
      v25.Buffer = v18;
      v25.MaximumLength = v15;
      if ( !v13 )
        goto LABEL_20;
      do
      {
        if ( *v18 == 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v25.Length = v13;
      }
      while ( v13 );
      v25.Buffer = v18;
      v25.MaximumLength = v15;
    }
    while ( 1 )
    {
      if ( v13 )
      {
        do
        {
          if ( *v18 != 92 )
            break;
          v13 -= 2;
          ++v18;
          v15 -= 2;
          v25.Length = v13;
        }
        while ( v13 );
        v25.Buffer = v18;
        v25.MaximumLength = v15;
      }
LABEL_20:
      if ( a3 )
        *a3 = v25;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v16, v17);
      else
        CellFlat = HvpGetCellPaged(v16);
      if ( !CellFlat )
        return 0;
      do
      {
        if ( v18[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v13 );
      if ( (*(_BYTE *)(CellFlat + 2) & 2) != 0 )
      {
        v20 = *(_DWORD *)(CellFlat + 28);
        v21 = v16;
        v16 = *(_QWORD *)(CellFlat + 36);
        if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v21, &v26);
        else
          HvpReleaseCellPaged(v21, &v26);
        if ( v16 != CmpMasterHive && v28 && (v28 & *(_DWORD *)(v16 + 4112)) == 0 )
          return 0;
        if ( !((*(_BYTE *)(v16 + 140) & 1) != 0 ? HvpGetCellFlat(v16, v20) : HvpGetCellPaged(v16)) )
          return 0;
        v6 = a5;
      }
      CmpFindSubKeyByNameWithStatus(v16);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, &v26);
      else
        HvpReleaseCellPaged(v16, &v26);
      v17 = 0;
      v23 = a6;
      v15 -= v7;
      v13 -= v7;
      *v6 = 0;
      v25.MaximumLength = v15;
      v25.Length = v13;
      *v23 = v16;
      v24 = v7;
      v7 = 0;
      v18 += v24 >> 1;
      v25.Buffer = v18;
      if ( !v13 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v11 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
