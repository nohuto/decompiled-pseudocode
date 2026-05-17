/*
 * XREFs of RtlGetPersistedStateLocation @ 0x18000B480
 * Callers:
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B254 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x18005E310 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1800A0244 (RtlpGetPersistedRegistryLocation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D649C (LdrpAppxGetRemediationRegistryKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E928 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlExpandEnvironmentStrings @ 0x180059A30 (RtlExpandEnvironmentStrings.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 Heap; // rdi
  signed int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // eax
  size_t v15; // r8
  _WORD *v16; // rdx
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // r14
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  HANDLE Handle; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v26; // [rsp+38h] [rbp-39h] BYREF
  int v27; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  int v29; // [rsp+58h] [rbp-19h] BYREF
  HANDLE v30; // [rsp+60h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-9h]
  int v32; // [rsp+70h] [rbp-1h]
  __int128 v33; // [rsp+78h] [rbp+7h]
  int v34; // [rsp+D8h] [rbp+67h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  Heap = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_180187D50 )
  {
    v11 = -1073741772;
    goto LABEL_4;
  }
  v29 = 48;
  p_DestinationString = (UNICODE_STRING *)((char *)&unk_180133180 + 16 * (int)a4);
  v30 = 0LL;
  v32 = 64;
  v33 = 0LL;
  v18 = NtOpenKey(&Handle, 131097LL, &v29);
  v11 = v18;
  if ( v18 == -1073741772 )
  {
    byte_180187D50 = 1;
    goto LABEL_4;
  }
  if ( v18 < 0 )
    goto LABEL_13;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v30 = Handle;
  v29 = 48;
  p_DestinationString = &DestinationString;
  v32 = 64;
  v33 = 0LL;
  v19 = NtOpenKey(&v26, 131097LL, &v29);
  v11 = v19;
  if ( v19 != -1073741772 )
  {
    if ( v19 < 0 )
      goto LABEL_13;
    if ( !a2 )
      a2 = L"TargetPath";
    RtlInitUnicodeString(&DestinationString, a2);
    v20 = a6;
    v21 = a6 + 16;
    if ( a6 + 16 < a6 )
      goto LABEL_31;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v21);
    if ( !Heap )
    {
      v11 = -1073741801;
      goto LABEL_13;
    }
    v11 = NtQueryValueKey(v26, &DestinationString, 2LL, Heap, v21, &v34);
    if ( v11 < 0 )
    {
      if ( v11 != -2147483643 )
        goto LABEL_13;
    }
    else if ( (unsigned int)(*(_DWORD *)(Heap + 4) - 1) > 1 )
    {
      v11 = -1073741788;
      goto LABEL_13;
    }
    v22 = *(_DWORD *)(Heap + 8);
    v16 = (_WORD *)(Heap + 12);
    v34 = v22;
    if ( v11 >= 0 )
    {
      if ( !v16[((unsigned __int64)v22 >> 1) - 1] )
        goto LABEL_40;
      v23 = v22 + 2;
      v34 = v23;
      v22 += 2;
      if ( (unsigned int)v20 >= (unsigned int)v23 )
      {
        v16[(v23 >> 1) - 1] = 0;
        v22 = v34;
LABEL_40:
        if ( *(_DWORD *)(Heap + 4) == 2 )
        {
          v24 = -1LL;
          do
            ++v24;
          while ( v16[v24] );
          v11 = RtlExpandEnvironmentStrings(0, (_DWORD)v16, v24, (_DWORD)a5, v20 >> 1, (__int64)&v27);
          if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
          {
            if ( a7 )
              *a7 = 2 * v27;
            if ( v11 == -1073741789 )
              v11 = -2147483643;
          }
          goto LABEL_13;
        }
        goto LABEL_50;
      }
      v11 = -2147483643;
    }
LABEL_50:
    if ( a7 )
      *a7 = v22;
    if ( v11 < 0 )
      goto LABEL_13;
    v15 = v22;
LABEL_12:
    memmove(a5, v16, v15);
    goto LABEL_13;
  }
LABEL_4:
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    v34 = 2 * v13;
    if ( 2 * v13 >= v13 )
    {
      v11 = a6 < v14 ? 0x80000005 : 0;
      if ( a7 )
        *a7 = v14;
      if ( v14 > a6 )
        goto LABEL_13;
      v15 = v14;
      v16 = a3;
      goto LABEL_12;
    }
LABEL_31:
    v11 = -1073741675;
  }
LABEL_13:
  if ( Handle )
    NtClose(Handle);
  if ( v26 )
    NtClose(v26);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return (unsigned int)v11;
}
