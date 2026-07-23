/*
 * XREFs of LdrpCompareServiceChecksum @ 0x18000775C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180084070 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 */

bool __fastcall LdrpCompareServiceChecksum(void *a1, void *a2)
{
  __int64 RcConfig; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  RcConfig = LdrpGetRcConfig(a1);
  if ( !RcConfig )
    return 0;
  v4 = LdrpGetRcConfig(a2);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)RcConfig != -20054323 || *(_DWORD *)v4 != -20054323 )
    return 1;
  v5 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v4 + 28);
  if ( !v5 )
    v5 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v4 + 36);
  return !v5;
}
