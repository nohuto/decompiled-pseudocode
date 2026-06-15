/*
 * XREFs of ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x14006D210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetEffectsList(
        CSystemEffectWrapper *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(**((_QWORD **)this + 20) + 24LL))(
           *((_QWORD *)this + 20),
           a2,
           a3,
           a4);
}
