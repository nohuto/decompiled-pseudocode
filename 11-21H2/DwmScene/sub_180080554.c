/*
 * XREFs of sub_180080554 @ 0x180080554
 * Callers:
 *     sub_1800751B0 @ 0x1800751B0 (sub_1800751B0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180080620 @ 0x180080620 (sub_180080620.c)
 */

__int64 sub_180080554()
{
  __int64 v0; // r9
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  __int64 v4; // r9
  int v5; // eax
  _DWORD *v6; // rdx
  unsigned int v7; // r8d
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 1;
  sub_180030724(&v9);
  v1 = (volatile __int32 *)sub_18001DE70(v0 + 48);
  while ( _InterlockedExchange(v1, v3) )
    ;
  sub_180080620(*(unsigned int *)(v2 + 44));
  v9 = 0;
  sub_18003070C(v4 + 48);
  v5 = sub_180030718(&v9);
  *v6 = v5;
  return v7;
}
