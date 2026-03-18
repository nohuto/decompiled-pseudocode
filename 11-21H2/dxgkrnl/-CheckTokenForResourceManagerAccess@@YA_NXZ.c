/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0218D54
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C0218880 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0218AF0 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0337D40 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C03383E0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03386A0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C0338F80 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 */

bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 38063);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2;
}
