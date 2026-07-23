/*
 * XREFs of sub_14025E6B4 @ 0x14025E6B4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 *     sub_140983C8C @ 0x140983C8C (sub_140983C8C.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025E6B4(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  return result;
}
