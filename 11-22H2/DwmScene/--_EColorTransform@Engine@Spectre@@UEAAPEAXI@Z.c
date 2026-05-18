/*
 * XREFs of ??_EColorTransform@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ColorTransform@Engine@Spectre@@UEAA@XZ @ 0x18008F58C (--1ColorTransform@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ColorTransform *__fastcall Spectre::Engine::ColorTransform::`vector deleting destructor'(
        Spectre::Engine::ColorTransform *this,
        char a2)
{
  Spectre::Engine::ColorTransform::~ColorTransform(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
