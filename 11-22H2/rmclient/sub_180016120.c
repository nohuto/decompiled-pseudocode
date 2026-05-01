/*
 * XREFs of sub_180016120 @ 0x180016120
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicy_0 @ 0x1800162F4 (UnsubscribeActivityCoordinatorPolicy_0.c)
 * Callees:
 *     CrmUnregister @ 0x180002770 (CrmUnregister.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

signed __int64 __fastcall sub_180016120(void *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  bool v6; // zf
  bool v7; // sf
  bool v8; // of
  signed __int64 v9; // rax

  _m_prefetchw((char *)&xmmword_180032A08 + 8);
  result = *((_QWORD *)&xmmword_180032A08 + 1);
  for ( i = *((_QWORD *)&xmmword_180032A08 + 1) - 1LL; i > 0; i = result - 1 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64((_QWORD *)&xmmword_180032A08 + 1, i, result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  sub_18001F1C4(&unk_1800329F8);
  v5 = _InterlockedExchangeAdd64((_QWORD *)&xmmword_180032A08 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = __OFSUB__(v5, 1LL);
  v6 = v5 == 1;
  v7 = v5 - 1 < 0;
  v9 = v5 - 1;
  if ( v7 ^ v8 | v6 )
  {
    if ( v9 )
      __fastfail(0xEu);
    CrmUnregister(a1);
    *(_QWORD *)&xmmword_180032A08 = 0LL;
  }
  dword_180032A00 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800329F8);
}
