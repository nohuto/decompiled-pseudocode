/*
 * XREFs of sub_14045E800 @ 0x14045E800
 * Callers:
 *     <none>
 * Callees:
 *     sub_140354C00 @ 0x140354C00 (sub_140354C00.c)
 */

void __fastcall sub_14045E800(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    if ( a3 < 0 )
      sub_140354C00(a1, a2);
    v5 = *(_QWORD *)(a2 + 64);
    if ( *(_DWORD *)(a2 + 176) )
      *(_DWORD *)(v5 + 4) = 0;
    else
      *(_DWORD *)(v5 + 4) = a3 & 0x7FFFFFFF;
  }
}
