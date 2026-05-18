/*
 * XREFs of sub_18004FAB8 @ 0x18004FAB8
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_1800609E8 @ 0x1800609E8 (sub_1800609E8.c)
 */

__int64 *__fastcall sub_18004FAB8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = **(_QWORD **)(a1 + 18560);
  v3 = v1;
  while ( !*(_BYTE *)(v1 + 25) )
  {
    sub_1800609E8(*(_QWORD *)(v1 + 64));
    result = sub_18001D3F8(&v3);
    v1 = v3;
  }
  return result;
}
