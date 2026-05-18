/*
 * XREFs of ??_ESharedResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x180029420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedResource@Engine@Spectre@@UEAA@XZ @ 0x1800280B8 (--1SharedResource@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::SharedResource::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Engine::SharedResource::~SharedResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
