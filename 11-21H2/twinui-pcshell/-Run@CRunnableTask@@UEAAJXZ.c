/*
 * XREFs of ?Run@CRunnableTask@@UEAAJXZ @ 0x1805D9EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x1805DA08C (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 */

__int64 __fastcall CRunnableTask::Run(CRunnableTask *this)
{
  unsigned int v2; // edi
  char v3; // al
  int v4; // ecx
  char v5; // si
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = -2147467259;
  v3 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 104LL))(this);
  v4 = *((_DWORD *)this + 11);
  v5 = v3;
  if ( v4 != 1 )
  {
    if ( v4 )
      return v2;
    if ( _InterlockedExchange((volatile __int32 *)this + 11, 1) == 3 )
    {
      *((_DWORD *)this + 11) = 4;
      return 0LL;
    }
    if ( *((_DWORD *)this + 11) == 1 )
    {
      v7 = 0LL;
      if ( v3 )
        (*(void (__fastcall **)(CRunnableTask *, __int64 *))(*(_QWORD *)this + 112LL))(this, &v7);
      v2 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 64LL))(this);
      if ( v5 )
        (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 120LL))(this, v7);
      if ( (v2 & 0x80000000) == 0 )
      {
        if ( *((_DWORD *)this + 11) == 1 )
        {
          v7 = 0LL;
          if ( v5 )
            (*(void (__fastcall **)(CRunnableTask *, __int64 *))(*(_QWORD *)this + 112LL))(this, &v7);
          v2 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 96LL))(this);
          if ( v5 )
            (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 120LL))(this, v7);
        }
        else
        {
          if ( *((_DWORD *)this + 11) != 2 )
          {
LABEL_21:
            *((_DWORD *)this + 11) = 4;
            return v2;
          }
          CRunnableTask::SetAbort(this, 0);
          v2 = -2147483638;
        }
      }
    }
    if ( *((_DWORD *)this + 11) == 2 && v2 == -2147483638 )
      return v2;
    goto LABEL_21;
  }
  return 1;
}
