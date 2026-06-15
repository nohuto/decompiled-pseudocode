/*
 * XREFs of ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x14001E910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007575C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::APOProcess(
        CSystemEffectWrapper *this,
        unsigned int a2,
        struct APO_CONNECTION_PROPERTY **a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, struct APO_CONNECTION_PROPERTY **))(**((_QWORD **)this + 20) + 24LL))(
    *((_QWORD *)this + 20),
    a2,
    a3);
}
