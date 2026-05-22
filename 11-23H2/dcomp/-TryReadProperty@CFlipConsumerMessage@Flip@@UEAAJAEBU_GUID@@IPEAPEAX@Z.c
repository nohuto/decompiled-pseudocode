/*
 * XREFs of ?TryReadProperty@CFlipConsumerMessage@Flip@@UEAAJAEBU_GUID@@IPEAPEAX@Z @ 0x1801ACA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Flip::CFlipConsumerMessage::TryReadProperty(
        Flip::CFlipConsumerMessage *this,
        const struct _GUID *a2,
        __int64 a3,
        void **a4)
{
  return (**((__int64 (__fastcall ***)(char *, const struct _GUID *, __int64, void **))this + 6))(
           (char *)this + 48,
           a2,
           a3,
           a4);
}
