/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800D7460
 * Callers:
 *     <none>
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180014AC0 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v8; // rbp
  const wchar_t *v9; // r14
  unsigned __int16 *v10; // r12
  unsigned __int16 v11; // si
  unsigned __int64 v12; // r8
  __int64 *v13; // rax
  unsigned __int64 *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 v17; // si
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx

  v4 = 0;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v8 = (__int64)(*a4 - *((_QWORD *)a2 + 1)) >> 1;
      if ( v8 >= (unsigned __int64)*a2 >> 1 )
        return (unsigned int)-1073741811;
    }
  }
  v9 = RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString(RtlpDosDevicesUncPrefix, (__int64)a2, 1) )
  {
    v10 = (unsigned __int16 *)&unk_180132520;
    if ( a3 )
      *a3 = 2;
    goto LABEL_14;
  }
  v9 = L"\b\n";
  if ( !RtlPrefixUnicodeString(L"\b\n", (__int64)a2, 1) )
  {
    if ( !a3 )
      return v4;
    v18 = RtlDetermineDosPathNameType_Ustr((__int64)a2);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_31;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_31;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( (unsigned int)(v23 - 1) > 1 )
              return v4;
LABEL_31:
            *a3 = 4;
            return v4;
          }
        }
      }
    }
    *a3 = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&RtlpEmptyString;
  if ( a3 )
    *a3 = 3;
LABEL_14:
  v11 = (*v10 >> 1) + (*a2 >> 1) - (*v9 >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 <= 0xFFFE )
  {
    v13 = (__int64 *)(a2 + 8);
    v14 = (unsigned __int64 *)(a2 + 16);
    if ( a2 == (unsigned __int16 *)-16LL || v12 > *v14 )
    {
      if ( (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v12) < 0 )
        return (unsigned int)-1073741801;
      v13 = (__int64 *)(a2 + 8);
    }
    v15 = *v13;
    v16 = *a2;
    a2[1] = *(_WORD *)v14;
    *((_QWORD *)a2 + 1) = v15;
    memmove(
      (void *)(v15 + 2 * ((unsigned __int64)*v10 >> 1)),
      (const void *)(v15 + 2 * ((unsigned __int64)*v9 >> 1)),
      v16 - *v9);
    memmove(*((void **)a2 + 1), *((const void **)v10 + 1), *v10);
    v17 = 2 * v11;
    *a2 = v17;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v17 >> 1)) = 0;
    if ( v8 )
      *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)*v9 >> 1));
  }
  else
  {
    return (unsigned int)-1073741562;
  }
  return v4;
}
