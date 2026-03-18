/*
 * XREFs of CmpIsLoadType @ 0x140B143B0
 * Callers:
 *     CmpFindDrivers @ 0x140B141E0 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x1406B4108 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x14082F8AC (CmpValueToData.c)
 *     CmpGetNodeName @ 0x140B14558 (CmpGetNodeName.c)
 */

char CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter3a,
        __int64 a7,
        ...)
{
  char v7; // bl
  unsigned int ValueByName; // r15d
  bool v10; // zf
  ULONG_PTR v11; // rsi
  __int64 CellPaged; // rax
  int v13; // r12d
  ULONG_PTR v14; // r14
  ULONG_PTR CellFlat; // rax
  _DWORD *v16; // r14
  char v17; // al
  const WCHAR *NodeName; // rax
  const WCHAR *v19; // r13
  unsigned int SubKeyByName; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // esi
  ULONG_PTR v24; // rax
  PVOID v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+38h] [rbp-18h]
  int v31; // [rsp+3Ch] [rbp-14h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  int v34; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+78h] BYREF
  va_list va; // [rsp+C8h] [rbp+78h]
  __int64 v38; // [rsp+D0h] [rbp+80h] BYREF
  va_list va1; // [rsp+D0h] [rbp+80h]
  __int64 v40; // [rsp+D8h] [rbp+88h] BYREF
  va_list va2; // [rsp+D8h] [rbp+88h]
  va_list va3; // [rsp+E0h] [rbp+90h] BYREF

  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  va_arg(va3, _QWORD);
  v35 = a4;
  v34 = a3;
  v7 = 0;
  v31 = 0;
  a5 = 0xFFFFFFFFLL;
  v40 = 0xFFFFFFFFLL;
  ValueByName = -1;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = 0LL;
  v30 = -1;
  v33 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v38 = 0xFFFFFFFFLL;
  LODWORD(v35) = 0;
  DestinationString = 0LL;
  LOWORD(v34) = 0;
  if ( v10 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)va2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, (__int64 *)va2);
  v13 = CellPaged;
  if ( !CellPaged )
    return CellPaged;
  v14 = BugCheckParameter3a;
  if ( BugCheckParameter3a && a7 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v34);
    v19 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(v14);
        if ( SubKeyByName != -1 )
        {
          v21 = (*(_BYTE *)(v14 + 140) & 1) != 0
              ? HvpGetCellFlat(v14, SubKeyByName, &v33)
              : HvpGetCellPaged(v14, SubKeyByName, (unsigned int *)&v33);
          if ( v21 )
          {
            v11 = v14;
            ValueByName = CmpFindValueByName(v14, v21, (int)&CmpStartString);
            if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v14, &v33);
            else
              HvpReleaseCellPaged(v14, (unsigned int *)&v33);
          }
        }
      }
      (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v19, (unsigned __int16)v34);
      if ( ValueByName != -1 )
        goto LABEL_6;
    }
    v22 = CmpFindValueByName(BugCheckParameter3, v13, (int)L"\b\n");
    v23 = v22;
    if ( v22 == -1 )
      goto LABEL_15;
    v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v22, (__int64 *)va)
        : HvpGetCellPaged(BugCheckParameter3, v22, (unsigned int *)va);
    if ( !v24 )
      goto LABEL_15;
    v25 = CmpValueToData(BugCheckParameter3, v23, v24, (unsigned int *)&v35, &v29);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64 *)va);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va);
    if ( !v25 )
      goto LABEL_15;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
    v26 = CmpFindSubKeyByName(v14);
    if ( v26 != -1 )
    {
      v27 = (*(_BYTE *)(v14 + 140) & 1) != 0
          ? HvpGetCellFlat(v14, v26, &v33)
          : HvpGetCellPaged(v14, v26, (unsigned int *)&v33);
      if ( v27 )
      {
        v11 = v14;
        ValueByName = CmpFindValueByName(v14, v27, (int)&CmpStartString);
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v14, &v33);
        else
          HvpReleaseCellPaged(v14, (unsigned int *)&v33);
        if ( ValueByName != -1 )
        {
LABEL_6:
          if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v11, ValueByName, (__int64 *)va1);
          else
            CellFlat = HvpGetCellPaged(v11, ValueByName, (unsigned int *)va1);
          if ( CellFlat )
          {
            v16 = CmpValueToData(v11, ValueByName, CellFlat, (unsigned int *)&v35, &a5);
            if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v11, (__int64 *)va1);
            else
              HvpReleaseCellPaged(v11, (unsigned int *)va1);
            if ( v16 )
            {
              v17 = *(_BYTE *)(v11 + 140) & 1;
              if ( *v16 == 1 )
              {
                if ( v17 )
                  HvpReleaseCellFlat(v11, &a5);
                else
                  HvpReleaseCellPaged(v11, (unsigned int *)&a5);
                v7 = 1;
              }
              else if ( v17 )
              {
                HvpReleaseCellFlat(v11, &a5);
              }
              else
              {
                HvpReleaseCellPaged(v11, (unsigned int *)&a5);
              }
            }
          }
          goto LABEL_15;
        }
      }
    }
  }
  v11 = BugCheckParameter3;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpStartString);
  if ( ValueByName != -1 )
    goto LABEL_6;
LABEL_15:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64 *)va2);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va2);
  LOBYTE(CellPaged) = v7;
  return CellPaged;
}
