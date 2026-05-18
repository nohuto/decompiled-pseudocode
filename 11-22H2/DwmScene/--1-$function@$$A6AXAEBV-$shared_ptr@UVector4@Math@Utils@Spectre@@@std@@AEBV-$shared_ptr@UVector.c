/*
 * XREFs of ??1?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@std@@QEAA@XZ @ 0x1800124A8
 * Callers:
 *     _Spectre::Engine::Scene::GetComponents_Internal_Spectre::Engine::LightProbe__::_1_::dtor$1 @ 0x1800E3CC2 (_Spectre--Engine--Scene--GetComponents_Internal_Spectre--Engine--LightProbe__--_1_--dtor$1.c)
 *     _Spectre::Engine::Scene::GetComponent_Spectre::Engine::LightProbe__::_1_::dtor$3 @ 0x1800E4521 (_Spectre--Engine--Scene--GetComponent_Spectre--Engine--LightProbe__--_1_--dtor$3.c)
 *     _Spectre::CreateDeviceInternal::Engine::CreateDeviceInternal_::_1_::dtor$14 @ 0x1800E5A8B (_Spectre--CreateDeviceInternal--Engine--CreateDeviceInternal_--_1_--dtor$14.c)
 *     _Spectre::DetachDevice::Engine::DetachDevice_::_1_::dtor$7 @ 0x1800E5B51 (_Spectre--DetachDevice--Engine--DetachDevice_--_1_--dtor$7.c)
 *     _Spectre::Engine::Mesh::ComputeNormals_::_1_::dtor$6 @ 0x1800E6E76 (_Spectre--Engine--Mesh--ComputeNormals_--_1_--dtor$6.c)
 *     _Spectre::Engine::Mesh::ComputeNormalsAndTangents_::_1_::dtor$6 @ 0x1800E6F15 (_Spectre--Engine--Mesh--ComputeNormalsAndTangents_--_1_--dtor$6.c)
 *     _Spectre::Engine::Mesh::ComputeTangents_::_1_::dtor$6 @ 0x1800E6FC6 (_Spectre--Engine--Mesh--ComputeTangents_--_1_--dtor$6.c)
 *     _Spectre::Framework::GeometryUtils::ComputeNormals_::_1_::dtor$0 @ 0x1800E8682 (_Spectre--Framework--GeometryUtils--ComputeNormals_--_1_--dtor$0.c)
 *     _Spectre::Engine::ColorTransform::Generate_::_1_::dtor$0 @ 0x1800EA8AE (_Spectre--Engine--ColorTransform--Generate_--_1_--dtor$0.c)
 *     _Spectre::Utils::Tweening::Tween::Tween_float__::_1_::dtor$4 @ 0x1800EA99C (_Spectre--Utils--Tweening--Tween--Tween_float__--_1_--dtor$4.c)
 *     _Spectre::Utils::Tweening::TweenOptions_float_::TweenOptions_float__::_1_::dtor$2 @ 0x1800EAA4F (_Spectre--Utils--Tweening--TweenOptions_float_--TweenOptions_float__--_1_--dtor$2.c)
 *     _std::function_void___cdecl(double)_::function_void___cdecl(double)__::_1_::dtor$0 @ 0x1800EAA65 (_std--function_void___cdecl(double)_--function_void___cdecl(double)__--_1_--dtor$0.c)
 *     _Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals_::_1_::dtor$0 @ 0x1800EACB1 (_Spectre--Framework--GeometryUtils--ComputeTangentsAndNormals_--_1_--dtor$0.c)
 *     _Spectre::Engine::ImageProcessingEffect::SetResources_::_1_::dtor$16 @ 0x1800EACE7 (_Spectre--Engine--ImageProcessingEffect--SetResources_--_1_--dtor$16.c)
 *     _Spectre::Framework::GeometryUtils::ComputeTangents_::_1_::dtor$0 @ 0x1800F220E (_Spectre--Framework--GeometryUtils--ComputeTangents_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<void (std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *)>::~function<void (std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
