/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180039620
 * Callers:
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180053AC0 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
