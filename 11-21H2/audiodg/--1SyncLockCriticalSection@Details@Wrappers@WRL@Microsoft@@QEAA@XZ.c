/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140068948
 * Callers:
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$1 @ 0x1400373D0 (_CAudioProcessor--DeactivateAPO_--_1_--dtor$1.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$1 @ 0x1400374B0 (_CAudioProcessor--ActivateAPO_--_1_--dtor$1.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$3 @ 0x140037980 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$3.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$1 @ 0x140037BA0 (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$1.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$8 @ 0x140037FD0 (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$8.c)
 *     _CAudioProcessor::CancelGraphChanges_::_1_::dtor$0 @ 0x140081F75 (_CAudioProcessor--CancelGraphChanges_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CheckResourceLimits_::_1_::dtor$0 @ 0x1400911E3 (_CSpatialCrossProcessBaseEndpoint--CheckResourceLimits_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
