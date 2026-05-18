/*
 * XREFs of _Spectre::Framework::GeometryUtils::ComputeTangents_::_1_::catch$16 @ 0x1800F2261
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 */

__int64 __fastcall Spectre::Framework::GeometryUtils::ComputeTangents_::_1_::catch_16(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  std::_Ref_count_base *v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 184) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v3);
  *(_OWORD *)(a2 + 88) = 0LL;
  std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
    *(_QWORD *)(a2 + 312),
    a2 + 88);
  v4 = *(std::_Ref_count_base **)(a2 + 96);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return 0LL;
}
