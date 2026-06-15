/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14008196C
 * Callers:
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$0 @ 0x1400373B0 (_CAudioProcessor--DeactivateAPO_--_1_--dtor$0.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$0 @ 0x140037490 (_CAudioProcessor--ActivateAPO_--_1_--dtor$0.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$2 @ 0x140037960 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$2.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$0 @ 0x140037B80 (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
