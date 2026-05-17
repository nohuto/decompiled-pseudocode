/*
 * XREFs of LdrpInsertDataTableEntry @ 0x18002D0D8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180014C14 (LdrpHashUnicodeString.c)
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
        v9 = qword_180184390;
        if ( *(__int64 **)(qword_180184390 + 8) == &qword_180184390 )
        {
          *(_QWORD *)a1 = qword_180184390;
          *(_QWORD *)(a1 + 8) = &qword_180184390;
          v10 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(v9 + 8) = a1;
          v11 = qword_1801843A0;
          qword_180184390 = a1;
          if ( *(__int64 **)(qword_1801843A0 + 8) == &qword_1801843A0 )
          {
            *v10 = qword_1801843A0;
            *(_QWORD *)(a1 + 24) = &qword_1801843A0;
            *(_QWORD *)(v11 + 8) = v10;
            qword_1801843A0 = a1 + 16;
            goto LABEL_9;
          }
        }
      }
      else
      {
        v6 = (__int64 *)qword_180184398;
        if ( *(__int64 **)qword_180184398 == &qword_180184390 )
        {
          *(_QWORD *)a1 = &qword_180184390;
          v7 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v6;
          *v6 = a1;
          v8 = (_QWORD *)qword_1801843A8;
          qword_180184398 = a1;
          if ( *(__int64 **)qword_1801843A8 == &qword_1801843A0 )
          {
            *v7 = &qword_1801843A0;
            *(_QWORD *)(a1 + 24) = v8;
            *v8 = v7;
            qword_1801843A8 = a1 + 16;
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
