/*
 * XREFs of sub_140630050 @ 0x140630050
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140630050(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  ThreadServerSilo = *(_QWORD *)(a1 + 152);
  v5 = a1;
  if ( ThreadServerSilo )
    ThreadServerSilo = PsGetThreadServerSilo(ThreadServerSilo);
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 24);
  else
    v6 = 0LL;
  v9 = 0;
  v7 = &v5;
  v8 = 16;
  return sub_140281380(ThreadServerSilo, (int)&v7, 1, 0x300u, 272, 290461954);
}
