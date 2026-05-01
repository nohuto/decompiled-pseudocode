/*
 * XREFs of sub_180015FBC @ 0x180015FBC
 * Callers:
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 * Callees:
 *     CrmRegister @ 0x180005C30 (CrmRegister.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180015FBC(_QWORD *a1)
{
  signed __int64 v2; // rax
  unsigned __int64 i; // rdx
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  unsigned __int64 j; // rcx
  int v7; // ebx
  signed __int64 v8; // rtt

  _m_prefetchw((char *)&xmmword_180032A08 + 8);
  v2 = *((_QWORD *)&xmmword_180032A08 + 1);
  for ( i = *((_QWORD *)&xmmword_180032A08 + 1) + 1LL; i > 1; i = v2 + 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((_QWORD *)&xmmword_180032A08 + 1, i, v2);
    if ( v4 == v2 )
    {
      v7 = 0;
      *a1 = xmmword_180032A08;
      return (unsigned int)v7;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  sub_18001F1C4(&unk_1800329F8);
  _m_prefetchw((char *)&xmmword_180032A08 + 8);
  v5 = *((_QWORD *)&xmmword_180032A08 + 1);
  for ( j = *((_QWORD *)&xmmword_180032A08 + 1) + 1LL; j > 1; j = v5 + 1 )
  {
    v8 = v5;
    v5 = _InterlockedCompareExchange64((_QWORD *)&xmmword_180032A08 + 1, j, v5);
    if ( v8 == v5 )
      goto LABEL_16;
  }
  if ( j != 1 )
    __fastfail(0xEu);
  v7 = CrmRegister(&xmmword_180032A08, 0x133u, (__int64)L"ActivityCoordinator API");
  if ( v7 >= 0 )
  {
    *((_QWORD *)&xmmword_180032A08 + 1) = 1LL;
LABEL_16:
    v7 = 0;
    *a1 = xmmword_180032A08;
  }
  dword_180032A00 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800329F8);
  return (unsigned int)v7;
}
