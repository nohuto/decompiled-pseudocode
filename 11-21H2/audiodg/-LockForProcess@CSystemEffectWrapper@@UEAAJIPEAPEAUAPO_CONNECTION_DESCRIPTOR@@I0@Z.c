/*
 * XREFs of ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x14002AFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::LockForProcess(
        CSystemEffectWrapper *this,
        unsigned int a2,
        struct APO_CONNECTION_DESCRIPTOR **a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct APO_CONNECTION_DESCRIPTOR **))(**((_QWORD **)this + 20)
                                                                                          + 24LL))(
             *((_QWORD *)this + 20),
             a2,
             a3);
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)this + 60, 1);
  return result;
}
