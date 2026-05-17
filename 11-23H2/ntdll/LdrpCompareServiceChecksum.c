/*
 * XREFs of LdrpCompareServiceChecksum @ 0x180007B3C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180084870 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 */

bool __fastcall LdrpCompareServiceChecksum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 RcConfig; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx

  LOBYTE(a4) = 1;
  RcConfig = LdrpGetRcConfig(a1, a2, 0LL, a4);
  if ( !RcConfig )
    return 0;
  v7 = LdrpGetRcConfig(a2, v5, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( *(_DWORD *)RcConfig != -20054323 || *(_DWORD *)v7 != -20054323 )
    return 1;
  v8 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v7 + 28);
  if ( !v8 )
    v8 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v7 + 36);
  return !v8;
}
