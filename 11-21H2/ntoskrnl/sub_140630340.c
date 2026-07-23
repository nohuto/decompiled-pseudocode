/*
 * XREFs of sub_140630340 @ 0x140630340
 * Callers:
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_1409630B0 @ 0x1409630B0 (sub_1409630B0.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140630340(__int64 a1)
{
  __int64 ThreadServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = a1;
  v5 = &v4;
  v7 = 0;
  v6 = 8;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  sub_140281380(ThreadServerSilo, (int)&v5, 1, 0x40000040u, 3891, 5249026);
  return a1;
}
