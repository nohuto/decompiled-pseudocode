/*
 * XREFs of sub_1800109B0 @ 0x1800109B0
 * Callers:
 *     sub_180010C1C @ 0x180010C1C (sub_180010C1C.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 *     sub_18002FFD4 @ 0x18002FFD4 (sub_18002FFD4.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 *     sub_180038698 @ 0x180038698 (sub_180038698.c)
 *     sub_18003881C @ 0x18003881C (sub_18003881C.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_1800109B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
        result = sub_180010574(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
