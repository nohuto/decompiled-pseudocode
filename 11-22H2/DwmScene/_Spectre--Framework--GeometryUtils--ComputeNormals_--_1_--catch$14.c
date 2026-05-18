/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeNormals_::_1_::catch$14 @ 0x1800F21AA
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeNormals_::_1_::catch_14(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeNormals threw unexpected exception");
  *(_OWORD *)(a2 + 64) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 240),
    a2 + 64);
  v3 = *(std::_Ref_count_base **)(a2 + 72);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return 0LL;
}
