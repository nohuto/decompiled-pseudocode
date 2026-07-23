/*
 * XREFs of sub_1403D3284 @ 0x1403D3284
 * Callers:
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402E80DC @ 0x1402E80DC (sub_1402E80DC.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void sub_1403D3284()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  _QWORD v2[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v2, 0, 0xB8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((_QWORD *)CurrentPrcb + 4272);
  v2[3] = 0LL;
  v1 &= 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v2[1]) = 20;
  BYTE4(v2[0]) = 1;
  sub_1402CF280((__int64)v2, v1, 64LL, 0);
  sub_14032F1B0((__int64)v2);
  *((_QWORD *)CurrentPrcb + 4272) = v1;
}
