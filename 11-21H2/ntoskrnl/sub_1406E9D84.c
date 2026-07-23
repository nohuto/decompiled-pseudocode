/*
 * XREFs of sub_1406E9D84 @ 0x1406E9D84
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 */

__int64 __fastcall sub_1406E9D84(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = sub_140689DAC(1);
  }
  else
  {
    v1 = sub_140689DAC(4);
    *(_BYTE *)(v1 + v2 + 192) = 0;
    result = sub_140689DAC(5);
  }
  *(_BYTE *)((unsigned int)result + v4 + 192) = 0;
  return result;
}
