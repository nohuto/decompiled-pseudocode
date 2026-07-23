/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4
 * Callers:
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpFindExistingModule @ 0x180051548 (LdrpFindExistingModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        unsigned __int16 *a1,
        _UNICODE_STRING *a2,
        char a3,
        _QWORD *a4,
        int a5)
{
  BOOLEAN v7; // r9
  _QWORD **v8; // rdi
  char v9; // al
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  char *v14; // r10
  char *v15; // r11
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int16 *v20; // r10
  __int16 v21; // ax
  __int16 v22; // r9

  v7 = 0;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v9 = a3;
  v11 = *v8;
  if ( *v8 == v8 )
    return v7 == 0 ? 0xC0000135 : 0;
  while ( 1 )
  {
    v12 = v11 - 14;
    if ( a5 != *((_DWORD *)v11 + 38) || (v9 & 8) != 0 && (v12[13] & 1) == 0 )
      goto LABEL_19;
    if ( !a2 )
      break;
    v7 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v12 + 9), 1u);
    if ( v7 )
      goto LABEL_12;
LABEL_19:
    v11 = (_QWORD *)*v11;
    if ( v11 == v8 )
      return v7 == 0 ? 0xC0000135 : 0;
    v9 = a3;
  }
  if ( (v12[13] & 0x10000000) != 0 || (v13 = *a1, (_WORD)v13 != *((_WORD *)v12 + 44)) )
  {
LABEL_18:
    v7 = 0;
    goto LABEL_19;
  }
  v14 = (char *)*((_QWORD *)a1 + 1);
  v15 = &v14[v13];
  if ( v14 < &v14[v13] )
  {
    v16 = v12[12] - (_QWORD)v14;
    do
    {
      v17 = *(unsigned __int16 *)&v14[v16];
      if ( *(_WORD *)v14 != (_WORD)v17 )
      {
        NLS_UPCASE(qword_1801776F8, v17);
        v21 = NLS_UPCASE(qword_1801776F8, *v20);
        if ( v21 != v22 )
          goto LABEL_18;
      }
      v14 += 2;
    }
    while ( v14 < v15 );
  }
  v7 = 1;
LABEL_12:
  v18 = v12[19];
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v12 + 69);
  *a4 = v12;
  return v7 == 0 ? 0xC0000135 : 0;
}
