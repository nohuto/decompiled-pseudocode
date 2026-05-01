/*
 * XREFs of ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGPAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@I@Z @ 0x100065FA
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100062F5 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(unsigned int a1)
{
  if ( is_mul_ok(0xCu, a1) )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 12 * a1);
  else
    return 0;
}
