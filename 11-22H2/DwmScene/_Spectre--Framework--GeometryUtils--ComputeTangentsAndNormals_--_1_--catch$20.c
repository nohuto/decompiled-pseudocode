/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals_::_1_::catch$20 @ 0x1800F2366
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@1@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1B18 (--R-$_Func_class@XAEBV-$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV-$shared_ptr@UVector3@.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals_::_1_::catch_20(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 240) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 240) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v3);
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 384),
    a2 + 120,
    a2 + 80);
  v4 = *(std::_Ref_count_base **)(a2 + 128);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = *(std::_Ref_count_base **)(a2 + 88);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return 0LL;
}
