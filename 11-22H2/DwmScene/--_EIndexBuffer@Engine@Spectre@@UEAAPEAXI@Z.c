/*
 * XREFs of ??_EIndexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180047E20
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VIndexBuffer@Engine@Spectre@@@std@@EEAAXXZ @ 0x180049DB0 (-_Destroy@-$_Ref_count_obj2@VIndexBuffer@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008885C (--1ArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::IndexBuffer *__fastcall Spectre::Engine::IndexBuffer::`vector deleting destructor'(
        Spectre::Engine::IndexBuffer *this,
        char a2)
{
  Spectre::Engine::ArrayBuffer::~ArrayBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
