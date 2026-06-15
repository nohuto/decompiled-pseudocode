/*
 * XREFs of ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x14002B3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::UnlockForProcess(CSystemEffectWrapper *this)
{
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 60, 0, 1) != 1 )
    Sleep(1u);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 32LL))(*((_QWORD *)this + 20));
}
