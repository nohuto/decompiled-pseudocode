/*
 * XREFs of sub_140A5AC18 @ 0x140A5AC18
 * Callers:
 *     sub_140A5A680 @ 0x140A5A680 (sub_140A5A680.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_14051BE58 @ 0x14051BE58 (sub_14051BE58.c)
 *     sub_140A5AE1C @ 0x140A5AE1C (sub_140A5AE1C.c)
 *     sub_140A5AEB0 @ 0x140A5AEB0 (sub_140A5AEB0.c)
 *     sub_140A5B0D0 @ 0x140A5B0D0 (sub_140A5B0D0.c)
 *     sub_140A61D50 @ 0x140A61D50 (sub_140A61D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A5AC18(int a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  int v14; // eax
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  PVOID P; // [rsp+60h] [rbp+40h] BYREF

  P = 0LL;
  if ( !a1 )
    return 0LL;
  if ( !dword_140C54BAC )
  {
    dword_140C54BAC = 1;
    qword_140C4BC78 = (__int64)&qword_140C4BC70;
    qword_140C4BC70 = (__int64)&qword_140C4BC70;
    qword_140C4BC58 = (__int64)&qword_140C4BC50;
    qword_140C4BC50 = (__int64)&qword_140C4BC50;
    qword_140C4BB08 = (__int64)&qword_140C4BB00;
    qword_140C4BB00 = (__int64)&qword_140C4BB00;
    qword_140C4BC48 = (__int64)&qword_140C4BC40;
    qword_140C4BC40 = (__int64)&qword_140C4BC40;
    qword_140C4BC68 = (__int64)&qword_140C4BC60;
    qword_140C4BC60 = (__int64)&qword_140C4BC60;
    qword_140C4BB28 = (__int64)&qword_140C4BB20;
    qword_140C4BB20 = (__int64)&qword_140C4BB20;
    qword_140C4BB18 = (__int64)&qword_140C4BB10;
    qword_140C4BB10 = (__int64)&qword_140C4BB10;
  }
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 8) == 12 )
      v10 = sub_140A61D50(a2, &P);
    else
      v10 = sub_140A5AEB0(a2, &P);
    v4 = v10;
    v11 = P;
    *((_QWORD *)P + 2) = MEMORY[0xFFFFF78000000320];
    if ( v10 < 0 )
      return v4;
    v12 = (_QWORD *)qword_140C4BC48;
    if ( *(__int64 **)qword_140C4BC48 == &qword_140C4BC40 )
    {
      v13 = dword_140C54BA8 == 0;
      *v11 = &qword_140C4BC40;
      v11[1] = v12;
      *v12 = v11;
      qword_140C4BC48 = (__int64)v11;
      if ( v13 )
      {
        dword_140C54BA8 = 1;
        sub_140A5B0D0();
      }
      goto LABEL_16;
    }
    goto LABEL_57;
  }
  if ( *(_BYTE *)(a2 + 64) != 4 )
  {
    switch ( *(_BYTE *)(a2 + 64) )
    {
      case 8:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v20 = sub_140A61D50(a2, &P);
        else
          v20 = sub_140A5AEB0(a2, &P);
        v4 = v20;
        if ( v20 >= 0 )
        {
          v21 = (_QWORD *)qword_140C4BB28;
          if ( *(__int64 **)qword_140C4BB28 != &qword_140C4BB20 )
            goto LABEL_57;
          v22 = P;
          *(_QWORD *)P = &qword_140C4BB20;
          v22[1] = v21;
          *v21 = v22;
          qword_140C4BB28 = (__int64)v22;
        }
        if ( !dword_140D01790 )
          dword_140D01790 = 1;
        break;
      case 9:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v17 = sub_140A61D50(a2, &P);
        else
          v17 = sub_140A5AEB0(a2, &P);
        v4 = v17;
        if ( v17 >= 0 )
        {
          v18 = (_QWORD *)qword_140C4BB18;
          if ( *(__int64 **)qword_140C4BB18 != &qword_140C4BB10 )
            goto LABEL_57;
          v19 = P;
          *(_QWORD *)P = &qword_140C4BB10;
          v19[1] = v18;
          *v18 = v19;
          qword_140C4BB18 = (__int64)v19;
        }
        if ( !dword_140D0178C )
          dword_140D0178C = 1;
        break;
      case 0xA:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v14 = sub_140A61D50(a2, &P);
        else
          v14 = sub_140A5AEB0(a2, &P);
        v4 = v14;
        if ( !dword_140D01788 )
          dword_140D01788 = 1;
        if ( v14 < 0 )
          return v4;
        v15 = P;
        v4 = sub_14051BE58((unsigned __int64)P);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        v16 = (_QWORD *)qword_140C4BB08;
        if ( *(__int64 **)qword_140C4BB08 == &qword_140C4BB00 )
        {
          *v15 = &qword_140C4BB00;
          v15[1] = v16;
          *v16 = v15;
          qword_140C4BB08 = (__int64)v15;
          goto LABEL_16;
        }
        goto LABEL_57;
      default:
        return (unsigned int)-1073741637;
    }
LABEL_15:
    if ( (v4 & 0x80000000) != 0 )
      return v4;
LABEL_16:
    sub_140A5AE1C(a2);
    return v4;
  }
  if ( *(_DWORD *)(a2 + 8) == 12 )
    v3 = sub_140A61D50(a2, &P);
  else
    v3 = sub_140A5AEB0(a2, &P);
  v4 = v3;
  if ( v3 < 0 )
    goto LABEL_13;
  v5 = P;
  v6 = (__int64 *)*((_QWORD *)P + 5);
  if ( *v6 != -1 )
  {
    v7 = MmMapIoSpaceEx(*v6, *((unsigned int *)P + 12), 0x204u);
    v5[7] = v7;
    if ( v7 )
    {
      v8 = (_QWORD *)qword_140C4BC68;
      if ( *(__int64 **)qword_140C4BC68 == &qword_140C4BC60 )
      {
        *v5 = &qword_140C4BC60;
        v5[1] = v8;
        *v8 = v5;
        qword_140C4BC68 = (__int64)v5;
LABEL_13:
        if ( !dword_140C54BA4 )
          dword_140C54BA4 = 1;
        goto LABEL_15;
      }
LABEL_57:
      __fastfail(3u);
    }
  }
  ExFreePoolWithTag(v5, 0x576C6148u);
  return 3221225473LL;
}
