/*
 * XREFs of sub_1406E72CC @ 0x1406E72CC
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_1406890A0 @ 0x1406890A0 (sub_1406890A0.c)
 * Callees:
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 */

bool __fastcall sub_1406E72CC(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r8

  v1 = *(_DWORD *)(a1 + 168);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = sub_140689DAC(5 - (unsigned int)(v1 != 4));
  return *(_BYTE *)(v2 + v3 + 192) == 0;
}
