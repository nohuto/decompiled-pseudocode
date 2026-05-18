/*
 * XREFs of sub_18008021C @ 0x18008021C
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

__int64 __fastcall sub_18008021C(__int64 a1)
{
  volatile __int32 *v2; // rax
  __int32 v3; // edx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = 0;
  memset((void *)(a1 + 12), 0, 0x54uLL);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 8) = -1082130432;
  *(_DWORD *)(a1 + 12) = -1082130432;
  *(_DWORD *)(a1 + 28) = -1082130432;
  *(_DWORD *)(a1 + 32) = -1082130432;
  v5 = 0;
  *(_DWORD *)(a1 + 16) = 2;
  *(_DWORD *)(a1 + 36) = 2;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 56) = 0;
  sub_180030724(&v5);
  v2 = (volatile __int32 *)sub_18001DE70(a1 + 56);
  _InterlockedExchange(v2, v3);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
