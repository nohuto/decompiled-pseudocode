/*
 * XREFs of ?AddRef@CRunnableTask@@UEAAKXZ @ 0x1801BFB70
 * Callers:
 *     ?AddRef@CRunnableTask@@W7EAAKXZ @ 0x1802AC4C0 (-AddRef@CRunnableTask@@W7EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x1802AC4E0 (-AddRef@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBI@EAAKXZ @ 0x1802AC500 (-AddRef@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WCA@EAAKXZ @ 0x1802AC520 (-AddRef@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(CRunnableTask *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
