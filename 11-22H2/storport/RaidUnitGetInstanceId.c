/*
 * XREFs of RaidUnitGetInstanceId @ 0x1C001F928
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1C001F9BC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RaidUnitGetInstanceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  wchar_t *v5; // rdi
  NTSTATUS result; // eax

  Pool = (wchar_t *)RaidAllocatePool(256LL, 40LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
      result = RtlStringCchPrintfW(Pool, 0x14uLL, L"%06x", *(_DWORD *)(a1 + 96) & 0xFFFFFF);
    else
      result = RtlStringCchPrintfW(
                 Pool,
                 0x14uLL,
                 L"%02x%02x%02x",
                 *(unsigned __int8 *)(a1 + 96),
                 *(unsigned __int8 *)(a1 + 97),
                 *(unsigned __int8 *)(a1 + 98));
  }
  else
  {
    result = -1073741801;
  }
  *a2 = v5;
  return result;
}
