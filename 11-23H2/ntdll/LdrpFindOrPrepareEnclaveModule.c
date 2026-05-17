/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800D8A40
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D882C (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D84C4 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int v7; // edi
  const void **v9; // rsi
  char v11; // al
  const void **v12; // rcx
  _QWORD *i; // rbx

  v7 = 0;
  v9 = (const void **)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_1801345E0, a2, 1) )
    {
      if ( a5 == a1[15] || a5 == a1[16] )
        v9 = (const void **)&unk_180134620;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = (const void **)&unk_180134620;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (_QWORD *)a1[12]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 12 )
      return (unsigned int)LdrpCreatePendingEnclaveModule(a1, v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString((unsigned __int16 *)v9, i[22], 1) )
      break;
  }
  *a6 = i;
  return v7;
}
