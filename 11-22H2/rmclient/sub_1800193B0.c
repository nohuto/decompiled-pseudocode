/*
 * XREFs of sub_1800193B0 @ 0x1800193B0
 * Callers:
 *     sub_1800190B0 @ 0x1800190B0 (sub_1800190B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800193B0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _QWORD *Ptr)
{
  _QWORD *v5; // r14
  RTL_SRWLOCK *v10; // rbx
  void *v11; // rcx
  unsigned int v12; // edi
  __int64 result; // rax
  PVOID v14; // rbx
  RTL_SRWLOCK *v15; // rsi
  void *v16; // rcx

  v5 = Ptr;
  Ptr = 0LL;
  *v5 = 0LL;
  if ( **(_QWORD **)(a4 + 24) )
  {
    v10 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    AcquireSRWLockShared(v10);
    v11 = **(void ***)(a4 + 24);
    if ( v11 )
    {
      Ptr = DecodePointer(v11);
      v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))*Ptr)(Ptr, a3, v5);
      if ( v10 )
        ReleaseSRWLockShared(v10);
      return v12;
    }
    if ( v10 )
      ReleaseSRWLockShared(v10);
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, _QWORD **))a4)(a2, a4, a3, &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*a2 & 4) != 0 )
      goto LABEL_17;
    v14 = 0LL;
    v15 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    AcquireSRWLockExclusive(v15);
    v16 = **(void ***)(a4 + 24);
    if ( v16 )
    {
      v14 = DecodePointer(v16);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 8LL))(v14);
    }
    else
    {
      **(_QWORD **)(a4 + 24) = EncodePointer(Ptr);
    }
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    if ( !v14 )
    {
LABEL_17:
      v14 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
    }
    *v5 = v14;
    return 0LL;
  }
  return result;
}
