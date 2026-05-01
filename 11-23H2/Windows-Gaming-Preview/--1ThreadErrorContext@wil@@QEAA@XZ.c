/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180012940
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$41 @ 0x18004D332 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$41.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
