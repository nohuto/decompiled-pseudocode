/*
 * XREFs of ?GetPresentRetiringFence@CSynchronizationContext11@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AED20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSynchronizationContext11::GetPresentRetiringFence(
        CSynchronizationContext11 *this,
        const struct _GUID *a2,
        void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 4))(
           *((_QWORD *)this + 4),
           a2,
           a3);
}
