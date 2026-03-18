/*
 * XREFs of KseRegisterShim @ 0x140808710
 * Callers:
 *     KseVersionLieInitialize @ 0x140B36014 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140B75328 (KseDriverScopeInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140808730 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
