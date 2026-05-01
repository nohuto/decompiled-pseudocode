/*
 * XREFs of ?AddRef@CRunnableTask@@UEAAKXZ @ 0x180181E30
 * Callers:
 *     ?AddRef@CRunnableTask@@W7EAAKXZ @ 0x180210010 (-AddRef@CRunnableTask@@W7EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x180210030 (-AddRef@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBI@EAAKXZ @ 0x180210050 (-AddRef@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WCA@EAAKXZ @ 0x180210070 (-AddRef@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(CRunnableTask *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
