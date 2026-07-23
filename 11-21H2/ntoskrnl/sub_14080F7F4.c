/*
 * XREFs of sub_14080F7F4 @ 0x14080F7F4
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_14080F6C8 @ 0x14080F6C8 (sub_14080F6C8.c)
 * Callees:
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 __fastcall sub_14080F7F4(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  do
  {
    result = sub_140760B20(a1, v2, 8, 0LL, &v4, &v5);
    v2 = result;
    if ( v4 )
      result = sub_14033F41C(a1, v4, v5, 4);
  }
  while ( v2 );
  *(_DWORD *)(a1 + 196) |= 2u;
  return result;
}
