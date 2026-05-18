/*
 * XREFs of sub_1800806E0 @ 0x1800806E0
 * Callers:
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

__int64 sub_1800806E0()
{
  __int64 v0; // r9
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  int v4; // eax
  __int64 result; // rax
  _DWORD *v6; // rdx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = 1;
  sub_180030724(&v7);
  v1 = (volatile __int32 *)sub_18001DE70(v0 + 48);
  while ( _InterlockedExchange(v1, v3) )
    ;
  v4 = *(_DWORD *)(v2 + 16);
  *(_OWORD *)(v2 + 20) = *(_OWORD *)v2;
  *(_DWORD *)(v2 + 36) = v4;
  *(_DWORD *)v2 = -1082130432;
  *(_DWORD *)(v2 + 4) = -1082130432;
  *(_QWORD *)(v2 + 8) = 2LL;
  *(_DWORD *)(v2 + 16) = 0;
  v8 = 0;
  *(_QWORD *)(v2 + 40) = 2LL;
  v7 = 0;
  sub_18003070C(v2 + 48);
  result = sub_180030718(&v7);
  *v6 = result;
  return result;
}
