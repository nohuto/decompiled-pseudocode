/*
 * XREFs of sub_140561930 @ 0x140561930
 * Callers:
 *     <none>
 * Callees:
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 */

char __fastcall sub_140561930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax

  if ( *(int *)(a4 + 16) >= 0 )
  {
    v5 = sub_14094B580(a2, *(_QWORD *)a4, *(_QWORD *)(a4 + 8));
    if ( v5 < 0 )
      *(_DWORD *)(a4 + 16) = v5;
  }
  return 0;
}
