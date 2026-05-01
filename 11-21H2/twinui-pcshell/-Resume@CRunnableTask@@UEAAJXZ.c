/*
 * XREFs of ?Resume@CRunnableTask@@UEAAJXZ @ 0x1805D9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x1805DA08C (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 */

__int64 __fastcall CRunnableTask::Resume(CRunnableTask *this)
{
  if ( *((_DWORD *)this + 11) != 2 )
    return 2147500037LL;
  *((_DWORD *)this + 11) = 1;
  CRunnableTask::SetAbort(this, 0);
  return (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 88LL))(this);
}
