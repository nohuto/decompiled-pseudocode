/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeTangents_::_1_::catch$17 @ 0x1800F22D3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeTangents_::_1_::catch_17(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeTangents threw exception");
  *(_OWORD *)(a2 + 88) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 312),
    a2 + 88);
  v3 = *(std::_Ref_count_base **)(a2 + 96);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return 0LL;
}
