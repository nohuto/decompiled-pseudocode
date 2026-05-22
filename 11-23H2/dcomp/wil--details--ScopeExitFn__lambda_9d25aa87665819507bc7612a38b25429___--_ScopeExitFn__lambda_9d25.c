/*
 * XREFs of wil::details::ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___::_ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___ @ 0x18010AD24
 * Callers:
 *     ?SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x180035C98 (-SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___::_ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    CSparseStorage::SetReference(
      (CSparseStorage *)(*(_QWORD *)a1 + 112LL),
      20,
      0LL,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_inputsink_HANDLE);
  }
}
