/*
 * XREFs of sub_1407556D4 @ 0x1407556D4
 * Callers:
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     sub_1406E5F34 @ 0x1406E5F34 (sub_1406E5F34.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_1402D6AD0 @ 0x1402D6AD0 (sub_1402D6AD0.c)
 */

__int64 __fastcall sub_1407556D4(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = sub_1402D6AD0(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    sub_1402D6A98(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
