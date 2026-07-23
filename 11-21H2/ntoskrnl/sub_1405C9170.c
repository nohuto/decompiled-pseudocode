/*
 * XREFs of sub_1405C9170 @ 0x1405C9170
 * Callers:
 *     <none>
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

__int64 __fastcall sub_1405C9170(__int64 a1)
{
  int v2; // ebx

  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx(a1 + 8, (__int64)dword_140D06E40) )
  {
    v2 = sub_140293A88(a1 + 8, (__int64)sub_1405C87C0, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C23010);
  return (unsigned int)v2;
}
