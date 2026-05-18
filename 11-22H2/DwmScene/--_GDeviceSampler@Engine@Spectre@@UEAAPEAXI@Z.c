/*
 * XREFs of ??_GDeviceSampler@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800545A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceSampler@Engine@Spectre@@UEAA@XZ @ 0x1800544B0 (--1DeviceSampler@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceSampler *__fastcall Spectre::Engine::DeviceSampler::`scalar deleting destructor'(
        Spectre::Engine::DeviceSampler *this,
        char a2)
{
  Spectre::Engine::DeviceSampler::~DeviceSampler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
