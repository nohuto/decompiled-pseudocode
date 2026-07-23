/*
 * XREFs of sub_1405D4A54 @ 0x1405D4A54
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1405D4A54(signed __int32 *a1)
{
  bool v1; // r8
  signed __int32 v2; // eax
  bool v3; // zf

  v1 = 0;
  v2 = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
  if ( v2 >= 1 )
  {
    v3 = v2 == _InterlockedCompareExchange(&dword_140C23CB0, v2 | 0x80000000, v2);
    v2 |= 0x80000000;
    v1 = v3;
  }
  *a1 = v2;
  return v1;
}
