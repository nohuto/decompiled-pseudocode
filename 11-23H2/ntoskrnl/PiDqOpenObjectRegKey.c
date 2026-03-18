/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1407FA458
 * Callers:
 *     PiDqPropertyCallback @ 0x1406CA1E0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1407F9B68 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1407FFDD4 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140839A28 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A1A8 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14095BE90 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1406CF960 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FA4D8 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
