/*
 * XREFs of ?SetPointOfInterest@ViewerCamera@Engine@Spectre@@UEAAXAEBUVector3@Math@Utils@3@@Z @ 0x1800930D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFramingPosition@ViewerCamera@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180093040 (-SetFramingPosition@ViewerCamera@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::SetPointOfInterest(
        Spectre::Engine::ViewerCamera *this,
        const struct Spectre::Utils::Math::Vector3 *a2)
{
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = *(_QWORD *)a2;
  v4 = v2;
  Spectre::Engine::ViewerCamera::SetFramingPosition(this, &v3);
}
