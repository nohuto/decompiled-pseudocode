/*
 * XREFs of LdrpResGetResourceDirectory @ 0x14075A6B8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1402F7FA8 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B80 (RtlImageNtHeaderEx.c)
 *     RtlULongLongAdd @ 0x1402504A0 (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1407D7080 (LdrpSectionTableFromVirtualAddress.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        ULONGLONG ullAugend,
        ULONG64 Size,
        __int16 a3,
        ULONGLONG *a4,
        PIMAGE_NT_HEADERS *a5)
{
  unsigned __int64 v6; // rdi
  int v7; // ebx
  char v8; // r14
  bool v9; // si
  int v10; // r15d
  NTSTATUS result; // eax
  int v12; // r9d
  PIMAGE_NT_HEADERS v13; // r13
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned __int16 Magic; // ax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  ULONGLONG v19; // rdx
  unsigned int *v20; // rax
  unsigned __int64 v21; // r8
  int v22; // eax
  int v23; // ecx
  ULONGLONG pullResult; // [rsp+40h] [rbp-128h] BYREF
  ULONGLONG v25; // [rsp+48h] [rbp-120h]
  __int128 v26; // [rsp+50h] [rbp-118h]
  __int128 v27; // [rsp+60h] [rbp-108h]
  __int128 v28; // [rsp+70h] [rbp-F8h]
  __int128 v29; // [rsp+80h] [rbp-E8h]
  __int128 v30; // [rsp+90h] [rbp-D8h]
  __int128 v31; // [rsp+A0h] [rbp-C8h]
  __int128 v32; // [rsp+B0h] [rbp-B8h]
  __int128 ullAddend; // [rsp+C0h] [rbp-A8h]
  __int128 v34; // [rsp+D0h] [rbp-98h]
  __int128 v35; // [rsp+E0h] [rbp-88h]
  __int128 v36; // [rsp+F0h] [rbp-78h]
  __int128 v37; // [rsp+100h] [rbp-68h]
  __int128 v38; // [rsp+110h] [rbp-58h]
  __int128 v39; // [rsp+120h] [rbp-48h]
  __int128 v40; // [rsp+130h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+170h] [rbp+8h] BYREF
  ULONGLONG *v42; // [rsp+188h] [rbp+20h]

  v42 = a4;
  v6 = ullAugend;
  v7 = 0;
  v25 = 0LL;
  OutHeaders = 0LL;
  v8 = 1;
  v9 = 1;
  pullResult = 0LL;
  if ( !ullAugend || !a4 || !a5 )
    return -1073741811;
  if ( (ullAugend & 3) != 0 )
  {
    v6 = ullAugend & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(ullAugend & 1);
  }
  v10 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v10 == 0, (PVOID)v6, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v13 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v26 = *(_OWORD *)&p_OptionalHeader->Magic;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      ullAddend = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
    }
    else
    {
      if ( Magic != 523 )
        return -1073741701;
      v26 = *(_OWORD *)&p_OptionalHeader->Magic;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      ullAddend = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v8 = 0;
    }
    v16 = HIDWORD(v32);
    if ( v8 )
      v16 = HIDWORD(v31);
    if ( v16 <= 2 )
      return -1073741687;
    v17 = (unsigned int)v34;
    if ( v8 )
      v17 = (unsigned int)ullAddend;
    if ( !(_DWORD)v17 )
      return -1073741687;
    v18 = (unsigned int)v17;
    if ( v6 <= 0x7FFFFFFEFFFFLL && (v6 + v17 - 1 < v6 || (unsigned int)v17 + v6 - 1 > 0x7FFFFFFEFFFFLL) )
      return -1073741701;
    if ( v9 || (unsigned int)v17 < HIDWORD(v29) )
    {
      if ( RtlULongLongAdd(v6, (unsigned int)v17, &pullResult) < 0 )
        return -1073741701;
      v19 = pullResult;
    }
    else
    {
      v20 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v6, Size, (_DWORD)OutHeaders, v12, v17, v10 != 0);
      if ( !v20 )
        return -1073741701;
      if ( !v20[4] )
        return -1073741687;
      v19 = v6 + v18 + v20[5] - (unsigned __int64)v20[3];
    }
    v25 = v19;
    if ( !v19 )
      return -1073741687;
    if ( v10 )
    {
      if ( v19 <= v6 )
        return -1073741701;
      v21 = (v6 & 0xFFFFFFFFFFFFFFFCuLL) + Size;
      if ( v19 + 16 > v21 )
        return -1073741701;
      v22 = *(unsigned __int16 *)(v19 + 12);
      v23 = *(unsigned __int16 *)(v19 + 14);
      if ( !__PAIR32__(v23, v22) )
        return -1073741686;
      if ( v19 + 8LL * (unsigned int)(v22 + v23) > v21 )
        return -1073741701;
    }
    *v42 = v19;
    *a5 = v13;
    return v7;
  }
  return result;
}
