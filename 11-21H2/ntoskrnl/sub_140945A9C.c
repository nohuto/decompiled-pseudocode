/*
 * XREFs of sub_140945A9C @ 0x140945A9C
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_1409455A8 @ 0x1409455A8 (sub_1409455A8.c)
 *     sub_140945654 @ 0x140945654 (sub_140945654.c)
 */

NTSTATUS __fastcall sub_140945A9C(__int64 a1, unsigned int **a2)
{
  __int16 *v4; // r9
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  ULONG_PTR MaxDataSize; // [rsp+58h] [rbp+20h] BYREF

  MaxDataSize = 0LL;
  v7 = 0;
  v6 = 1;
  while ( sub_1407667B0(a2, &v6, &MaxDataSize, 0LL, 0LL) )
    sub_140945654(MaxDataSize);
  return sub_1409455A8(a1, 0, 0, v4);
}
