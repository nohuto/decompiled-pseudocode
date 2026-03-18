/*
 * XREFs of xxxUserYield @ 0x1C01E57EC
 * Callers:
 *     NtUserYieldTask @ 0x1C0200A00 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 448); (*(_DWORD *)(i + 8) & 0x40) != 0; i = *(_QWORD *)(a1 + 448) )
    xxxReceiveMessage(a1);
  return 1LL;
}
