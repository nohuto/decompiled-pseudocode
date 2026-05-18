/*
 * XREFs of sub_1800804F8 @ 0x1800804F8
 * Callers:
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

__int64 sub_1800804F8()
{
  __int64 v0; // r9
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  int v4; // eax
  _DWORD *v5; // rdx
  __int64 v6; // r9
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 1;
  sub_180030724(&v8);
  v1 = (volatile __int32 *)sub_18001DE70(v0 + 48);
  while ( _InterlockedExchange(v1, v3) )
    ;
  v8 = 0;
  sub_18003070C(v2 + 48);
  v4 = sub_180030718(&v8);
  *v5 = v4;
  return v6;
}
