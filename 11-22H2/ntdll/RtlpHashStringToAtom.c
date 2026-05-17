/*
 * XREFs of RtlpHashStringToAtom @ 0x180003960
 * Callers:
 *     RtlpFreeAllAtom @ 0x1800034BC (RtlpFreeAllAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800035FC (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180003820 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlpAtomMapAtomToHandleEntry @ 0x180003B08 (RtlpAtomMapAtomToHandleEntry.c)
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 **a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 *a7)
{
  __int64 v9; // r10
  wchar_t v10; // ax
  wchar_t *v11; // rsi
  unsigned int v12; // r11d
  int v13; // ecx
  __int64 v14; // rsi
  __int64 *v15; // r15
  __int64 i; // rdi

  v9 = a1;
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v10 = *a2;
    v11 = a2;
    v12 = 0;
    while ( v10 )
    {
      ++v11;
      if ( v10 >= 0x61u )
      {
        if ( v10 > 0x7Au )
          v10 = NLS_UPCASE(qword_1801817B8, v10);
        else
          v10 -= 32;
      }
      v13 = v10 + (v10 >> 1) + 2 * v10;
      v10 = *v11;
      v12 += v13;
    }
    v14 = v11 - a2;
    if ( (unsigned int)v14 > 0xFF )
    {
      v15 = 0LL;
      i = 0LL;
    }
    else
    {
      v15 = (__int64 *)(v9 + 8 * (v12 % *(_DWORD *)(v9 + 64) + 9LL));
      for ( i = *v15;
            i && (*(unsigned __int8 *)(i + 16) != (_DWORD)v14 || wcsicmp((const wchar_t *)(i + 18), a2));
            i = *(_QWORD *)i )
      {
        v15 = (__int64 *)i;
      }
    }
    if ( a4 )
      *a4 = v15;
    if ( !i )
    {
      if ( a5 )
        *a5 = 2 * v14;
      goto LABEL_20;
    }
  }
  else
  {
    i = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      i = RtlpAtomMapAtomToHandleEntry(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
    if ( !i )
      goto LABEL_20;
  }
  if ( !a6 )
  {
LABEL_20:
    *a7 = i;
    return 0LL;
  }
  if ( i != -12 )
  {
    *a6 = i + 12;
    goto LABEL_20;
  }
  return 3221225495LL;
}
