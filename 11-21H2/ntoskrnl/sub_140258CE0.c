/*
 * XREFs of sub_140258CE0 @ 0x140258CE0
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140258CE0()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  _QWORD v3[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v4[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v4, 0, 0xB8uLL);
  memset(v3, 0, sizeof(v3));
  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  v3[21] = v4;
  v0 += 1664LL;
  LODWORD(v3[0]) = 32774;
  v3[19] = sub_1402E96B0;
  v3[3] = v0;
  v3[20] = PsGetHostSilo;
  v3[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v4[0]) = 0;
  v4[2] = 0LL;
  v4[3] = 0LL;
  LODWORD(v4[0]) = 1;
  LODWORD(v4[1]) = 20;
  HIBYTE(v3[0]) = sub_1402CF4F0(v0);
  sub_14030CF90(v3);
  LOBYTE(v1) = HIBYTE(v3[0]);
  sub_1402B0CE0(v0, v1);
  return sub_14032F1B0(v4);
}
