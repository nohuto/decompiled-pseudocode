/*
 * XREFs of ?SetActiveExclusiveViewForZone@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJIW4HolographicExclusiveZone@@@Z @ 0x1800E7810
 * Callers:
 *     ?SetActiveExclusiveView@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJI@Z @ 0x1800E77F0 (-SetActiveExclusiveView@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJI@Z.c)
 * Callees:
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeProxy::SetActiveExclusiveViewForZone(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rdi
  DirectComposition::CResourceProxy *v4; // rbx
  __int64 result; // rax

  v3 = a3;
  v4 = (DirectComposition::CResourceProxy *)(a1 + 8);
  result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
             (DirectComposition::CResourceProxy *)(a1 + 8),
             0,
             a2);
  if ( (int)result >= 0 )
    return DirectComposition::CResourceProxy::SetScalarIntegerProperty(v4, 2, v3);
  return result;
}
