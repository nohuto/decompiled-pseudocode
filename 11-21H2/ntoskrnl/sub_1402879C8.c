/*
 * XREFs of sub_1402879C8 @ 0x1402879C8
 * Callers:
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402879C8(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
