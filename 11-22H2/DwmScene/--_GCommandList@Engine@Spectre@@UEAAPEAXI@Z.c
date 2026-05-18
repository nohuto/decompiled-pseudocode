/*
 * XREFs of ??_GCommandList@Engine@Spectre@@UEAAPEAXI@Z @ 0x180039100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1CommandList@Engine@Spectre@@UEAA@XZ @ 0x18003905C (--1CommandList@Engine@Spectre@@UEAA@XZ.c)
 */

std::_Ref_count_base **__fastcall Spectre::Engine::CommandList::`scalar deleting destructor'(
        std::_Ref_count_base **this,
        char a2)
{
  Spectre::Engine::CommandList::~CommandList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
