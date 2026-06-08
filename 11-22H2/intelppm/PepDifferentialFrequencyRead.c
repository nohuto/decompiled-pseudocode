/*
 * XREFs of PepDifferentialFrequencyRead @ 0x1C000DE30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     PepNotifyFeedbackRead @ 0x1C000E02C (PepNotifyFeedbackRead.c)
 */

__int64 __fastcall PepDifferentialFrequencyRead(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  LODWORD(v9) = *(_DWORD *)(v5 + 48);
  PepNotifyFeedbackRead(v7, &v9);
  *a3 = *((_QWORD *)&v9 + 1);
  result = v10;
  *a4 = v10;
  return result;
}
