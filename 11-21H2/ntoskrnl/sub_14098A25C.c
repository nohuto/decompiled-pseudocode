/*
 * XREFs of sub_14098A25C @ 0x14098A25C
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall sub_14098A25C(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl(&stru_140C244A0, &Buffer);
}
