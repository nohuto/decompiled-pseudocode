/*
 * XREFs of sub_140720DD4 @ 0x140720DD4
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

bool __fastcall sub_140720DD4(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = a1;
  if ( (v1 & 0x8000u) != 0LL )
    return 0;
  while ( 1 )
  {
    v3 = sub_140721CE0(v2, v1);
    if ( *(_DWORD *)(v3 + 40) != -1 )
      break;
    LOWORD(v1) = v1 - 1;
    if ( (v1 & 0x8000u) != 0LL )
      return 0;
  }
  return (*(_DWORD *)(v3 + 184) & 0x100000) != 0;
}
