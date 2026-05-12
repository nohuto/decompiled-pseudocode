/*
 * XREFs of sub_1C00072E0 @ 0x1C00072E0
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C00A39D0 @ 0x1C00A39D0 (sub_1C00A39D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C00072E0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v1 != 1094997074 )
  {
    if ( *(_DWORD *)v1 == 1431193940 )
      return (*(_BYTE *)(v1 + 451) & 2) != 0;
    return 0;
  }
  return (*(_BYTE *)(v1 + 109) & 0x40) != 0;
}
