/*
 * XREFs of ?Reset@Bounds@Engine@Spectre@@UEAAXXZ @ 0x18004A550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Bounds::Reset(Spectre::Engine::Bounds *this)
{
  *((_QWORD *)this + 11) = Spectre::Utils::Math::Vector3::Zero;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 100) = Spectre::Utils::Math::Vector3::Zero;
  *((_DWORD *)this + 27) = 0;
}
