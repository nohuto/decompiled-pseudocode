/*
 * XREFs of sub_1402D6A98 @ 0x1402D6A98
 * Callers:
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     sub_1407556D4 @ 0x1407556D4 (sub_1407556D4.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1409C5B80 @ 0x1409C5B80 (sub_1409C5B80.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C6320 (SeSetSessionIdTokenWithLinked.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 *     SeGetLinkedToken @ 0x1409CC2A0 (SeGetLinkedToken.c)
 * Callees:
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 */

signed __int64 __fastcall sub_1402D6A98(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v3 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v4 = a1[20];
  v5 = a1[1];
  return sub_14069BBC0(&v5, v4);
}
