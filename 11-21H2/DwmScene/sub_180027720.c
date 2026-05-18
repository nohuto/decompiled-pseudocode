/*
 * XREFs of sub_180027720 @ 0x180027720
 * Callers:
 *     sub_180103A2F @ 0x180103A2F (sub_180103A2F.c)
 *     sub_18010CE59 @ 0x18010CE59 (sub_18010CE59.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180027720(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 8), v1 + 1);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
