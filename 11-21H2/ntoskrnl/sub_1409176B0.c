/*
 * XREFs of sub_1409176B0 @ 0x1409176B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 */

__int64 __fastcall sub_1409176B0(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !sub_14071A6D4(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    sub_14071B3F0(a1);
  }
  return 0LL;
}
