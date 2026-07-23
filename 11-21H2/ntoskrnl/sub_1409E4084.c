/*
 * XREFs of sub_1409E4084 @ 0x1409E4084
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_14097F038 @ 0x14097F038 (sub_14097F038.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1409E4084(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]
  _QWORD *v10; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 1088);
  v7[0] = a1;
  v7[1] = a2;
  v8 = v4;
  v10 = v7;
  v12 = 0;
  v11 = 24;
  v9 = a4;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  return sub_140281380(ProcessServerSilo, (int)&v10, 1, 0x20008000u, 611, 5249282);
}
