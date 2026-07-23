/*
 * XREFs of sub_1405DD2E0 @ 0x1405DD2E0
 * Callers:
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_1405D9630 @ 0x1405D9630 (sub_1405D9630.c)
 */

_BYTE *__fastcall sub_1405DD2E0(__int64 a1)
{
  int v2; // edx
  _BYTE *result; // rax

  sub_14057C888(a1, 0);
  v2 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)asc_140C0B9F0, v2);
  if ( *(_BYTE *)(a1 + 33659) )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)asc_140C0D220, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 0;
  }
  sub_1405D9630(a1);
  result = *(_BYTE **)(a1 + 33600);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 33669) = 1;
  }
  return result;
}
