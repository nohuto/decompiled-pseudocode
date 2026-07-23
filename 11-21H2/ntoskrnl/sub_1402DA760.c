/*
 * XREFs of sub_1402DA760 @ 0x1402DA760
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140573670 @ 0x140573670 (sub_140573670.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402DA760(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = dword_140CE2028;
  if ( dword_140CE2028
    || !a1
    || (result = dword_140D06884, (_DWORD)dword_140D06884 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_140D088C8;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = qword_140D088C0[0];
  }
  qword_140C2AD98 = v2;
  _InterlockedExchange64(&qword_140C2AD88, a1);
  return result;
}
