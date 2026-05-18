/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeNormals_::_1_::catch$13 @ 0x1800F213B
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeNormals_::_1_::catch_13(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  std::_Ref_count_base *v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 80) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v3);
  *(_OWORD *)(a2 + 64) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 240),
    a2 + 64);
  v4 = *(std::_Ref_count_base **)(a2 + 72);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return 0LL;
}
