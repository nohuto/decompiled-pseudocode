/*
 * XREFs of PepInstantaneousPerfRead @ 0x1C000CE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     PepNotifyFeedbackRead @ 0x1C000CEBC (PepNotifyFeedbackRead.c)
 */

unsigned __int64 __fastcall PepInstantaneousPerfRead(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  DWORD1(v7) = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned int *)(v3 + 4);
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v7) = *(_DWORD *)(v3 + 52);
  PepNotifyFeedbackRead(v4, &v7);
  result = 100LL * *((_QWORD *)&v7 + 1) / v5;
  *a2 = result;
  return result;
}
