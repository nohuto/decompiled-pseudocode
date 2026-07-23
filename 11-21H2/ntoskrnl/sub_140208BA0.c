/*
 * XREFs of sub_140208BA0 @ 0x140208BA0
 * Callers:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1403C752C @ 0x1403C752C (sub_1403C752C.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 * Callees:
 *     sub_140208BE0 @ 0x140208BE0 (sub_140208BE0.c)
 */

__int64 __fastcall sub_140208BA0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_140208BE0(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 8);
      *v5 = (unsigned __int64)*(unsigned __int16 *)(v4 + 2) >> 1;
      *v6 = v7;
    }
  }
  return result;
}
