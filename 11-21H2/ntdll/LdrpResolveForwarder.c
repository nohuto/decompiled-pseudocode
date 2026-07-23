/*
 * XREFs of LdrpResolveForwarder @ 0x18003F350
 * Callers:
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlCharToInteger @ 0x18007A470 (RtlCharToInteger.c)
 *     strrchr @ 0x180098E80 (strrchr.c)
 *     LdrpCheckRedirection @ 0x1800E1248 (LdrpCheckRedirection.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800F5D80 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall LdrpResolveForwarder(char *Str, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r15
  __int64 *v5; // rsi
  char *v9; // rax
  __int16 v10; // di
  const char *v11; // r14
  unsigned __int64 v12; // rsi
  char *v13; // r15
  bool v14; // bl
  char *v15; // rdi
  NTSTATUS v16; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  int v19; // r10d
  int v20; // r11d
  int v21; // r9d
  const char *v22; // rcx
  signed __int64 v23; // rdx
  unsigned __int8 v24; // al
  int v25; // ecx
  int v26; // eax
  ULONG v27; // ecx
  char *v28; // rbx
  unsigned int v29; // edi
  int v31; // eax
  ULONG v32; // ebx
  __int64 v33; // rax
  int v34; // [rsp+40h] [rbp-29h]
  ULONG Value; // [rsp+44h] [rbp-25h] BYREF
  __int64 v36; // [rsp+48h] [rbp-21h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-19h] BYREF
  __int64 v38; // [rsp+58h] [rbp-11h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-9h] BYREF
  ANSI_STRING SourceString; // [rsp+68h] [rbp-1h] BYREF
  __int64 v41; // [rsp+80h] [rbp+17h]
  unsigned int Size; // [rsp+E0h] [rbp+77h]

  v4 = *(_QWORD *)(a3 + 176);
  v34 = 0;
  v5 = a4;
  v36 = 0LL;
  v41 = v4;
  BaseAddress = 0LL;
  while ( 1 )
  {
    v9 = strrchr(Str, 46);
    if ( !v9 || (v10 = (_WORD)v9 - (_WORD)Str, (unsigned __int64)(v9 - Str) > 0xFFFF) )
    {
LABEL_57:
      v29 = -1073741701;
      goto LABEL_42;
    }
    v11 = v9 + 1;
    SourceString.Buffer = Str;
    SourceString.Length = (_WORD)v9 - (_WORD)Str;
    SourceString.MaximumLength = (_WORD)v9 - (_WORD)Str;
    if ( v9[1] == 35 )
    {
      if ( RtlCharToInteger(v9 + 2, 0, &Value) < 0 )
        goto LABEL_57;
      v11 = 0LL;
    }
    if ( v10 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      a2 = LdrpNtDllDataTableEntry;
      v36 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v31 = LdrpLoadDependentModuleA(&SourceString, v4, a2, 1LL, &v36, (__int64)&BaseAddress);
      v29 = v31;
      if ( v31 < 0 || v31 == 259 )
        goto LABEL_42;
      a2 = v36;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a3 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v11 )
      {
        v33 = LdrpCheckRedirection(a3, a2, v11);
        *v5 = v33;
        if ( v33 != -4530927 )
          return 0LL;
      }
    }
    v12 = *(_QWORD *)(a2 + 48);
    v13 = 0LL;
    OutHeaders = 0LL;
    v14 = 1;
    v38 = 0LL;
    v15 = (char *)v12;
    if ( (v12 & 3) != 0 )
    {
      v15 = (char *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
      v14 = (v12 & 1) == 0;
    }
    v16 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
    if ( !OutHeaders )
      goto LABEL_62;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v16 = RtlpImageDirectoryEntryToData32(v15, OutHeaders, (__int64)&v38);
      v13 = (char *)v38;
LABEL_62:
      if ( v16 < 0 )
        goto LABEL_63;
      goto LABEL_19;
    }
    if ( Magic != 523 )
      goto LABEL_63;
    if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      goto LABEL_63;
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
      goto LABEL_63;
    Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
    if ( v14 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v13 = &v15[VirtualAddress];
    }
    else
    {
      v13 = (char *)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
      if ( !v13 )
        goto LABEL_63;
    }
LABEL_19:
    if ( !v13 )
      goto LABEL_63;
    if ( v11 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        829,
        (__int64)"LdrpGetProcedureAddress",
        2u,
        "Locating procedure \"%s\" by name\n",
        v11);
      v19 = 0;
      v20 = *((_DWORD *)v13 + 6) - 1;
      v21 = v20 / 2;
      if ( v20 < 0 )
      {
LABEL_67:
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2203,
          (__int64)"LdrpNameToOrdinal",
          1u,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v11,
          (const void *)v12);
LABEL_63:
        v29 = -1073741702;
        goto LABEL_42;
      }
      while ( 1 )
      {
        v22 = v11;
        v23 = v12 + *(unsigned int *)(v12 + *((unsigned int *)v13 + 8) + 4LL * v21) - (_QWORD)v11;
        while ( 1 )
        {
          v24 = *v22;
          if ( *v22 != v22[v23] )
            break;
          ++v22;
          if ( !v24 )
          {
            v25 = 0;
            goto LABEL_26;
          }
        }
        v25 = v24 < (unsigned int)v22[v23] ? -1 : 1;
LABEL_26:
        if ( !v25 )
          break;
        v26 = v21 - 1;
        if ( v25 >= 0 )
          v26 = v20;
        v20 = v26;
        if ( v25 >= 0 )
          v19 = v21 + 1;
        v21 = (v19 + v26) / 2;
        if ( v26 < v19 )
          goto LABEL_67;
      }
      v27 = *(unsigned __int16 *)(v12 + *((unsigned int *)v13 + 9) + 2LL * v21);
    }
    else
    {
      v32 = Value;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        847,
        (__int64)"LdrpGetProcedureAddress",
        2u,
        "Loading procedure 0x%lx by ordinal\n",
        Value);
      if ( !v32 )
      {
        v29 = -1073741811;
        goto LABEL_42;
      }
      v27 = v32 - *((_DWORD *)v13 + 4);
    }
    if ( v27 >= *((_DWORD *)v13 + 5) )
    {
      v29 = (v11 != 0LL) - 1073741512;
      goto LABEL_42;
    }
    Str = (char *)(v12 + *(unsigned int *)(v12 + *((unsigned int *)v13 + 7) + 4LL * (int)v27));
    v5 = a4;
    *a4 = (__int64)Str;
    if ( Str < v13 || Str >= &v13[Size] )
      break;
    if ( ++v34 == 32 )
      goto LABEL_57;
    v4 = v41;
  }
  v28 = *(char **)(a2 + 48);
  v29 = 0;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( (unsigned __int64)v28 < *((_QWORD *)&xmmword_18018F510 + 1)
      || (unsigned __int64)v28 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
    {
      RtlpxLookupFunctionTable(*(PVOID *)(a2 + 48), (__int64 *)&SourceString);
    }
    else
    {
      SourceString = (ANSI_STRING)xmmword_18018F510;
    }
    if ( SourceString.Buffer != v28 )
      __fastfail(0x18u);
  }
LABEL_42:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return v29;
}
