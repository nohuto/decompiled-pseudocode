/*
 * XREFs of sub_140AA3CA0 @ 0x140AA3CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA59E0 @ 0x140AA59E0 (sub_140AA59E0.c)
 */

__int64 __fastcall sub_140AA3CA0(__int64 a1)
{
  ULONG_PTR v1; // r9

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 8 )
    sub_140A8C924(0xC4u, 0xCDuLL, *(_QWORD *)(a1 + 56), v1, 8LL);
  return sub_140AA59E0(*(_QWORD *)(a1 + 56));
}
