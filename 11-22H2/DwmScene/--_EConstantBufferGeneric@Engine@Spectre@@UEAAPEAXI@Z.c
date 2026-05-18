/*
 * XREFs of ??_EConstantBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052C80
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VConstantBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053B60 (-_Destroy@-$_Ref_count_obj2@VConstantBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B6B8 (--1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ConstantBufferGeneric *__fastcall Spectre::Engine::ConstantBufferGeneric::`vector deleting destructor'(
        Spectre::Engine::ConstantBufferGeneric *this,
        char a2)
{
  Spectre::Engine::ConstantBufferGeneric::~ConstantBufferGeneric(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
