/*
 * XREFs of sub_140545F70 @ 0x140545F70
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140545F70(_DWORD *a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  _QWORD v7[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = *(_BYTE *)(a2 + 16);
  v7[0] = -1LL;
  LODWORD(v7[2]) = v7[2] & 0xFFFFFFF0 | 1;
  HIDWORD(v7[2]) = *a1;
  v7[5] = *(_QWORD *)(a2 + 8);
  v7[3] ^= (LOBYTE(v7[3]) ^ v4) & 1;
  v5 = HvlInvokeFastExtendedHypercall(65742LL, (__int64)v7, 0x40u, 0LL, 0);
  return sub_14054CA70(v5);
}
