/*
 * XREFs of ?AddRef@CRtwqAsyncCallback@@UEAAKXZ @ 0x140026A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRtwqAsyncCallback::AddRef(CRtwqAsyncCallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
