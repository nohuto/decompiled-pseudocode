/*
 * XREFs of sub_140537F60 @ 0x140537F60
 * Callers:
 *     sub_140537B84 @ 0x140537B84 (sub_140537B84.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140537F60(__int64 a1)
{
  char v1; // di
  char v3; // cl
  __int64 result; // rax
  int v5; // ecx
  unsigned int v6; // ecx

  v1 = 0;
  v3 = *(_BYTE *)(a1 + 24);
  if ( v3 == 12 && (*(_BYTE *)(a1 + 36) & 1) != 0 || v3 == 13 && (*(_BYTE *)(a1 + 36) & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
  }
  result = sub_14042A5E0(
             *(unsigned __int8 *)(a1 + 37),
             (*(unsigned __int8 *)(a1 + 36) >> 3) | (32 * (*(_BYTE *)(a1 + 36) & 7u)));
  v5 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)result )
  {
    v1 = -121;
    v6 = v5 | 1;
  }
  else
  {
    v6 = v5 & 0xFFFFFFFE;
  }
  *(_DWORD *)(a1 + 16) = v6;
  *(_BYTE *)(a1 + 25) = v1;
  return result;
}
