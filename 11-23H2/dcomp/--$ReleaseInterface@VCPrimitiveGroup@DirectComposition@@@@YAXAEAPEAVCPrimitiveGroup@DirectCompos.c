/*
 * XREFs of ??$ReleaseInterface@VCPrimitiveGroup@DirectComposition@@@@YAXAEAPEAVCPrimitiveGroup@DirectComposition@@@Z @ 0x1800EAA80
 * Callers:
 *     ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438 (-EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CPrimitiveGroup>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CDelayedDestructionObject::Release((DirectComposition::CDelayedDestructionObject *)(v2 + 8));
    *a1 = 0LL;
  }
  return result;
}
