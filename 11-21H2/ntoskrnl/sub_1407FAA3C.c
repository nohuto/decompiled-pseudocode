/*
 * XREFs of sub_1407FAA3C @ 0x1407FAA3C
 * Callers:
 *     sub_1407FA9D0 @ 0x1407FA9D0 (sub_1407FA9D0.c)
 *     sub_14085D310 @ 0x14085D310 (sub_14085D310.c)
 * Callees:
 *     sub_140386944 @ 0x140386944 (sub_140386944.c)
 *     sub_1407FAB50 @ 0x1407FAB50 (sub_1407FAB50.c)
 */

void __fastcall sub_1407FAA3C(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  unsigned int v4; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    v3 = *(_DWORD *)(a1 + 260);
    v4 = v3;
    do
    {
      if ( *(_QWORD *)(a1 + 8LL * v4) )
        v1 += sub_140386944(a1, v4);
      v4 = ((_BYTE)v4 + 1) & 0x1F;
    }
    while ( v1 < 0x10 && v4 != v3 );
    *(_DWORD *)(a1 + 260) = v4;
    sub_1407FAB50(a1, v1);
  }
}
