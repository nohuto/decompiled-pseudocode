/*
 * XREFs of ?AcceptInput@CSystemEffectWrapper@@UEAAXKPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400393C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007575C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::AcceptInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 58, 2, 1) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 24) + 24LL))(
      *((_QWORD *)this + 24),
      a2,
      a3);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 58, 1, 2);
}
