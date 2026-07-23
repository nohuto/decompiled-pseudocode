/*
 * XREFs of sub_1403DB668 @ 0x1403DB668
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 */

__int64 __fastcall sub_1403DB668(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = *(_DWORD *)(a1 + 32);
  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  v4[1] = 1;
  v4[2] = 5;
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v2 + 300) - 789) <= 1 )
    return 3221225558LL;
  sub_140764CE4(v2, sub_140852BC0, v4);
  return 0LL;
}
