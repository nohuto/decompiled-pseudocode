/*
 * XREFs of sub_140536860 @ 0x140536860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140536860(__int64 a1)
{
  bool v1; // zf
  int v2; // edx

  v1 = *(_BYTE *)(a1 + 138) == 0;
  *(_QWORD *)(a1 + 88) = a1 + 32;
  if ( v1 )
  {
    v2 = (unsigned __int16)(*(__int16 *)(a1 + 24) >> 15);
    *(_DWORD *)(a1 + 120) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 3;
    v2 = *(int *)(a1 + 24) >> 31;
  }
  return sub_1403A2E60(a1, v2);
}
