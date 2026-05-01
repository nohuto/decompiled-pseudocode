/*
 * XREFs of ?OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z @ 0x1800832E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallback::OnCommitWarning(ResourceSetCallback *this, void *a2)
{
  return ResourceSetCallback::SendData(this, a2, 2LL, 0LL);
}
