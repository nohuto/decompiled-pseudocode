/*
 * XREFs of sub_1406746F0 @ 0x1406746F0
 * Callers:
 *     sub_140673C3C @ 0x140673C3C (sub_140673C3C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1402A07F0 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall sub_1406746F0(__int64 a1, __int64 a2)
{
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v4; // rax

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) == 0 )
  {
    ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      if ( v4 )
      {
        *(_DWORD *)a2 = v4->OptionalHeader.CheckSum;
        *(_DWORD *)(a2 + 4) = v4->FileHeader.TimeDateStamp;
      }
    }
  }
  return 0LL;
}
