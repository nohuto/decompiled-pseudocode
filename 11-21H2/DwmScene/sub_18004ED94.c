/*
 * XREFs of sub_18004ED94 @ 0x18004ED94
 * Callers:
 *     sub_18004ECF0 @ 0x18004ECF0 (sub_18004ECF0.c)
 * Callees:
 *     sub_18004F354 @ 0x18004F354 (sub_18004F354.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F584 @ 0x18004F584 (sub_18004F584.c)
 *     sub_18004F73C @ 0x18004F73C (sub_18004F73C.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 *     sub_18004FB58 @ 0x18004FB58 (sub_18004FB58.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 *     sub_18004FE74 @ 0x18004FE74 (sub_18004FE74.c)
 */

__int64 __fastcall sub_18004ED94(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_18004FA18(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_18004F354(a1);
  if ( (v2 & 1) != 0 )
    result = sub_18004FD34(a1);
  if ( (v2 & 2) != 0 )
    result = sub_18004FE74(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_18004F584(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_18004F4AC(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_18004F8C8(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_18004FB58(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_18004F73C(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
