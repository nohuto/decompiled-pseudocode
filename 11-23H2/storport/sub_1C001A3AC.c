/*
 * XREFs of sub_1C001A3AC @ 0x1C001A3AC
 * Callers:
 *     sub_1C00207F8 @ 0x1C00207F8 (sub_1C00207F8.c)
 *     sub_1C002095C @ 0x1C002095C (sub_1C002095C.c)
 *     sub_1C00A1BE4 @ 0x1C00A1BE4 (sub_1C00A1BE4.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001A3AC(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 104);
  if ( !v1 || (*v1 & 0x1F) != 0x14 )
    return 0LL;
  if ( byte_1C0093AEB && *(int *)(*(_QWORD *)(a1 + 24) + 4600LL) <= 1 )
    return *(_BYTE *)(a1 + 451) & 1;
  return 1LL;
}
