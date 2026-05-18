/*
 * XREFs of ??_GConstantBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180084670
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VConstantBuffer@Engine@Spectre@@@std@@EEAAXXZ @ 0x180085D00 (-_Destroy@-$_Ref_count_obj2@VConstantBuffer@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x180084528 (--1ConstantBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::ConstantBuffer::`scalar deleting destructor'(void **this, char a2)
{
  Spectre::Engine::ConstantBuffer::~ConstantBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
