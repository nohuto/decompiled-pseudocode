/*
 * XREFs of sub_1402D99BC @ 0x1402D99BC
 * Callers:
 *     sub_14076146C @ 0x14076146C (sub_14076146C.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_14097F8B0 @ 0x14097F8B0 (sub_14097F8B0.c)
 */

__int64 __fastcall sub_1402D99BC(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+20h] BYREF

  OutHeaders = 0LL;
  if ( (dword_140D06880 & 0x40000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(a1 + 48), 0LL, &OutHeaders);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = sub_1406EB4B0(a1, OutHeaders);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 )
    return 0LL;
  if ( (a2 & 8) != 0 )
    return 0LL;
  result = sub_14097F8B0(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
