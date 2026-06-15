/*
 * XREFs of ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400190E8
 * Callers:
 *     ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018B30 (-NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007570C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::QIInternal(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 17))(
           *((_QWORD *)this + 17),
           a2,
           a3);
}
