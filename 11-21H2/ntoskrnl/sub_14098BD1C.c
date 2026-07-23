/*
 * XREFs of sub_14098BD1C @ 0x14098BD1C
 * Callers:
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     sub_1402501A0 @ 0x1402501A0 (sub_1402501A0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14099F0A0 @ 0x14099F0A0 (sub_14099F0A0.c)
 */

__int64 __fastcall sub_14098BD1C(int a1, char a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett
  unsigned int v6; // ebx
  __int64 v7; // rcx

  _m_prefetchw(&stru_140C24040);
  HandleAttributes = stru_140C24040.HandleAttributes;
  do
  {
    v5 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&stru_140C24040,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v5 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    sub_1402D5F7C(8u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
    byte_140C240D1 = a2;
    dword_140C240D4 = a1;
    byte_140C240D8 = 0;
    sub_1402501A0(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C240C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C240C8);
    sub_1402AFC00((ULONG_PTR)&qword_140C240C8);
    v6 = 259;
    if ( a2 )
      sub_14099F0A0();
  }
  else
  {
    return 0;
  }
  return v6;
}
