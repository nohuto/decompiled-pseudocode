/*
 * XREFs of AslRegistryBuildMachinePath @ 0x180098598
 * Callers:
 *     AslRegistryGetKey @ 0x18009876C (AslRegistryGetKey.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  SIZE_T v6; // r8
  WCHAR *Heap; // rax
  int MaximumLength; // [rsp+20h] [rbp-28h]
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v4 = 0;
  Destination->Length = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  v6 = (unsigned __int16)(Sourcea.Length + 2 * (v5 + 1));
  Destination->MaximumLength = v6;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  Destination->Buffer = Heap;
  if ( Heap )
  {
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    if ( Source && *Source != 92 )
      RtlAppendUnicodeToString(Destination, L"\\");
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    MaximumLength = Destination->MaximumLength;
    v4 = -1073741801;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslRegistryBuildMachinePath",
      1420,
      (unsigned int)"Failed to allocate %d bytes for user key buffer",
      MaximumLength);
  }
  return v4;
}
