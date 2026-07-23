/*
 * XREFs of sub_14068038C @ 0x14068038C
 * Callers:
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14068038C(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 258);
    if ( (unsigned __int8)v3 < 4u )
    {
      *(_DWORD *)(a1 + 8 * v3 + 260) = a3;
      *(_DWORD *)(a1 + 8LL * (unsigned __int8)(*(_BYTE *)(a1 + 258))++ + 264) = a2;
    }
  }
}
