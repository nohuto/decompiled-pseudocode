/*
 * XREFs of sub_1406E7CD4 @ 0x1406E7CD4
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     sub_140845D74 @ 0x140845D74 (sub_140845D74.c)
 *     sub_14084E99C @ 0x14084E99C (sub_14084E99C.c)
 *     sub_14085531C @ 0x14085531C (sub_14085531C.c)
 */

__int64 __fastcall sub_1406E7CD4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v5; // eax

  v2 = *a1;
  result = *(_QWORD *)(*a1 + 720);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 16) & 0x10) != 0 )
    {
      v5 = 1;
    }
    else if ( (*(_DWORD *)(v2 + 560) & 0x100000) != 0 )
    {
      v5 = 2;
    }
    else
    {
      v5 = sub_14084E99C();
    }
    result = sub_140845D74(v2, a2, v5);
    if ( (int)result >= 0 )
      return sub_14085531C(v2, a2);
  }
  return result;
}
