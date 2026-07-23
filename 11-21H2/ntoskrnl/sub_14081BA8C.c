/*
 * XREFs of sub_14081BA8C @ 0x14081BA8C
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 */

__int64 __fastcall sub_14081BA8C(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = 0;
  v3 = *(_DWORD *)(*(_QWORD *)(v1[39] + 40LL) + 300LL);
  if ( v3 == 778 )
  {
    sub_140749F30(v1);
  }
  else if ( (unsigned int)(v3 - 789) <= 1 )
  {
    return (unsigned int)-1073741738;
  }
  return v2;
}
