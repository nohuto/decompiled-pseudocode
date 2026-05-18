/*
 * XREFs of sub_1800F845C @ 0x1800F845C
 * Callers:
 *     sub_1800F9A88 @ 0x1800F9A88 (sub_1800F9A88.c)
 *     sub_18010D414 @ 0x18010D414 (sub_18010D414.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

void __fastcall sub_1800F845C(_QWORD *a1)
{
  __int64 v1; // r8
  volatile __int32 *v2; // rax
  __int32 v3; // edx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v4 = 0;
    sub_180030724(&v4);
    v2 = (volatile __int32 *)sub_18001DE70(v1 + 256);
    _InterlockedExchange(v2, v3);
  }
}
