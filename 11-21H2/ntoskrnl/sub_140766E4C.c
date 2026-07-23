/*
 * XREFs of sub_140766E4C @ 0x140766E4C
 * Callers:
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405CE8F8 @ 0x1405CE8F8 (sub_1405CE8F8.c)
 *     sub_14080D7EC @ 0x14080D7EC (sub_14080D7EC.c)
 *     sub_1408119E8 @ 0x1408119E8 (sub_1408119E8.c)
 *     sub_140811AFC @ 0x140811AFC (sub_140811AFC.c)
 */

__int64 __fastcall sub_140766E4C(ULONG_PTR *a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  ULONG_PTR v4; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 result; // rax
  ULONG_PTR v8; // rax

  _m_prefetchw(&stru_140C24040);
  HandleAttributes = stru_140C24040.HandleAttributes;
  do
  {
    v3 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&stru_140C24040,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v3 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
    v4 = a1[97];
    if ( v4 )
    {
      a1[97] = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1CB48);
    sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
  }
  _m_prefetchw(a1 + 37);
  v5 = *((_DWORD *)a1 + 74);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 74, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    sub_14080D7EC(a1);
    v8 = a1[18];
    if ( v8 )
    {
      sub_1405CE8F8(a1[18], (__int64)(a1 + 16));
      v8 = a1[18];
    }
    sub_1408119E8(a1, v8, a1 + 16, 0LL);
    a1[18] = 0LL;
    _InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFE);
  }
  _m_prefetchw(a1 + 37);
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFD);
  if ( (result & 2) != 0 )
    return sub_140811AFC(a1);
  return result;
}
