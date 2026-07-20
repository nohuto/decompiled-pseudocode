/*
 * XREFs of CreateRegistryLinksForMachine @ 0x14000D180
 * Callers:
 *     InitializeWow64OnBoot @ 0x14000E6B0 (InitializeWow64OnBoot.c)
 * Callees:
 *     CreateMergeLink @ 0x14000D3A0 (CreateMergeLink.c)
 *     PathReplaceGreedy @ 0x14001B270 (PathReplaceGreedy.c)
 */

__int64 __fastcall CreateRegistryLinksForMachine(unsigned __int16 a1)
{
  unsigned int v1; // ebp
  unsigned __int16 *v2; // r15
  char v3; // r12
  int v4; // ecx
  const UNICODE_STRING *v5; // rbx
  __int16 v6; // di
  USHORT v7; // si
  USHORT v8; // di
  WCHAR *Heap; // rax
  WCHAR *v10; // rax
  int MergeLink; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING v14; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( a1 == 332 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    v4 = a1 - 332;
    if ( v4 )
    {
      if ( v4 == 120 )
        v2 = (unsigned __int16 *)&WowArmNodeString;
    }
    else
    {
      v2 = (unsigned __int16 *)&Wowx86NodeString;
    }
  }
  v5 = &RegistrySymbolicLinks;
  while ( !v3 )
  {
    MergeLink = CreateMergeLink(v5, &v5[1]);
LABEL_13:
    if ( MergeLink >= 0 )
    {
      ++v1;
      v5 += 2;
      if ( v1 < 0x4E )
        continue;
    }
    return (unsigned int)MergeLink;
  }
  v6 = 2 * abs32(24 - *v2);
  v7 = v5[1].MaximumLength + v6;
  v8 = v5->MaximumLength + v6;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.MaximumLength = v8;
  DestinationString.Buffer = Heap;
  v10 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
  *(_QWORD *)&v14.Length = 0LL;
  v14.MaximumLength = v7;
  v14.Buffer = v10;
  if ( !DestinationString.Buffer )
    return 3221225495LL;
  if ( v10 )
  {
    RtlCopyUnicodeString(&DestinationString, v5);
    RtlCopyUnicodeString(&v14, v5 + 1);
    PathReplaceGreedy(&Wowx86NodeString, v2, &DestinationString);
    PathReplaceGreedy(&Wowx86NodeString, v2, &v14);
    MergeLink = CreateMergeLink(&DestinationString, &v14);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v14.Buffer);
    goto LABEL_13;
  }
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return 3221225495LL;
}
