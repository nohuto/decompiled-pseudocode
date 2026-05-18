/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals_::_1_::catch$21 @ 0x1800F23F3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@1@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1B18 (--R-$_Func_class@XAEBV-$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV-$shared_ptr@UVector3@.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals_::_1_::catch_21(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeTangentsAndNormals threw exception");
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 384),
    a2 + 120,
    a2 + 80);
  v3 = *(std::_Ref_count_base **)(a2 + 128);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = *(std::_Ref_count_base **)(a2 + 88);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return 0LL;
}
