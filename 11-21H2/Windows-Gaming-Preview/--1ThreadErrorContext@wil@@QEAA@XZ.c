/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180012734
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$51 @ 0x18004C442 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$51.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
