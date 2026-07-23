/*
 * XREFs of sub_1406DFA80 @ 0x1406DFA80
 * Callers:
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1406DFA80(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v7 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  if ( (_DWORD)v7 != 1 )
    return 3221225561LL;
  v6 = DWORD1(v7);
  if ( DWORD1(v7) == -1 )
    v6 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  result = sub_1406F83A0(25LL, (char *)&v7 + 8, 1LL, &v6);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)*(_QWORD *)(a1 + 16) = v7;
    *a3 = 16;
    return 0LL;
  }
  return result;
}
