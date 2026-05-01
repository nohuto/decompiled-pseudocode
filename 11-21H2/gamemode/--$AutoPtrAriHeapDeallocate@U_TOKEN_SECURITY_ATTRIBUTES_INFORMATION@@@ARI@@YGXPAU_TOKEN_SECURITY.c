/*
 * XREFs of ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGXPAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x10006628
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100062F5 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(PVOID P)
{
  BOOLEAN result; // al

  if ( P )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
