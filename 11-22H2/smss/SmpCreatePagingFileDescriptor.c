/*
 * XREFs of SmpCreatePagingFileDescriptor @ 0x14000A43C
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseCommandLine @ 0x140005150 (SmpParseCommandLine.c)
 *     SmpParseSwapOrPageFileArguments @ 0x14000A5C0 (SmpParseSwapOrPageFileArguments.c)
 */

__int64 __fastcall SmpCreatePagingFileDescriptor(__int128 *a1)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // r14d
  _DWORD *Heap; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rax
  WCHAR v9; // ax
  __int64 *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING v16; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v18; // [rsp+80h] [rbp+30h] BYREF

  if ( (unsigned int)SmpNumberOfPagefileDescriptors >= 0x10 )
    return 3221225623LL;
  v2 = SmpParseCommandLine(a1, 0LL, &v16, 0LL, &UnicodeString);
  if ( v2 < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v12 + 2] = 998;
    SmpGlobalLog[2 * v12 + 3] = v2;
    *(_QWORD *)&SmpGlobalLog[2 * v12 + 4] = a1;
    return (unsigned int)v2;
  }
  Value = 0;
  v18 = 0;
  SmpRegistrySpecifierPresent = 1;
  if ( !UnicodeString.Buffer )
    goto LABEL_16;
  v3 = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v18);
  if ( v3 < 0 )
  {
    v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    *(_QWORD *)&SmpGlobalLog[2 * v13 + 4] = 0LL;
    SmpGlobalLog[2 * v13 + 2] = 1036;
    SmpGlobalLog[2 * v13 + 3] = v3;
    RtlFreeUnicodeString(&v16);
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)v3;
  }
  if ( !Value || (v4 = 0, !v18) )
LABEL_16:
    v4 = 1;
  RtlFreeUnicodeString(&UnicodeString);
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v6 = (__int64)Heap;
  if ( Heap )
  {
    v7 = Heap[23] & 0xFFFFFFFD;
    *((_OWORD *)Heap + 2) = *a1;
    *((struct _UNICODE_STRING *)Heap + 1) = v16;
    *((_QWORD *)Heap + 7) = (unsigned __int64)Value << 20;
    *((_QWORD *)Heap + 6) = (unsigned __int64)Value << 20;
    *((_QWORD *)Heap + 8) = (unsigned __int64)v18 << 20;
    v8 = *((_QWORD *)Heap + 3);
    *(_DWORD *)(v6 + 92) = (2 * v4) | v7;
    v9 = RtlUpcaseUnicodeChar(*(_WORD *)(v8 + 8));
    *(_WORD *)(*(_QWORD *)(v6 + 24) + 8LL) = v9;
    if ( v9 != 63 )
    {
LABEL_9:
      if ( (*(_BYTE *)(v6 + 92) & 2) != 0 && (v9 == 63 || v9 == SmpOsVolumeLetter) )
      {
        v14 = SmpPagingFileDescriptorList;
        if ( *((PVOID **)SmpPagingFileDescriptorList + 1) == &SmpPagingFileDescriptorList )
        {
          *(_QWORD *)v6 = SmpPagingFileDescriptorList;
          *(_QWORD *)(v6 + 8) = &SmpPagingFileDescriptorList;
          v14[1] = v6;
          SmpPagingFileDescriptorList = (PVOID)v6;
          goto LABEL_12;
        }
      }
      else
      {
        v10 = (__int64 *)qword_14002BCD8;
        if ( *(PVOID **)qword_14002BCD8 == &SmpPagingFileDescriptorList )
        {
          *(_QWORD *)v6 = &SmpPagingFileDescriptorList;
          *(_QWORD *)(v6 + 8) = v10;
          *v10 = v6;
          qword_14002BCD8 = v6;
LABEL_12:
          ++SmpNumberOfPagefileDescriptors;
          return 0LL;
        }
      }
      __fastfail(3u);
    }
    if ( SmpAnyDriveDescriptorCreated != 1 )
    {
      *(_DWORD *)(v6 + 92) |= 4u;
      SmpAnyDriveDescriptorCreated = 1;
      goto LABEL_9;
    }
    RtlFreeUnicodeString(&v16);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v6);
    return 3221225485LL;
  }
  else
  {
    RtlFreeUnicodeString(&v16);
    return 3221225495LL;
  }
}
