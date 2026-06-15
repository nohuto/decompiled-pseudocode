/*
 * XREFs of ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x180046DE0
 * Callers:
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800472B8 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18002A86C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

PVOID __fastcall ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)ULongLongMult(a1, 0x10uLL, &v2) >= 0 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  else
    return 0LL;
}
