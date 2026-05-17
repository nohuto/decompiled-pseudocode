/*
 * XREFs of LdrpInsertDataTableEntry @ 0x18002CF08
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180014A04 (LdrpHashUnicodeString.c)
 */

void __fastcall LdrpInsertDataTableEntry(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rax
  char **v4; // rdx
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 264) )
      *(_DWORD *)(a1 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(a1 + 88));
    v2 = (char *)(a1 + 112);
    v3 = (char *)&LdrpHashTable + 16 * (*(_DWORD *)(a1 + 264) & 0x1F);
    v4 = (char **)*((_QWORD *)v3 + 1);
    if ( *v4 == v3 )
    {
      v5 = a1 == LdrpImageEntry;
      *(_QWORD *)v2 = v3;
      *(_QWORD *)(a1 + 120) = v4;
      *v4 = v2;
      *((_QWORD *)v3 + 1) = v2;
      if ( v5 )
      {
        v9 = qword_180187450;
        if ( *(__int64 **)(qword_180187450 + 8) == &qword_180187450 )
        {
          *(_QWORD *)a1 = qword_180187450;
          *(_QWORD *)(a1 + 8) = &qword_180187450;
          v10 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(v9 + 8) = a1;
          v11 = qword_180187460;
          qword_180187450 = a1;
          if ( *(__int64 **)(qword_180187460 + 8) == &qword_180187460 )
          {
            *v10 = qword_180187460;
            *(_QWORD *)(a1 + 24) = &qword_180187460;
            *(_QWORD *)(v11 + 8) = v10;
            qword_180187460 = a1 + 16;
            goto LABEL_9;
          }
        }
      }
      else
      {
        v6 = (__int64 *)qword_180187458;
        if ( *(__int64 **)qword_180187458 == &qword_180187450 )
        {
          *(_QWORD *)a1 = &qword_180187450;
          v7 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v6;
          *v6 = a1;
          v8 = (_QWORD *)qword_180187468;
          qword_180187458 = a1;
          if ( *(__int64 **)qword_180187468 == &qword_180187460 )
          {
            *v7 = &qword_180187460;
            *(_QWORD *)(a1 + 24) = v8;
            *v8 = v7;
            qword_180187468 = a1 + 16;
LABEL_9:
            *(_DWORD *)(a1 + 104) |= 0x40u;
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
