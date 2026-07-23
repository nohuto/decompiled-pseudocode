/*
 * XREFs of sub_140536820 @ 0x140536820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140536820(__int64 a1)
{
  bool v1; // zf
  char *v2; // rax
  int v3; // edx

  v1 = *(_BYTE *)(a1 + 138) == 0;
  v2 = (char *)(a1 + 24);
  *(_QWORD *)(a1 + 88) = a1 + 24;
  if ( v1 )
  {
    v3 = (unsigned __int16)*v2;
    *(_DWORD *)(a1 + 120) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 3;
    v3 = *(__int16 *)v2;
  }
  return sub_1403A2E60(a1, v3);
}
