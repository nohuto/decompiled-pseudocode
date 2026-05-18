/*
 * XREFs of ??_EArrayBufferDesc@Engine@Spectre@@UEAAPEAXI@Z @ 0x180089570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ArrayBufferDesc@Engine@Spectre@@UEAA@XZ @ 0x18008B3B4 (--1ArrayBufferDesc@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ArrayBufferDesc *__fastcall Spectre::Engine::ArrayBufferDesc::`vector deleting destructor'(
        Spectre::Engine::ArrayBufferDesc *this,
        char a2)
{
  Spectre::Engine::ArrayBufferDesc::~ArrayBufferDesc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
