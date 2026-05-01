/*
 * XREFs of ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x1805DA08C
 * Callers:
 *     ?Kill@CRunnableTask@@UEAAJH@Z @ 0x1805D97A0 (-Kill@CRunnableTask@@UEAAJH@Z.c)
 *     ?Resume@CRunnableTask@@UEAAJXZ @ 0x1805D9E70 (-Resume@CRunnableTask@@UEAAJXZ.c)
 *     ?Run@CRunnableTask@@UEAAJXZ @ 0x1805D9EF0 (-Run@CRunnableTask@@UEAAJXZ.c)
 *     ?Suspend@CRunnableTask@@UEAAJXZ @ 0x1805DAB50 (-Suspend@CRunnableTask@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::SetAbort(CRunnableTask *this, __int32 a2)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 16) != a2 )
  {
    _InterlockedExchange((volatile __int32 *)this + 16, a2);
    v2 = (void *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      if ( a2 )
        SetEvent(v2);
      else
        ResetEvent(v2);
    }
  }
}
