/*
 * XREFs of sub_140656B70 @ 0x140656B70
 * Callers:
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_140400108 @ 0x140400108 (sub_140400108.c)
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 * Callees:
 *     sub_140A34108 @ 0x140A34108 (sub_140A34108.c)
 */

unsigned __int64 __fastcall sub_140656B70(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = sub_140A34108(a1 + 36);
  if ( v2 )
  {
    v1 = (v2 + 35) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_DWORD *)(v1 - 4) = ((v2 + 35) & 0xFFFFFFE0) - v2;
  }
  return v1;
}
