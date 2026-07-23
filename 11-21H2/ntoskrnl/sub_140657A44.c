/*
 * XREFs of sub_140657A44 @ 0x140657A44
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_1406A7690 @ 0x1406A7690 (sub_1406A7690.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

char __fastcall sub_140657A44(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r9

  v1 = a1;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( (v2 & 0x8000u) != 0LL )
    return 1;
  while ( 1 )
  {
    v3 = sub_140721CE0(v1, v2);
    if ( *(_DWORD *)(v3 + 40) != -1 )
      break;
    LOWORD(v2) = v2 - 1;
    if ( (v2 & 0x8000u) != 0LL )
      return 1;
  }
  return sub_1406A7690(v3, v4);
}
