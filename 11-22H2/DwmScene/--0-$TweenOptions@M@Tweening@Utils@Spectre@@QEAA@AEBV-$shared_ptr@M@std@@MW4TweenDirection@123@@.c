/*
 * XREFs of ??0?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBV?$shared_ptr@M@std@@MW4TweenDirection@123@@Z @ 0x180091C04
 * Callers:
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Utils::Tweening::TweenOptions<float>::TweenOptions<float>(_QWORD *a1, _QWORD *a2, float a3)
{
  __int64 v3; // rcx

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a1, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 36) = 0;
  *(float *)(v3 + 32) = a3;
  *(_QWORD *)(v3 + 40) = 1000000000LL;
  *(_QWORD *)(v3 + 48) = 1LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_QWORD *)(v3 + 176) = 0LL;
  return v3;
}
