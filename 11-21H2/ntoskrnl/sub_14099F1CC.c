/*
 * XREFs of sub_14099F1CC @ 0x14099F1CC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14099EE9C @ 0x14099EE9C (sub_14099EE9C.c)
 *     sub_14099EF9C @ 0x14099EF9C (sub_14099EF9C.c)
 *     sub_14099F030 @ 0x14099F030 (sub_14099F030.c)
 *     sub_14099F25C @ 0x14099F25C (sub_14099F25C.c)
 */

__int64 __fastcall sub_14099F1CC(int a1, unsigned int a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  ULONG HandleAttributes; // eax
  ULONG v6; // ett
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  *a4 = 0;
  *a5 = 0LL;
  _m_prefetchw(&stru_140C24040);
  HandleAttributes = stru_140C24040.HandleAttributes;
  do
  {
    v6 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&stru_140C24040,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v6 != HandleAttributes );
  if ( (HandleAttributes & 1) == 0 )
    return 3221225659LL;
  v8 = a1 - 53;
  if ( !v8 )
    return sub_14099EE9C(a2, a3);
  v9 = v8 - 1;
  if ( !v9 )
    return sub_14099EF9C(a2, a3);
  v10 = v9 - 2;
  if ( !v10 )
    return sub_14099F030(a2, a3);
  if ( v10 == 8 )
    return sub_14099F25C(a4);
  return 3221225485LL;
}
