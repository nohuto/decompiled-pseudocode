/*
 * XREFs of SdbpCheckPackageAttributes @ 0x18009B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x180096690 (ULongLongMult.c)
 *     SdbpCheckFromVersion @ 0x180098660 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x1800986A4 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800986E8 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800994C4 (SdbReadQWORDTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x18009E894 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        ULONGLONG pullResult)
{
  unsigned int v6; // ebx
  int v9; // ebp
  unsigned __int64 v10; // rsi
  ULONGLONG *v11; // r15
  unsigned int FirstTag; // r10d
  ULONGLONG v13; // rax
  ULONGLONG v14; // r9
  char *v15; // r11
  ULONGLONG v16; // rdi
  unsigned __int16 v17; // ax
  __int64 StringTagPtr; // rax
  int v19; // eax
  unsigned __int64 QWORDTag; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(ULONGLONG **)(pullResult + 88);
  *a1 = 0;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_1800DC8C0 + v10));
    if ( FirstTag )
      break;
LABEL_34:
    v10 += 4LL;
    if ( v10 >= 0x28 )
    {
      *a1 = v9;
      return 1;
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  if ( v13 )
  {
    v15 = (char *)&unk_1800DC8C0;
    do
    {
      v16 = 0LL;
      if ( v14 < v13 )
      {
        if ( ULongLongMult(v11[1], v14, &pullResult) < 0 || (v16 = v11[5] + pullResult, v16 < v11[5]) )
          v16 = 0LL;
      }
      if ( *(_WORD *)v16 == *(_WORD *)&v15[v10 + 2] )
        break;
      v13 = v11[2];
      ++v14;
      v16 = 0LL;
    }
    while ( v14 < v13 );
    if ( v16 )
    {
      v17 = *(_WORD *)&v15[v10];
      if ( v17 == 16453 )
      {
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v6;
        v19 = DWORDTag == *(_DWORD *)(v16 + 8);
        goto LABEL_31;
      }
      if ( v17 != 20500 )
      {
        if ( v17 == 20501 )
          goto LABEL_25;
        if ( v17 == 20502 )
        {
LABEL_23:
          QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( QWORDTag == -1LL )
            return v6;
          v19 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v16 + 8));
LABEL_31:
          if ( !v9 || (v9 = 1, !v19) )
            v9 = 0;
          goto LABEL_34;
        }
        if ( v17 != 20503 )
        {
          if ( v17 != 20504 )
          {
            if ( v17 != 20505 )
            {
              if ( v17 <= 0x6028u )
                return v6;
              if ( v17 > 0x602Bu )
                return v6;
              StringTagPtr = SdbGetStringTagPtr(*(_QWORD *)(a2 + 8), FirstTag);
              if ( !StringTagPtr )
                return v6;
              v19 = AslStringPatternMatchExW(StringTagPtr, *(_QWORD *)(v16 + 8));
              goto LABEL_31;
            }
            goto LABEL_23;
          }
LABEL_25:
          v21 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( v21 == -1LL )
            return v6;
          v19 = SdbpCheckFromVersion(v21, *(_QWORD *)(v16 + 8));
          goto LABEL_31;
        }
      }
      v22 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
      if ( v22 == -1LL )
        return v6;
      v19 = SdbpCheckVersion(v22, *(_QWORD *)(v16 + 8));
      goto LABEL_31;
    }
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckPackageAttributes",
    4424,
    (unsigned int)"Failed to find Attribute to use for sdb tag");
  return v6;
}
