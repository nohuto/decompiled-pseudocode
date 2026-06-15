/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18003BAD0
 * Callers:
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::dtor$2 @ 0x1801046FB (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::dtor$3 @ 0x180104707 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
