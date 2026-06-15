/*
 * XREFs of WPP_SF_SSd @ 0x180102868
 * Callers:
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101E9C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x180102050 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  bool v7; // zf

  v5 = -1LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a5 + 2 * v6) );
  }
  v7 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = a4 == 0LL;
  }
  if ( v7 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids, a2, a4);
}
