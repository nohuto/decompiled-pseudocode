/*
 * XREFs of sub_1405CC460 @ 0x1405CC460
 * Callers:
 *     sub_1405CC160 @ 0x1405CC160 (sub_1405CC160.c)
 * Callees:
 *     sub_14022EEF4 @ 0x14022EEF4 (sub_14022EEF4.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 *     sub_1405D26F4 @ 0x1405D26F4 (sub_1405D26F4.c)
 */

void __fastcall sub_1405CC460(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  int v5; // ebx
  unsigned int v6; // edx

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v4 != v2 );
  v5 = v2 & 0x1000;
  LOBYTE(v3) = v5 != 0;
  sub_1405D26F4(*(_QWORD *)(BugCheckParameter3 + 48), v3);
  v6 = dword_140C23B90;
  if ( !v5 )
    v6 = dword_140C23B58;
  sub_14022EEF4(BugCheckParameter3 + 920, v6);
  sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 192), 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 1160), 0xFFFFFFFF) == 1 )
    sub_1405CBD34(BugCheckParameter3, v5 != 0);
  else
    sub_140355058(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
