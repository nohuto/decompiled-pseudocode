/*
 * XREFs of ?SetOrientation@LightProbe@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@@Z @ 0x180051C10
 * Callers:
 *     ?SetEnvironmentLightingOrientation@ViewerEngine@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067D40 (-SetEnvironmentLightingOrientation@ViewerEngine@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::LightProbe::SetOrientation(
        Spectre::Engine::LightProbe *this,
        const struct Spectre::Utils::Math::Quaternion *a2)
{
  *((_DWORD *)this + 23) = *(_DWORD *)a2;
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 3);
}
