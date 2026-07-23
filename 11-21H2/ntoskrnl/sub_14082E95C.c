/*
 * XREFs of sub_14082E95C @ 0x14082E95C
 * Callers:
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B4FA10 @ 0x140B4FA10 (sub_140B4FA10.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 */

__int64 __fastcall sub_14082E95C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return sub_1406CB238(a2, a3, v4, 0);
}
