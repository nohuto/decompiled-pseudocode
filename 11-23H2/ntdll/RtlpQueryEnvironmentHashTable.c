/*
 * XREFs of RtlpQueryEnvironmentHashTable @ 0x1800D8FB4
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlpFindEnvironmentHashEntry @ 0x18001EEA0 (RtlpFindEnvironmentHashEntry.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpQueryEnvironmentHashTable(
        __int64 a1,
        const WCHAR *a2,
        SIZE_T a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 EnvironmentHashEntry; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  const void *v10; // rdx
  __int64 v11; // rbx

  EnvironmentHashEntry = RtlpFindEnvironmentHashEntry(a1, a2, a3);
  v8 = 0;
  if ( EnvironmentHashEntry )
  {
    v9 = *(_QWORD *)(EnvironmentHashEntry + 40);
    v10 = *(const void **)(EnvironmentHashEntry + 24);
    if ( a4 )
    {
      if ( v9 < a5 )
      {
        v11 = v9;
        *a6 = v9;
        memmove(a4, v10, 2 * v9);
        a4[v11] = 0;
        return v8;
      }
      if ( a5 )
        *a4 = 0;
    }
    v8 = -1073741789;
    *a6 = v9 + 1;
    return v8;
  }
  return (unsigned int)-1073741568;
}
