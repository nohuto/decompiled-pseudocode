/*
 * XREFs of ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18006AC80
 * Callers:
 *     ?GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18028FDA0 (-GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveAppArray::GetAt(CImmersiveAppArray *this, __int64 a2, const struct _GUID *a3, void **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(**((_QWORD **)this + 3) + 32LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           a4);
}
