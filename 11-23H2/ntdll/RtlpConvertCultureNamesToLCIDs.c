/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x1800FC1F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpMultiSZCchLength @ 0x180070294 (LdrpMultiSZCchLength.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     wcsnlen @ 0x180095340 (wcsnlen.c)
 *     RtlConvertLCIDToString @ 0x1800FB510 (RtlConvertLCIDToString.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, _QWORD *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rsi
  void *v5; // r14
  unsigned int v6; // edi
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  DWORD *v12; // rax
  unsigned int v13; // r12d
  PVOID Heap; // rax
  WCHAR *v15; // rsi
  unsigned int v16; // ebp
  LCID *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  int v21; // [rsp+30h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  DWORD v23[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v21) < 0 )
    return 3221225485LL;
  v7 = 2 * v21;
  v8 = 2 * v21;
  v9 = 2 * v21;
  while ( *v4 && v8 )
  {
    if ( v6 >= 4 )
      goto LABEL_17;
    v10 = 2 * wcsnlen(v4, (unsigned __int64)v9 >> 1);
    RtlInitUnicodeString(&DestinationString, v4);
    if ( !RtlCultureNameToLCID(&DestinationString, &v23[v6]) )
      goto LABEL_17;
    v11 = 0;
    if ( v6 )
    {
      v12 = v23;
      while ( v23[v6] != *v12 )
      {
        ++v11;
        ++v12;
        if ( v11 >= v6 )
          goto LABEL_14;
      }
LABEL_17:
      v2 = -1073741811;
LABEL_27:
      *a2 = v5;
      return v2;
    }
LABEL_14:
    v4 = (const wchar_t *)((char *)v4 + v10 + 2);
    v7 = v7 - v10 - 2;
    ++v6;
    v8 = v7;
    v9 = v7;
    if ( !v4 )
      break;
  }
  v13 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(((_WORD)v6 << 6) + 4));
  v5 = Heap;
  if ( !Heap )
  {
    v2 = -1073741801;
    goto LABEL_27;
  }
  v15 = (WCHAR *)Heap;
  v16 = 0;
  if ( !v6 )
  {
LABEL_26:
    *(_DWORD *)v15 = 0;
    goto LABEL_27;
  }
  v17 = v23;
  while ( 1 )
  {
    RtlConvertLCIDToString(*v17, 0x10u, 4u, v15, 0x20u);
    v18 = -1LL;
    do
      ++v18;
    while ( v15[v18] );
    v13 += -2 - v18;
    v19 = -1LL;
    do
      ++v19;
    while ( v15[v19] );
    v15 += v19 + 1;
    if ( v13 < 4 )
      break;
    ++v16;
    ++v17;
    if ( v16 >= v6 )
      goto LABEL_26;
  }
  v2 = -1073741595;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v2;
}
