/*
 * XREFs of sub_180031BCC @ 0x180031BCC
 * Callers:
 *     sub_18002F1F8 @ 0x18002F1F8 (sub_18002F1F8.c)
 *     sub_1800319AC @ 0x1800319AC (sub_1800319AC.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 */

__int64 __fastcall sub_180031BCC(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = sub_1800385C8(a1 + 16);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010574(v3);
  return result;
}
