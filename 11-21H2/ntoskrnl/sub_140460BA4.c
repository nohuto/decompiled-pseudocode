/*
 * XREFs of sub_140460BA4 @ 0x140460BA4
 * Callers:
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 *     sub_140883A50 @ 0x140883A50 (sub_140883A50.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140460BA4(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    *(_QWORD *)(a1 + 64) = a2;
    *(_WORD *)(a1 + 62) = 1;
    v2 = *(_DWORD *)(a1 + 56);
    if ( a2 < 0xFFFF800000000000uLL )
      v3 = v2 | 0xA;
    else
      v3 = v2 | 9;
    *(_DWORD *)(a1 + 56) = v3;
  }
}
